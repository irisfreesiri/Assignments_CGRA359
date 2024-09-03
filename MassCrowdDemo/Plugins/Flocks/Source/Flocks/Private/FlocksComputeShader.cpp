// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksComputeShader.h"
#include "GlobalShader.h"
#include "ShaderParameterStruct.h"
#include "RenderGraphUtils.h"
#include "RenderTargetPool.h"
#include "FlocksWorld.h"
#include "FlocksStateTable.h"
#include "FlocksBoidMap.h"
#include "Utils/IndexArray.h"
#include "FlocksDatabaseHeader.h"
#include "FlocksVolumeInfoTable.h"

#include "Modules/ModuleInterface.h"
#include "Modules/ModuleManager.h"

#if !UE_VERSION_OLDER_THAN(5, 2, 0)
#include "DataDrivenShaderPlatformInfo.h"
#endif

class FFlocksComputeShader : public FGlobalShader
{
public:
	DECLARE_GLOBAL_SHADER(FFlocksComputeShader);
	SHADER_USE_PARAMETER_STRUCT(FFlocksComputeShader, FGlobalShader);

	BEGIN_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER(int32, BoidCount)
		SHADER_PARAMETER(int32, VolumeCount)
		SHADER_PARAMETER(int32, CalculationsPerThread)
		SHADER_PARAMETER(int32, MaxNeighbourChecks)
		SHADER_PARAMETER(float, DeltaSeconds)
		SHADER_PARAMETER(float, CellSize)

		SHADER_PARAMETER_UAV(RWStructuredBuffer<unsigned int>, SortedCellList)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<unsigned int>, CellOffsetList)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<unsigned int>, CellBoidCount)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<FlocksStateTable::FTableData>, BoidData)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<FlocksVolumeInfoTable::FTableData>, VolumeData)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<AFlocksWorld::GroupData>, GroupData)
		SHADER_PARAMETER_UAV(RWStructuredBuffer<FlocksStateTable::FTableData>, OutBoidData)
		END_SHADER_PARAMETER_STRUCT()

public:
	static bool ShouldCompilePermutation(const FGlobalShaderPermutationParameters& Parameters)
	{
#if UE_VERSION_OLDER_THAN(5, 2, 0)
		return IsFeatureLevelSupported(Parameters.Platform, ERHIFeatureLevel::SM5);
#else
		return ERHIFeatureLevel::SM5 <= FDataDrivenShaderPlatformInfo::GetMaxFeatureLevel(Parameters.Platform);
#endif
	}

	static inline void ModifyCompilationEnvironment(const FGlobalShaderPermutationParameters& Parameters, FShaderCompilerEnvironment& OutEnvironment)
	{
		FGlobalShader::ModifyCompilationEnvironment(Parameters, OutEnvironment);

		OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_X"), NUM_THREADS_PER_GROUP_DIMENSION);
		OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Y"), 1);
		OutEnvironment.SetDefine(TEXT("THREADGROUPSIZE_Z"), 1);
		OutEnvironment.SetDefine(TEXT("MAX_BOIDS"), MAX_BOIDS);
		OutEnvironment.SetDefine(TEXT("MAX_GROUPS"), MAX_GROUPS);
		OutEnvironment.SetDefine(TEXT("MAX_VOLUMES"), MAX_VOLUMES);
		OutEnvironment.SetDefine(TEXT("TOTAL_CELLS"), TOTAL_CELLS);
	}
};

IMPLEMENT_GLOBAL_SHADER(FFlocksComputeShader, "/Flocks/Private/ComputeFishShader.usf", "MainComputeShader", SF_Compute);

inline void* FlocksLockBuffer(FRHICommandListImmediate& RHICmdList, FFlocksBufferRHIRef Buffer, unsigned int Size, EResourceLockMode LockMode)
{
#if UE_VERSION_OLDER_THAN(5, 0, 0)
	return RHICmdList.LockStructuredBuffer(Buffer, 0, Size, LockMode);
#else
	return RHICmdList.LockBuffer(Buffer, 0, Size, LockMode);
#endif
}

inline void FlocksUnlockBuffer(FRHICommandListImmediate& RHICmdList, FFlocksBufferRHIRef Buffer)
{
#if UE_VERSION_OLDER_THAN(5, 0, 0)
	RHICmdList.UnlockStructuredBuffer(Buffer);
#else
	RHICmdList.UnlockBuffer(Buffer);
#endif
}

void CreateBufferAndUAV(unsigned int Stride, unsigned int AllocationSizeBytes, FFlocksBufferRHIRef& Buffer, FUnorderedAccessViewRHIRef& UAV)
{
	FRHIResourceCreateInfo DataResource = FRHIResourceCreateInfo(TEXT("TEMP"));

#if UE_VERSION_OLDER_THAN(5, 3, 0)
	Buffer = RHICreateStructuredBuffer(Stride, AllocationSizeBytes, BUF_UnorderedAccess, DataResource);
	UAV = RHICreateUnorderedAccessView(Buffer, false, false);
#else
	FRHICommandListBase& RHICmdList = FRHICommandListImmediate::Get();
	Buffer = RHICmdList.CreateStructuredBuffer(Stride, AllocationSizeBytes, BUF_UnorderedAccess, DataResource);
	UAV = RHICmdList.CreateUnorderedAccessView(Buffer, false, false);
#endif
}

void UpdateBufferFromData(FRHICommandListImmediate& RHICmdList, void* Data, unsigned int CopySizeBytes, FFlocksBufferRHIRef& Buffer)
{
	if (CopySizeBytes == 0)
		return;

	void* BufferData = (void*)FlocksLockBuffer(RHICmdList, Buffer, CopySizeBytes, EResourceLockMode::RLM_WriteOnly);
	FMemory::Memcpy(BufferData, Data, CopySizeBytes);
	FlocksUnlockBuffer(RHICmdList, Buffer);
}

FlocksShaderManager::FlocksShaderManager(AFlocksWorld* InWorld)
{
	World = InWorld;

	ThreadNumGroupCount = (MAX_BOIDS % (NUM_THREADS_PER_GROUP_DIMENSION * CalculationsPerThread) == 0 ?
		MAX_BOIDS / (NUM_THREADS_PER_GROUP_DIMENSION * CalculationsPerThread) :
		MAX_BOIDS / (NUM_THREADS_PER_GROUP_DIMENSION * CalculationsPerThread) + 1);
	ThreadNumGroupCount = ThreadNumGroupCount == 0 ? 1 : ThreadNumGroupCount;

	ENQUEUE_RENDER_COMMAND(CreateFlocksBuffers)([this](FRHICommandListImmediate& RHICmdList)
		{
			CreateBufferAndUAV(sizeof(unsigned int), sizeof(unsigned int) * MAX_BOIDS, SortedCellListBuffer, SortedCellListUAV);
			CreateBufferAndUAV(sizeof(unsigned int), sizeof(unsigned int) * TOTAL_CELLS, CellOffsetListBuffer, CellOffsetListUAV);
			CreateBufferAndUAV(sizeof(unsigned int), sizeof(unsigned int) * TOTAL_CELLS, CellBoidCountBuffer, CellBoidCountUAV);
			CreateBufferAndUAV(sizeof(FlocksStateTable::FTableData), sizeof(FlocksStateTable::FTableData) * MAX_BOIDS, BoidDataBuffer, BoidDataUAV);
			CreateBufferAndUAV(sizeof(FlocksVolumeInfoTable::FTableData), sizeof(FlocksVolumeInfoTable::FTableData) * MAX_VOLUMES, VolumeDataBuffer, VolumeDataUAV);
			CreateBufferAndUAV(sizeof(AFlocksWorld::FFlocksGroupData), sizeof(AFlocksWorld::FFlocksGroupData) * MAX_GROUPS, GroupDataBuffer, GroupDataUAV);
			CreateBufferAndUAV(sizeof(FlocksStateTable::FTableData), sizeof(FlocksStateTable::FTableData) * MAX_BOIDS, OutBoidDataBuffer, OutBoidDataUAV);
		});
	Fence.BeginFence();
}

FlocksShaderManager::~FlocksShaderManager()
{
	World = 0;
}

void FlocksShaderManager::Execute(float CurrentTime)
{
	if(Fence.IsFenceComplete())
	{
		ENQUEUE_RENDER_COMMAND(SceneDrawCompletion)([this, CurrentTime](FRHICommandListImmediate& RHICmdList)
			{
				this->Execute_RenderThread(RHICmdList, CurrentTime);
			});

		Fence.BeginFence();
	}
}

void FlocksShaderManager::Execute_RenderThread(FRHICommandListImmediate& RHICmdList, float CurrentTime)
{
	FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
	FlocksVolumeInfoTable::FTableData* VolumeTableData = World->VolumeInfoTable->Lock();
	FlocksBoidMap::FBoidMapData* BoidMapData = World->BoidMap->Lock();
	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();

	QUICK_SCOPE_CYCLE_COUNTER(Flocks_compute_shader____execute);
	//Render Thread Assertion
	check(IsInRenderingThread());

	TShaderMapRef<FFlocksComputeShader> Shader(GetGlobalShaderMap(GMaxRHIFeatureLevel));
	UpdateBufferFromData(RHICmdList, BoidMapData->SortedCellList.GetData(), sizeof(unsigned int) * MAX_BOIDS, SortedCellListBuffer);
	UpdateBufferFromData(RHICmdList, BoidMapData->CellOffsetList, sizeof(unsigned int) * TOTAL_CELLS, CellOffsetListBuffer);
	UpdateBufferFromData(RHICmdList, BoidMapData->CellBoidCount, sizeof(unsigned int) * TOTAL_CELLS, CellBoidCountBuffer);
	UpdateBufferFromData(RHICmdList, StateTableData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS, BoidDataBuffer);
	UpdateBufferFromData(RHICmdList, StateTableData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS, OutBoidDataBuffer);
	UpdateBufferFromData(RHICmdList, VolumeTableData, sizeof(FlocksVolumeInfoTable::FTableData) * MAX_VOLUMES, VolumeDataBuffer);
	UpdateBufferFromData(RHICmdList, GroupData, sizeof(AFlocksWorld::FFlocksGroupData) * MAX_GROUPS, GroupDataBuffer);

	FFlocksComputeShader::FParameters ComputeParams;
	ComputeParams.BoidCount = World->DatabaseHeader->BoidInfo->ArrayUsed;
	ComputeParams.VolumeCount = World->DatabaseHeader->VolumeInfo->ArrayUsed;
	ComputeParams.MaxNeighbourChecks = World->MaxNeighbourChecks;
	ComputeParams.CalculationsPerThread = CalculationsPerThread;
	ComputeParams.CellSize = World->BoidMap->CellSize;
	ComputeParams.DeltaSeconds = CurrentTime - LastExecutionTime;
	ComputeParams.SortedCellList = SortedCellListUAV;
	ComputeParams.CellOffsetList = CellOffsetListUAV;
	ComputeParams.CellBoidCount = CellBoidCountUAV;
	ComputeParams.BoidData = BoidDataUAV;
	ComputeParams.VolumeData = VolumeDataUAV;
	ComputeParams.GroupData = GroupDataUAV;
	ComputeParams.OutBoidData = OutBoidDataUAV;
	LastExecutionTime = CurrentTime;

	//Get a reference to our shader type from global shader map
	FComputeShaderUtils::Dispatch(RHICmdList, Shader, ComputeParams, FIntVector(ThreadNumGroupCount, 1, 1));

	FlocksStateTable::FTableData* OutBoidData = (FlocksStateTable::FTableData*)FlocksLockBuffer(RHICmdList, OutBoidDataBuffer, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS, EResourceLockMode::RLM_ReadOnly);
	FMemory::Memcpy(StateTableData, OutBoidData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS);
	FlocksUnlockBuffer(RHICmdList, OutBoidDataBuffer);

	World->StateTable->Unlock();
	World->VolumeInfoTable->Unlock();
	World->BoidMap->Unlock();
	World->UnlockGroupData();
}