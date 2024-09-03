// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksVisualsTable.h"
#include "FlocksWorld.h"
#include "FlocksStateTable.h"
#include "FlocksAnimationTable.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Engine/Texture2D.h"
#include "Misc/EngineVersionComparison.h"

#include "Materials/MaterialInstanceDynamic.h"

#define LOCTEXT_NAMESPACE "FFlocksModule"

FlocksVisualsTable::FlocksVisualsTable(AFlocksWorld* InWorld) : FlocksBoidTable(InWorld)
{
	AnimationTable = new FlocksAnimationTable(World, this);

	for (int32 i = 0; i < MAX_BOIDS; ++i)
	{
		Data[i].BoidCustomData = nullptr;
	}
}

FlocksVisualsTable::~FlocksVisualsTable()
{
	delete AnimationTable;

	for (int32 i = 0; i < MAX_BOIDS; ++i)
	{
		if (Data[i].BoidCustomData != nullptr)
		{
			delete[] Data[i].BoidCustomData;
			Data[i].BoidCustomData = nullptr;
		}
	}
}


FlocksVisualsTable::FTableData* FlocksVisualsTable::Lock()
{
	TableLock.Lock();
	return Data;
}

void FlocksVisualsTable::Unlock()
{
	TableLock.Unlock();
}

void FlocksVisualsTable::Init(FMeshRendererData InMeshRendererData, UInstancedStaticMeshComponent* InISMComponent)
{
	ISMComponent = InISMComponent;

	CustomPivot = InMeshRendererData.CustomPivot;
	NumCustomDataValues = InMeshRendererData.NumCustomDataValues + World->PluginReservedCustomDataValues;
	ISMComponent->NumCustomDataFloats = NumCustomDataValues;
#if UE_VERSION_OLDER_THAN(5, 4, 0)
	ISMComponent->InitPerInstanceRenderData(true);
#endif
	ISMComponent->SetStaticMesh(InMeshRendererData.Mesh);

	for (int32 i = 0; i < MAX_BOIDS; ++i)
	{
		Data[i].BoidCustomData = new float[NumCustomDataValues];
	}

	Materials.SetNum(InMeshRendererData.Materials.Num());
	for (int32 i = 0; i < InMeshRendererData.Materials.Num(); ++i)
	{
		if (InMeshRendererData.Materials[i] == nullptr)
		{
			ISMComponent->SetMaterial(i, nullptr);
			continue;
		}

#if WITH_EDITOR
		if (!InMeshRendererData.Materials[i]->CheckMaterialUsage(EMaterialUsage::MATUSAGE_InstancedStaticMeshes))
		{
			FMessageLog MessageLog = FMessageLog("PIE");
			MessageLog.Open(EMessageSeverity::Error, true);
			MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksIncorrectMaterialUsageError", "Invalid Material \"{0}\": Material Must be marked with Used With Instanced Static Meshes"), FText::FromString(InMeshRendererData.Materials[i]->GetName())));
		}
#endif

		Materials[i] = UMaterialInstanceDynamic::Create(InMeshRendererData.Materials[i], World);
		ISMComponent->SetMaterial(i, Materials[i].Get());
		ISMComponent->SetCastShadow(InMeshRendererData.bCastShadow);

		if (InMeshRendererData.AnimationData != nullptr)
		{
			AnimationTable->SetAnimationData(InMeshRendererData.AnimationData);

#if WITH_EDITOR
			TArray<FMaterialParameterInfo> Info;
			TArray<FGuid> Guids;

			Materials[i]->GetAllScalarParameterInfo(Info, Guids);

			bool bImplementsFlocksAnim = false;
			for (int32 j = 0; j < Info.Num(); ++j)
			{
				bImplementsFlocksAnim |= Info[j].Name == FName("Implements Flocks Anim");
			}

			if (!bImplementsFlocksAnim)
			{
				FMessageLog MessageLog = FMessageLog("PIE");
				MessageLog.Open(EMessageSeverity::Error, true);
				MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksAnimationSetupError", "Flocks Mesh Is set to Use Animation - but its material \"{0}\" doesn't implement MF_FLOCKS_VAT_V2 Node"), FText::FromString(InMeshRendererData.Materials[i]->GetName())));
			}
#endif

			Materials[i]->SetTextureParameterValue(FName("VAT Position Texture"), InMeshRendererData.AnimationData->PositionTexture);
			Materials[i]->SetTextureParameterValue(FName("VAT Normal Texture"), InMeshRendererData.AnimationData->NormalTexture);
		}
	}
}

TArray<unsigned short> FlocksVisualsTable::AddBoid(int32 Amount, BOID_HANDLE* Handles, const FAddBoidData* InData)
{
	TArray<unsigned short> AddedIndices;
	AddedIndices.SetNum(Amount);

	FThreadSafeCounter NumBoidsAdded = 0;
	FlocksAnimationTable::FAddBoidData AnimTableBoidData[MAX_BOIDS];

	for (int32 i = 0; i < Amount; ++i)
	{
		AddedIndices[i] = LookUpTable->AddBoid(Handles[i]);
	}

	Lock();
	ParallelFor(Amount, [this, &AddedIndices, &NumBoidsAdded, &AnimTableBoidData, Handles, InData](int32 i) {
		int32 TableIndex = AddedIndices[i];
		AnimTableBoidData[i] = InData[i].AnimationData;

		if (TableIndex != INVALID_BOID_HANDLE_INDEX)
		{
			memset(Data[TableIndex].BoidCustomData, 0, sizeof(float) * NumCustomDataValues);

			int32 MinCustomDataValues = FMath::Min(NumCustomDataValues, InData[i].CustomDataValues.Num());
			memcpy(Data[TableIndex].BoidCustomData, InData[i].CustomDataValues.GetData(), sizeof(float) * MinCustomDataValues);

			NumBoidsAdded.Add(1);
		}
		});
	Unlock();

	for (int32 i = 0; i < NumBoidsAdded.GetValue(); ++i)
	{
		FTransform Trans;
		ISMComponent->AddInstance(Trans);
	}

	if (AnimationTable != nullptr)
	{
		AnimationTable->AddBoid(Amount, Handles, AnimTableBoidData);
	}

	return AddedIndices;
}

void FlocksVisualsTable::RemoveBoid(int32 Amount, BOID_HANDLE* Handles)
{
	Lock();
	for (int32 i = 0; i < Amount; ++i)
	{
		unsigned short Index = Find(Handles[i]);

		if (Index != INVALID_BOID_HANDLE_INDEX)
		{
			LookUpTable->RemoveBoid(Handles[i]);
			ISMComponent->RemoveInstance(0);
			memcpy(Data[Index].BoidCustomData, Data[Size()].BoidCustomData, sizeof(float) * NumCustomDataValues);
		}
	}
	Unlock();

	if (AnimationTable != nullptr)
	{
		AnimationTable->RemoveBoid(Amount, Handles);
	}
}

void FlocksVisualsTable::Update(float DeltaSeconds)
{
	if (AnimationTable)
	{
		AnimationTable->Update(DeltaSeconds);
	}

	FTransform CustomPivotInverse = CustomPivot.Inverse();

	TArray<FTransform> BoidTransforms;
	BoidTransforms.SetNum(Size());

	FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
	ParallelFor(Size(), [this, StateTableData, CustomPivotInverse, &BoidTransforms](int32 Index)
		{
			unsigned short StateTableIndex = World->StateTable->Find(LookUpTable->Boids[Index]);

			FVector3f Position = StateTableData[StateTableIndex].Position;
			FVector3f Heading = StateTableData[StateTableIndex].Heading;
			float Scale = StateTableData[StateTableIndex].Scale;

			BoidTransforms[Index] = FTransform(FVector(Heading.X, Heading.Y, Heading.Z).Rotation(), FVector(Position.X, Position.Y, Position.Z), FVector::OneVector * Scale);
			BoidTransforms[Index] = UKismetMathLibrary::ComposeTransforms(CustomPivotInverse, BoidTransforms[Index]);
		});
	World->StateTable->Unlock();

	ISMComponent->BatchUpdateInstancesTransforms(0, BoidTransforms, true, true, false);

	Lock();
	for(int32 Index = 0; Index < Size(); ++ Index)
	{
		TArray<float> CustomData;
		CustomData.SetNum(NumCustomDataValues);
	
		for(int32 i = 0; i < NumCustomDataValues; ++i)
		{
			CustomData[i] = Data[Index].BoidCustomData[i];
		}
	
		ISMComponent->SetCustomData(Index, CustomData, false);
	}

	ISMComponent->MarkRenderStateDirty();
	Unlock();
}

void FlocksVisualsTable::SetMaterialCustomDataValue(BOID_HANDLE Boid, unsigned int ValueIndex, float Value)
{
	unsigned short Index = Find(Boid);
	checkf((int32)ValueIndex < NumCustomDataValues, TEXT("Invalid Material Custom Data Value Index \"%i\": Greater than max defined number of Custom Data Values - Check the settings in the Flocks World"), ValueIndex);
	Data[Index].BoidCustomData[ValueIndex] = Value;
}

void FlocksVisualsTable::SetMaterialCustomDataValueOnAll(unsigned int ValueIndex, float Value)
{
	ParallelFor(Size(), [this, ValueIndex, Value](int32 Index)
		{
			Data[Index].BoidCustomData[ValueIndex] = Value;
		});
}

void FlocksVisualsTable::SetMaterialParam(FName Name, UTexture2D* Value)
{
	for (int32 i = 0; i < Materials.Num(); ++i)
	{
		if (Materials[i] == nullptr)
			continue;

		Materials[i]->SetTextureParameterValue(Name, Value);
	}
}

void FlocksVisualsTable::SetMaterialParam(FName Name, float Value)
{
	for (int32 i = 0; i < Materials.Num(); ++i)
	{
		if (Materials[i] == nullptr)
			continue;

		Materials[i]->SetScalarParameterValue(Name, Value);
	}
}

void FlocksVisualsTable::SetMaterialParam(FName Name, FVector Value)
{
	for (int32 i = 0; i < Materials.Num(); ++i)
	{
		if (Materials[i] == nullptr)
			continue;

		Materials[i]->SetVectorParameterValue(Name, FLinearColor(Value.X, Value.Y, Value.Z, 0.0f));
	}
}

#undef LOCTEXT_NAMESPACE