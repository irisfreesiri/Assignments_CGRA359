// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "FlocksVolumeInfoTable.h"
#include "FlocksStateTable.h"
#include "FlocksWorld.h"
#include "FlocksBoidMap.h"

#include "GlobalShader.h"
#include "UniformBuffer.h"
#include "RHICommandList.h"
#include "Misc/EngineVersionComparison.h"

class AFlocksWorld;

#define NUM_THREADS_PER_GROUP_DIMENSION 32

#if UE_VERSION_OLDER_THAN(5, 0, 0)
typedef FStructuredBufferRHIRef FFlocksBufferRHIRef;
#else
typedef FBufferRHIRef FFlocksBufferRHIRef;
#endif

class FLOCKS_API FlocksShaderManager
{
public:
	FlocksShaderManager(AFlocksWorld* InWorld);
	~FlocksShaderManager();
	
	void Execute(float CurrentTime);

	AFlocksWorld* World = 0;

	float LastExecutionTime = 0.0f;
	unsigned short CalculationsPerThread = 1;
	unsigned short ThreadNumGroupCount = 0;

	FUnorderedAccessViewRHIRef SortedCellListUAV;
	FUnorderedAccessViewRHIRef CellOffsetListUAV;
	FUnorderedAccessViewRHIRef CellBoidCountUAV;
	FUnorderedAccessViewRHIRef BoidDataUAV;
	FUnorderedAccessViewRHIRef VolumeDataUAV;
	FUnorderedAccessViewRHIRef GroupDataUAV;
	FUnorderedAccessViewRHIRef OutBoidDataUAV;

	FFlocksBufferRHIRef SortedCellListBuffer;
	FFlocksBufferRHIRef CellOffsetListBuffer;
	FFlocksBufferRHIRef CellBoidCountBuffer;
	FFlocksBufferRHIRef BoidDataBuffer;
	FFlocksBufferRHIRef VolumeDataBuffer;
	FFlocksBufferRHIRef GroupDataBuffer;
	FFlocksBufferRHIRef OutBoidDataBuffer;

	bool bValidParameters = false;
	FRenderCommandFence Fence;

private:
	void Execute_RenderThread(FRHICommandListImmediate& RHICmdList, float CurrentTime);
};