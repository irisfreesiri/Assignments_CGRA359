#include "FlocksAnimationTable.h"

#include "FlocksLookUpTable.h"
#include "FlocksVisualsTable.h"
#include "FlocksWorld.h"

FlocksAnimationTable::FlocksAnimationTable(AFlocksWorld* InWorld, FlocksVisualsTable* InVisualsTable) : FlocksBoidTable(InWorld)
{
	VisualsTable = InVisualsTable;
}

FlocksAnimationTable::~FlocksAnimationTable()
{
	AnimationData = nullptr;
}

void FlocksAnimationTable::SetAnimationData(UFlocksAnimationData* InAnimationData)
{
	AnimationData = InAnimationData;

	if (InAnimationData)
	{
		for (int32 i = 0; i < AnimationData->Animations.Num(); ++i)
		{
			AnimationNameToIndex.Add(AnimationData->Animations[i].AnimationName, i);
		}
	}
}

FlocksAnimationTable::FTableData* FlocksAnimationTable::Lock()
{
	TableLock.Lock();
	return Data;
}

void FlocksAnimationTable::Unlock()
{
	TableLock.Unlock();
}

TArray<unsigned short> FlocksAnimationTable::AddBoid(int32 Amount, BOID_HANDLE* Handles, const FAddBoidData* InData)
{
	TArray<unsigned short> AddedIndices;
	AddedIndices.SetNum(Amount);

	for (int32 i = 0; i < Amount; ++i)
	{
		AddedIndices[i] = LookUpTable->AddBoid(Handles[i]);
	}

	Lock();
	ParallelFor(Amount, [this, &AddedIndices, Handles, InData](int32 i) {
		int32 TableIndex = AddedIndices[i];

		if (TableIndex != INVALID_BOID_HANDLE_INDEX)
		{
			Data[TableIndex].AnimRateScale = InData[i].AnimRateScale;
			Data[TableIndex].ActiveAnimationIndex = -1;
			Data[TableIndex].ActiveAnimationName = NAME_None;
			Data[TableIndex].StartTime = 0.0f;
			Data[TableIndex].AnimDuration = 0.0f;
			Data[TableIndex].EndTime = 0.0f;
			Data[TableIndex].AnimTime = 0.0f;
			Data[TableIndex].CurrentLoops = 0;
			Data[TableIndex].TargetLoops = 0;
			Data[TableIndex].AnimationRateScale = 1.0f;
			Data[TableIndex].AnimationMode = EFlocksAnimationMode::LoopSingle;
			Data[TableIndex].LoopSingleAnimationName = NAME_None;

			if (AnimationData != nullptr)
			{
				float StartOffset = AnimationData->bUseRandomStartTime ? FMath::RandRange(0.0f, 1.0f) : 0.0f;
				Data[TableIndex].AnimationMode = AnimationData->AnimationMode;
				Data[TableIndex].LoopSingleAnimationName = AnimationData->DefaultAnimation;

				switch (AnimationData->AnimationMode)
				{
				case EFlocksAnimationMode::LoopSingle:
				{
					if(AnimationNameToIndex.Contains(AnimationData->DefaultAnimation))
					{
						int32 AnimationIndex = AnimationNameToIndex[AnimationData->DefaultAnimation];

						FFlocksAnimation* AnimData = &AnimationData->Animations[AnimationIndex];
						Data[TableIndex].ActiveAnimationIndex = AnimationIndex;
						Data[TableIndex].ActiveAnimationName = AnimationData->DefaultAnimation;
						Data[TableIndex].StartTime = AnimData->StartFrame * 0.033333f;
						Data[TableIndex].AnimDuration = (AnimData->NumberOfFrames * 0.033333f);
						Data[TableIndex].EndTime = Data[TableIndex].StartTime + Data[TableIndex].AnimDuration;
						Data[TableIndex].AnimTime = Data[TableIndex].StartTime + (StartOffset * Data[TableIndex].AnimDuration);
						Data[TableIndex].CurrentLoops = 0;
						Data[TableIndex].TargetLoops = 1;
						Data[TableIndex].AnimationRateScale = AnimData->RateScale;
					}
				}
				break;

				case EFlocksAnimationMode::PlayVarious:
				{
					int32 Rand = FMath::RandRange(0, AnimationData->AnimationVariations.Num() - 1);

					if (AnimationData->AnimationVariations.IsValidIndex(Rand))
					{
						FFlocksAnimationVariationData* Variation = &AnimationData->AnimationVariations[Rand];
						FName AnimationName = Variation->AnimationName;
						int32 Loops = FMath::RandRange(Variation->MinLoops, Variation->MaxLoops);

						if (AnimationNameToIndex.Contains(AnimationData->DefaultAnimation))
						{
							int32 AnimationIndex = AnimationNameToIndex[AnimationData->DefaultAnimation];

							FFlocksAnimation* AnimData = &AnimationData->Animations[AnimationIndex];
							Data[TableIndex].ActiveAnimationIndex = AnimationIndex;
							Data[TableIndex].ActiveAnimationName = AnimationData->DefaultAnimation;
							Data[TableIndex].StartTime = AnimData->StartFrame * 0.033333f;
							Data[TableIndex].AnimDuration = (AnimData->NumberOfFrames * 0.033333f);
							Data[TableIndex].EndTime = Data[TableIndex].StartTime + Data[TableIndex].AnimDuration;
							Data[TableIndex].AnimTime = Data[TableIndex].StartTime + (StartOffset * Data[TableIndex].AnimDuration);
							Data[TableIndex].CurrentLoops = 0;
							Data[TableIndex].TargetLoops = 1;
							Data[TableIndex].AnimationRateScale = AnimData->RateScale;
						}
					}
				}
				break;
				}
			}
		}
	});
	Unlock();

	return AddedIndices;
}

void FlocksAnimationTable::RemoveBoid(int32 Amount, BOID_HANDLE* Handles)
{
	Lock();
	for (int32 i = 0; i < Amount; ++i)
	{
		unsigned short Index = Find(Handles[i]);

		if (Index != INVALID_BOID_HANDLE_INDEX)
		{
			LookUpTable->RemoveBoid(Handles[i]);
			Data[Index] = Data[Size()];
		}
	}
	Unlock();
}

void FlocksAnimationTable::Update(float DeltaSeconds)
{
	if(AnimationData == nullptr)
		return;

	ParallelFor(Size(), [this, DeltaSeconds](int32 b)
	{
		BOID_HANDLE Boid = LookUpTable->Boids[b];

		float RateScale = Data[b].AnimRateScale;
		Data[b].AnimTime += DeltaSeconds * RateScale * Data[b].AnimationRateScale;

		if (Data[b].AnimTime >= Data[b].EndTime)
		{
			Data[b].CurrentLoops++;
			Data[b].AnimTime = (Data[b].AnimDuration > 0) ? (Data[b].AnimTime - Data[b].AnimDuration) : 0.0f;

			if (Data[b].CurrentLoops >= Data[b].TargetLoops)
			{
				float NewAnimProgress = Data[b].AnimDuration > 0.0f ? ((Data[b].AnimTime - Data[b].StartTime) / Data[b].AnimDuration) : 0.0f;

				switch (Data[b].AnimationMode)
				{
				case EFlocksAnimationMode::LoopSingle:
					PlayAnimation(Boid, Data[b].LoopSingleAnimationName, NewAnimProgress, 1);
					break;

				case EFlocksAnimationMode::PlayVarious:
					SelectNewVariousAnimation(Boid, NewAnimProgress);
					break;
				}
			}
		}

		VisualsTable->SetMaterialCustomDataValue(LookUpTable->Boids[b], 0, Data[b].AnimTime);
	});
}

void FlocksAnimationTable::SelectNewVariousAnimation(BOID_HANDLE Boid, float StartOffset)
{
	int32 Index = Find(Boid);
	int32 Rand = FMath::RandRange(0, AnimationData->AnimationVariations.Num() - 1);

	if (AnimationData->AnimationVariations.IsValidIndex(Rand))
	{
		FFlocksAnimationVariationData* Variation = &AnimationData->AnimationVariations[Rand];
		FName AnimationName = Variation->AnimationName;
		int32 Loops = FMath::RandRange(Variation->MinLoops, Variation->MaxLoops);
		PlayAnimation(Boid, AnimationName, StartOffset, Loops);
	}
	else
	{
		PlayAnimation(Boid, NAME_None, 0.0f, 1);
	}
}

void FlocksAnimationTable::SetAnimationMode(BOID_HANDLE Boid, EFlocksAnimationMode NewAnimationMode)
{
	unsigned short Index = Find(Boid);
	Data[Index].AnimationMode = NewAnimationMode;
}

void FlocksAnimationTable::SetLoopSingleAnimation(BOID_HANDLE Boid, const FName& NewAnimation)
{
	unsigned short Index = Find(Boid);
	Data[Index].LoopSingleAnimationName = NewAnimation;
}

bool FlocksAnimationTable::PlayAnimation(BOID_HANDLE Boid, const FName& Animation, float StartOffset, int32 NumLoops)
{
	if (!AnimationNameToIndex.Contains(Animation))
	{
		return false;
	}
	
	unsigned short Index = Find(Boid);
	int32 AnimationIndex = AnimationNameToIndex[Animation];

	FFlocksAnimation* AnimData = &AnimationData->Animations[AnimationIndex];
	Data[Index].ActiveAnimationIndex = AnimationIndex;
	Data[Index].ActiveAnimationName = Animation;
	Data[Index].StartTime = AnimData->StartFrame * 0.033333f;
	Data[Index].AnimDuration = (AnimData->NumberOfFrames * 0.033333f);
	Data[Index].EndTime = Data[Index].StartTime + Data[Index].AnimDuration;
	Data[Index].AnimTime = Data[Index].StartTime + (StartOffset * Data[Index].AnimDuration);
	Data[Index].CurrentLoops = 0;
	Data[Index].TargetLoops = NumLoops;
	Data[Index].AnimationRateScale = AnimData->RateScale;

	return true;
}
