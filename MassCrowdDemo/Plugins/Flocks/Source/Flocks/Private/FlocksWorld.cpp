// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksWorld.h"

#include "FlocksVolumeActor.h"
#include "FlocksAnimationTable.h"
#include "FlocksStateTable.h"
#include "FlocksVisualsTable.h"
#include "FlocksBoidMap.h"
#include "FlocksLookUpTable.h"
#include "Utils/IndexArray.h"
#include "FlocksComputeShader.h"
#include "FlocksDatabaseHeader.h"
#include "FlocksVolumeInfoTable.h"
#include "RenderingThread.h"
#include "FlocksStatics.h"
#include "Logging/MessageLog.h"
#include "FlocksMath.h"

#include "Engine/StaticMesh.h"
#include "UObject/ConstructorHelpers.h"

#include "Components/InstancedStaticMeshComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "EngineUtils.h"

#define LOCTEXT_NAMESPACE "FFlocksModule"

TWeakObjectPtr<AFlocksWorld> AFlocksWorld::WorldInst = 0;

AFlocksWorld::AFlocksWorld()
{
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));
	PrimaryActorTick.bCanEverTick = true;

	BoidsPendingDelete = new BOID_HANDLE[MAX_BOIDS];

	DatabaseHeader = new FlocksDatabaseHeader();
	FlockShader = new FlocksShaderManager(this);
	StateTable = new FlocksStateTable(this);
	BoidMap = new FlocksBoidMap(this);
	VolumeInfoTable = new FlocksVolumeInfoTable(this);
	VolumeOverlapsTable = new FlocksVolumeOverlapsTable(this);

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		VisualsTable[i] = new FlocksVisualsTable(this);
	}
}

AFlocksWorld::~AFlocksWorld()
{
	delete[] BoidsPendingDelete;

	delete DatabaseHeader;
	delete FlockShader;
	delete StateTable;
	delete BoidMap;
	delete VolumeInfoTable;
	delete VolumeOverlapsTable;

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		delete VisualsTable[i];
	}
}

void AFlocksWorld::PreInitializeComponents()
{
	Super::PreInitializeComponents();

	if (GetWorld()->WorldType == EWorldType::Editor || GetWorld()->WorldType == EWorldType::EditorPreview)
		return;

#if WITH_EDITOR
	if (WorldInst.IsValid())
	{
		FMessageLog MessageLog = FMessageLog("PIE");
		MessageLog.Open(EMessageSeverity::Error, true);
		MessageLog.Message(EMessageSeverity::Error, LOCTEXT("FlocksMultipleWorldsError", "Multiple Worlds Detected: There can only be one Flocks World in the level! Use groups to simulate multiple flocks instead!"));
	}
#endif

	WorldInst = this;
}

void AFlocksWorld::PostInitializeComponents()
{
	Super::PostInitializeComponents();
	
	bCachedExecuteGPU = bGPUSim;
	BoidMap->CellSize = CellSize;

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		UInstancedStaticMeshComponent* ISMComponent = NewObject<UInstancedStaticMeshComponent>(this);
		ISMComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::SnapToTargetIncludingScale);
		ISMComponent->RegisterComponent();
		ISMComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		ISMComponent->SetCanEverAffectNavigation(false);
		AddInstanceComponent(ISMComponent);

		ISMComponents[i] = ISMComponent;

		VisualsTable[i]->Init(Meshes.IsValidIndex(i) ? Meshes[i] : FMeshRendererData(), ISMComponent);
	}
}

void AFlocksWorld::BeginPlay()
{
	Super::BeginPlay();

	#if WITH_EDITOR
	if (Settings.Num() > MAX_GROUPS)
	{
		FMessageLog MessageLog = FMessageLog("PIE");
		MessageLog.Open(EMessageSeverity::Error, true);
		MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksGroupsExceededError", "Invalid Group \"{0}\": Flocks only supports a maximum number of {1} Groups"), Settings.Num(), MAX_GROUPS));
	}
	#endif

	// Set up Group Data + Default Group Data
	LockGroupData();
	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		if(Settings.IsValidIndex(i))
		{
			FPerGroupDefaultSettings Entry = Settings[i];

			GroupData[i].GroupAlignment = Entry.GroupDefaultSettings.Alignment;
			GroupData[i].GroupCohesion = Entry.GroupDefaultSettings.Cohesion;
			GroupData[i].GroupSeparation = Entry.GroupDefaultSettings.Separation;
			GroupData[i].GroupGoal = Entry.GroupDefaultSettings.Goal;
			GroupData[i].GroupFlee = Entry.GroupDefaultSettings.Flee;
			GroupData[i].GroupRestriction = Entry.GroupDefaultSettings.Restriction;
			GroupData[i].GroupSeparationRadius = Entry.GroupDefaultSettings.SeparationRadius;
			GroupData[i].GroupCohesionRadius = Entry.GroupDefaultSettings.CohesionRadius;
			GroupData[i].GroupAlignmentRadius = Entry.GroupDefaultSettings.AlignmentRadius;
			GroupData[i].GroupNonVerticalMovementFactor = Entry.GroupDefaultSettings.bPreferNonVerticalMovement ? 1.0f : 0.0f;
			for (int32 j = 0; j < Entry.GroupDefaultSettings.GroupResponses.Num(); ++j)
			{
				FGroupResponseEntry ResponseEntry = Entry.GroupDefaultSettings.GroupResponses[j];
				GroupData[i].GroupResponseToGroups[ResponseEntry.Group] = static_cast<int32>(ResponseEntry.Response);
			}

			DefaultBoidSettings[i].MinSpeed = Entry.BoidDefaultSettings.MinSpeed;
			DefaultBoidSettings[i].MaxSpeed = Entry.BoidDefaultSettings.MaxSpeed;
			DefaultBoidSettings[i].MinTurningSpeed = Entry.BoidDefaultSettings.MinTurning;
			DefaultBoidSettings[i].MaxTurningSpeed = Entry.BoidDefaultSettings.MaxTurning;
			DefaultBoidSettings[i].MinScale = Entry.BoidDefaultSettings.MinScale;
			DefaultBoidSettings[i].MaxScale = Entry.BoidDefaultSettings.MaxScale;
			DefaultBoidSettings[i].MaxHealth = Entry.BoidDefaultSettings.MaxHealth;
			DefaultBoidSettings[i].MeshIndex = Entry.MeshIndex;
			DefaultBoidSettings[i].SpawnSettings = Entry.DefaultSpawnSettings;
		}
		else
		{
			GroupData[i].GroupAlignment = 1.0f;
			GroupData[i].GroupCohesion = 1.0f;
			GroupData[i].GroupSeparation = 1.0f;
			GroupData[i].GroupGoal =  1.0f;
			GroupData[i].GroupFlee =  1.0f;
			GroupData[i].GroupRestriction = 1.0f;
			GroupData[i].GroupSeparationRadius = 500.0f;
			GroupData[i].GroupCohesionRadius = 500.0f;
			GroupData[i].GroupAlignmentRadius = 500.0f;
			GroupData[i].GroupNonVerticalMovementFactor = 0.0f;

			DefaultBoidSettings[i].MinSpeed = 100.0f;
			DefaultBoidSettings[i].MaxSpeed = 100.0f;
			DefaultBoidSettings[i].MinTurningSpeed = 200.0f;
			DefaultBoidSettings[i].MaxTurningSpeed = 200.0f;
			DefaultBoidSettings[i].MinScale = 1.0f;
			DefaultBoidSettings[i].MaxScale = 1.0f;
			DefaultBoidSettings[i].MaxHealth = 100.0f;
			DefaultBoidSettings[i].MeshIndex = 0;
			DefaultBoidSettings[i].SpawnSettings = FSpawnTypeSettings();
		}

		GroupData[i].GroupResponseToGroups[i] = 1;
	}
	UnlockGroupData();

	// Set up Mesh Data
	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		DefaultMeshSettings[i].DefaultCustomDataValues.SetNum(PluginReservedCustomDataValues);

		if (Meshes.IsValidIndex(i))
		{
			FMeshRendererData Entry = Meshes[i];

			DefaultMeshSettings[i].MinAnimRateScale = Entry.AnimationData != nullptr ? Entry.MinAnimRate : 1.0f;
			DefaultMeshSettings[i].MaxAnimRateScale = Entry.AnimationData != nullptr ? Entry.MaxAnimRate : 1.0f;
			DefaultMeshSettings[i].DefaultCustomDataValues.Append(Entry.DefaultCustomDataValues);
		}
		else
		{
			DefaultMeshSettings[i].MinAnimRateScale = 1.0f;
			DefaultMeshSettings[i].MaxAnimRateScale = 1.0f;
		}
	}

	// Spawn Starting Boids
	for (int32 i = 0; i < Settings.Num(); ++i)
	{
		BatchAddBoids(Settings[i].DefaultNumBoids, i);
	}
}

void AFlocksWorld::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);
}

AFlocksWorld::FFlocksGroupData* AFlocksWorld::LockGroupData()
{ 
	GroupDataLock.Lock();
	return GroupData;
}

void AFlocksWorld::UnlockGroupData()
{
	GroupDataLock.Unlock();
}

void AFlocksWorld::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	{
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_world____update)

		UpdateVolumes(DeltaTime);

		BoidMap->Update(DeltaTime);
		VolumeInfoTable->Update(DeltaTime);
		StateTable->Update(DeltaTime);

		UpdateBoids(DeltaTime);

		for (int32 i = 0; i < MAX_MESHES; ++i)
		{
			VisualsTable[i]->Update(DeltaTime);
		}

		if (bTrackVolumeOverlaps)
		{
			VolumeOverlapsTable->RecalculateOverlaps();
		}
	}

	FlushBoidsPendingDelete();
}

void AFlocksWorld::UpdateVolumes(float DeltaTime)
{
	FlocksVolumeInfoTable::FTableData* VolumeTableData = VolumeInfoTable->Lock();

	for (TActorIterator<AFlocksVolumeActor> ActorItr(GetWorld()); ActorItr; ++ActorItr)
	{
		AFlocksVolumeActor* Volume = *ActorItr;

		FVector Location = Volume->GetActorLocation();
		FRotator Heading = Volume->GetActorRotation();

		if(Volume->Handle != INVALID_VOLUME_HANDLE)
		{
			unsigned short Index = VolumeInfoTable->Find(Volume->Handle);

			if (Index != INVALID_VOLUME_HANDLE_INDEX)
			{
				FVolumeInfo Info = Volume->Info;
				VolumeTableData[Index].VolumeType = static_cast<int32>(Info.Type);
				VolumeTableData[Index].VolumeShape = static_cast<int32>(Info.Shape);
				VolumeTableData[Index].VolumeUseFalloff = Info.bUseFalloff;
				VolumeTableData[Index].VolumeInnerRadius = Info.InnerRadius;
				VolumeTableData[Index].VolumeOuterRadius = Info.OuterRadius;
				VolumeTableData[Index].VolumeFalloff = Info.Falloff;
				VolumeTableData[Index].VolumeInnerExtents = FVector3f(Info.InnerExtents.X, Info.InnerExtents.Y, Info.InnerExtents.Z);
				VolumeTableData[Index].VolumeOuterExtents = FVector3f(Info.OuterExtents.X, Info.OuterExtents.Y, Info.OuterExtents.Z);

				int32 InfluenceGroups = Info.bAllGroups ? -1 : 0;
				for (int32 i = 0; i < Info.InfluencesGroups.Num(); ++i)
				{
					InfluenceGroups |= (1 << Info.InfluencesGroups[i]);
				}
				VolumeTableData[Index].VolumeInfluencesGroups = InfluenceGroups;

				VolumeTableData[Index].VolumePosition = FVector3f(Location.X, Location.Y, Location.Z);
				VolumeTableData[Index].VolumeRotation = FRotator3f(Heading.Pitch, Heading.Yaw, Heading.Roll);
				VolumeTableData[Index].VolumeLocalToWorld = FTransform3f(VolumeTableData[Index].VolumeRotation, VolumeTableData[Index].VolumePosition).ToMatrixNoScale();
				VolumeTableData[Index].VolumeWorldToLocal = VolumeTableData[Index].VolumeLocalToWorld.Inverse();
			}
		}
	}

	VolumeInfoTable->Unlock();
}

void AFlocksWorld::UpdateBoids(float DeltaTime)
{
	if (bCachedExecuteGPU)
	{
		FlockShader->Execute(GetWorld()->GetTimeSeconds());
	}
	else
	{
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_flocks_table____execute)

		LockGroupData();
		FlocksBoidMap::FBoidMapData* BoidMapData = BoidMap->Lock();
		FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
		FlocksVolumeInfoTable::FTableData* VolumeTableData = VolumeInfoTable->Lock();
		FlocksStateTable::FTableData OutData[MAX_BOIDS];
		memcpy(OutData, StateTableData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS);

		ParallelFor(StateTable->Size(), [&, this, DeltaTime](int32 b)
			{
				if (!StateTableData[b].bIsPendingDelete)
				{
					OutData[b].Action = 0;
					OutData[b].NumVolumesAffecting = 0;

					int32 MyGroup = StateTableData[b].Group;
					FVector3f MyHeading = FVector3f(StateTableData[b].Heading.X, StateTableData[b].Heading.Y, StateTableData[b].Heading.Z);
					FVector3f MyPosition = FVector3f(StateTableData[b].Position.X, StateTableData[b].Position.Y, StateTableData[b].Position.Z);

					FVector3f SteerCohesion = { 0.0f, 0.0f, 0.0f };
					FVector3f SteerSeparation = { 0.0f, 0.0f, 0.0f };
					FVector3f SteerAlignment = { 0.0f, 0.0f, 0.0f };
					FVector3f SteerGoal = { 0.0f, 0.0f, 0.0f };
					FVector3f SteerFlee = { 0.0f, 0.0f, 0.0f };
					FVector3f SteerRest = { 0.0f, 0.0f, 0.0f };

					float CohesionCnt = 0.0f;
					float SeparationCnt = 0.0f;
					float AlignmentCnt = 0.0f;
					float GoalCnt = 0.0f;
					float FleeCnt = 0.0f;
					float RestCnt = 0.0f;
					float TotalRestrictionVolumes = 0.0f;

					FVector3f CellPosition = MyPosition / BoidMap->CellSize;
					FIntVector CellIndex = FIntVector((int32)CellPosition.X, (int32)CellPosition.Y, (int32)CellPosition.Z);
					for (int i = -1; i <= 1; ++i)
					{
						for (int j = -1; j <= 1; ++j)
						{
							for (int k = -1; k <= 1; ++k)
							{
								FIntVector NeighbourIndex = CellIndex + FIntVector(i, j, k);
								unsigned int FlatNeighbourIndex = BoidMap->GetFlatCellIndex(NeighbourIndex);

								//Because of the way were shuffling the SortedCellList - we can get away with only 1-2 neighbour checks per cell per frame
								unsigned int NeighbourIter = BoidMapData->CellOffsetList[FlatNeighbourIndex];
								unsigned int CellCount = BoidMapData->CellBoidCount[FlatNeighbourIndex];
								CellCount = FMath::Min(CellCount, (unsigned int)MaxNeighbourChecks);

								for (unsigned int w = NeighbourIter; w < NeighbourIter + CellCount; ++w)
								{
									unsigned int BoidIndex = (BoidMapData->SortedCellList[w] & 0x0000ffff) >> 0;
									unsigned int TheirGroup = StateTableData[BoidIndex].Group;

									FVector3f TheirPosition = FVector3f(StateTableData[BoidIndex].Position.X, StateTableData[BoidIndex].Position.Y, StateTableData[BoidIndex].Position.Z);
									FVector3f TheirHeading = FVector3f(StateTableData[BoidIndex].Heading.X, StateTableData[BoidIndex].Heading.Y, StateTableData[BoidIndex].Heading.Z);

									int32 ResponseType = GroupData[MyGroup].GroupResponseToGroups[TheirGroup];

									switch (ResponseType)
									{
									case 1:
									{
										float d = FVector3f::Distance(MyPosition, TheirPosition);

										if (d < GroupData[MyGroup].GroupSeparationRadius)
										{
											SteerSeparation += MyPosition - TheirPosition;
											SeparationCnt++;
										}

										if (d < GroupData[MyGroup].GroupCohesionRadius)
										{
											SteerCohesion += TheirPosition - MyPosition;
											CohesionCnt++;
										}

										if (d < GroupData[MyGroup].GroupAlignmentRadius)
										{
											SteerAlignment += TheirHeading;
											AlignmentCnt++;
										}
									}
									break;
									}
								}
							}
						}
					}

					float ClosestClampedDist = FLT_MAX;
					FlocksMath::FInfluenceQueryResult BestRestrictionResult;
					bool bIsInsideRestrictionVolume = false;
					for (unsigned int i = 0; i < DatabaseHeader->VolumeInfo->ArrayUsed; ++i)
					{
						FlocksVolumeInfoTable::FTableData Volume = VolumeTableData[i];
						float Inf = FlocksMath::GetInfluence(MyPosition, Volume);

						FVector3f VolumePosition = Volume.VolumeLocalToWorld.TransformPosition(FVector3f::ZeroVector);

						if ((Volume.VolumeInfluencesGroups & (1 << StateTableData[b].Group)) == 0)
							continue;

						if (Inf > 0.0f)
						{
							OutData[b].VolumesAffectingIndices[OutData[b].NumVolumesAffecting] = i;
							OutData[b].NumVolumesAffecting++;
						}

						switch (Volume.VolumeType)
						{
						case 0:
						{
							if (Inf > 0.0f)
							{
								SteerGoal += (VolumePosition - MyPosition) * Inf;
								OutData[b].Action |= (1 << 0);
								GoalCnt++;
							}
						}
						break;

						case 1:
						{
							if (Inf > 0.0f)
							{
								SteerFlee += (MyPosition - VolumePosition) * Inf;
								OutData[b].Action |= (1 << 1);
								FleeCnt++;
							}
						}
						break;

						case 2:
						{
							float RestInf = 1.0f - Inf;

							if (RestInf > 0.0f && RestInf < 1.0f)
							{
								FVector3f ClosestInnerPoint = FlocksMath::GetClosestInnerPoint(MyPosition, Volume);
								SteerRest += (ClosestInnerPoint - MyPosition).GetSafeNormal() * RestInf;
								RestCnt++;
								bIsInsideRestrictionVolume = true;
							}
							else if (RestInf >= 1.0f)
							{
								FVector3f ClosestInnerPoint = MyPosition;
								FVector3f ClosestOuterPoint = MyPosition;
								FlocksMath::GetClosestInnerAndOuterPoints(MyPosition, Volume, ClosestInnerPoint, ClosestOuterPoint);

								float dist = FVector3f::Dist(MyPosition, ClosestOuterPoint);
								if (dist < ClosestClampedDist)
								{
									ClosestClampedDist = dist;
									BestRestrictionResult.ClosestInnerPoint = ClosestInnerPoint;
									BestRestrictionResult.ClosestOuterPoint = ClosestOuterPoint;
									BestRestrictionResult.InvalidHeading = MyPosition - ClosestOuterPoint;
									BestRestrictionResult.InvalidHeading.Normalize();
									BestRestrictionResult.VolumeIndex = i;
								}
							}
							else
							{
								bIsInsideRestrictionVolume = true;
							}

							TotalRestrictionVolumes++;
						}
						break;
						}
					}

					SteerAlignment /= AlignmentCnt != 0 ? AlignmentCnt : 1.0f;
					SteerAlignment.Normalize();

					SteerCohesion /= CohesionCnt != 0 ? CohesionCnt : 1.0f;
					SteerCohesion.Normalize();

					SteerSeparation /= SeparationCnt != 0 ? SeparationCnt : 1.0f;
					SteerSeparation.Normalize();

					SteerGoal /= GoalCnt != 0 ? GoalCnt : 1.0f;
					SteerGoal.Normalize();

					SteerGoal /= FleeCnt != 0 ? FleeCnt : 1.0f;
					SteerFlee.Normalize();

					SteerRest /= RestCnt != 0 ? RestCnt : 1.0f;
					SteerRest.Normalize();

					FVector3f SteerNonVertical = FVector3f(MyHeading.X, MyHeading.Y, 0.0f).GetSafeNormal() * GroupData[MyGroup].GroupNonVerticalMovementFactor;

					FVector3f NewHeading = MyHeading + (SteerAlignment * GroupData[MyGroup].GroupAlignment) + (SteerCohesion * GroupData[MyGroup].GroupCohesion) + (SteerSeparation * GroupData[MyGroup].GroupSeparation) + (SteerGoal * GroupData[MyGroup].GroupGoal) + (SteerFlee * GroupData[MyGroup].GroupFlee) + (SteerRest * GroupData[MyGroup].GroupRestriction) + SteerNonVertical;
					NewHeading.Normalize();

					float Turning = StateTableData[b].Turning;
					if (!bIsInsideRestrictionVolume && TotalRestrictionVolumes > 0.0f)
					{
						NewHeading = BestRestrictionResult.ClosestInnerPoint - MyPosition;
						Turning *= 5.0f;

						NewHeading.Normalize();
						OutData[b].Position = BestRestrictionResult.ClosestOuterPoint;

						OutData[b].VolumesAffectingIndices[OutData[b].NumVolumesAffecting] = BestRestrictionResult.VolumeIndex;
						OutData[b].NumVolumesAffecting++;
					}

					OutData[b].Heading = FlocksMath::Slerp(MyHeading, NewHeading, DeltaTime, Turning).GetSafeNormal();
					OutData[b].Position += OutData[b].Heading * DeltaTime * StateTableData[b].Speed;
				}
			});

		memcpy(StateTableData, OutData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS);
		StateTable->Unlock();
		VolumeInfoTable->Unlock();
		BoidMap->Unlock();
		UnlockGroupData();
	}
}

BOID_HANDLE AFlocksWorld::AddBoid(int32 Group)
{
	FSpawnTypeSettings SpawnSettings = DefaultBoidSettings[Group].SpawnSettings;
	int32 MeshIndex = DefaultBoidSettings[Group].MeshIndex;
	return AddBoid(Group, MeshIndex, SpawnSettings);
}

BOID_HANDLE AFlocksWorld::AddBoid(int32 Group, int32 MeshIndex)
{
	FSpawnTypeSettings SpawnSettings = DefaultBoidSettings[Group].SpawnSettings;
	return AddBoid(Group, MeshIndex, SpawnSettings);
}

BOID_HANDLE AFlocksWorld::AddBoid(int32 Group, const FSpawnTypeSettings& SpawnSettings)
{
	int32 MeshIndex = DefaultBoidSettings[Group].MeshIndex;
	return AddBoid(Group, MeshIndex, SpawnSettings);
}

BOID_HANDLE AFlocksWorld::AddBoid(int32 Group, int32 MeshIndex, const FSpawnTypeSettings& SpawnSettings)
{
	FVector Location = FVector::ZeroVector;
	FRotator Rotation = FRotator::ZeroRotator;
	SpawnSettings.GetLocationAndRotation(Group, Location, Rotation);

	FVector Heading = Rotation.Vector();

	FlocksStateTable::FAddBoidData StateData;
	StateData.Group = Group;
	StateData.MeshIndex = MeshIndex;
	StateData.Position = FVector3f(Location.X, Location.Y, Location.Z);
	StateData.Heading = FVector3f(Heading.X, Heading.Y, Heading.Z);
	StateData.Speed = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinSpeed, DefaultBoidSettings[StateData.Group].MaxSpeed);
	StateData.Turning = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinTurningSpeed, DefaultBoidSettings[StateData.Group].MaxTurningSpeed);
	StateData.Scale = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinScale, DefaultBoidSettings[StateData.Group].MaxScale);
	StateData.MaxHealth = DefaultBoidSettings[StateData.Group].MaxHealth;

	FlocksVisualsTable::FAddBoidData VisualsData;
	for (int32 i = 0; i < DefaultMeshSettings[MeshIndex].DefaultCustomDataValues.Num(); ++i)
	{
		VisualsData.CustomDataValues.Add(DefaultMeshSettings[MeshIndex].DefaultCustomDataValues[i].GetValue());
	}
	VisualsData.AnimationData.AnimRateScale = FMath::RandRange(DefaultMeshSettings[StateData.MeshIndex].MinAnimRateScale, DefaultMeshSettings[StateData.MeshIndex].MaxAnimRateScale);

	FAddBoidData BoidData;
	BoidData.StateData = StateData;
	BoidData.VisualsData = VisualsData;

	TArray<BOID_HANDLE> Handles = AddBoid_Internal(1, &BoidData);
	return Handles[0];
}

TArray<BOID_HANDLE> AFlocksWorld::BatchAddBoids(int32 Amount, int32 Group)
{
	if (Settings.Num() == 0)
		return TArray<BOID_HANDLE>();

	FAddBoidData* BoidDatas = new FAddBoidData[Amount];

	for (int32 i = 0; i < Amount; ++i)
	{
		int32 AddToGroup = Group;
		if (AddToGroup == -1)
		{
			AddToGroup = FMath::RandRange(0, Settings.Num() - 1);
		}

		int32 MeshIndex = DefaultBoidSettings[AddToGroup].MeshIndex;
		FSpawnTypeSettings SpawnSettings = DefaultBoidSettings[AddToGroup].SpawnSettings;

		FVector Location = FVector::ZeroVector;
		FRotator Rotation = FRotator::ZeroRotator;
		SpawnSettings.GetLocationAndRotation(AddToGroup, Location, Rotation);

		FVector Heading = Rotation.Vector();

		FlocksStateTable::FAddBoidData StateData;
		StateData.Group = AddToGroup;
		StateData.MeshIndex = MeshIndex;
		StateData.Position = FVector3f(Location.X, Location.Y, Location.Z);
		StateData.Heading = FVector3f(Heading.X, Heading.Y, Heading.Z);
		StateData.Speed = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinSpeed, DefaultBoidSettings[StateData.Group].MaxSpeed);
		StateData.Turning = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinTurningSpeed, DefaultBoidSettings[StateData.Group].MaxTurningSpeed);
		StateData.Scale = FMath::RandRange(DefaultBoidSettings[StateData.Group].MinScale, DefaultBoidSettings[StateData.Group].MaxScale);
		StateData.MaxHealth = DefaultBoidSettings[StateData.Group].MaxHealth;

		FlocksVisualsTable::FAddBoidData VisualsData;
		for (int32 j = 0; j < DefaultMeshSettings[MeshIndex].DefaultCustomDataValues.Num(); ++j)
		{
			VisualsData.CustomDataValues.Add(DefaultMeshSettings[MeshIndex].DefaultCustomDataValues[j].GetValue());
		}
		VisualsData.AnimationData.AnimRateScale = FMath::RandRange(DefaultMeshSettings[StateData.MeshIndex].MinAnimRateScale, DefaultMeshSettings[StateData.MeshIndex].MaxAnimRateScale);

		FAddBoidData BoidData;
		BoidData.StateData = StateData;
		BoidData.VisualsData = VisualsData;
		BoidDatas[i] = BoidData;
	}

	TArray<BOID_HANDLE> OutBoids;
	OutBoids = AddBoid_Internal(Amount, BoidDatas);
	delete[] BoidDatas;

	return OutBoids;
}

TArray<BOID_HANDLE> AFlocksWorld::AddBoid_Internal(int32 Amount, const FAddBoidData* AddBoidData)
{
	FlushRenderingCommands();

	int32 NumVisualsBoids[MAX_MESHES];
	memset(NumVisualsBoids, 0, sizeof(int32) * MAX_MESHES);
	
	BOID_HANDLE* VisualsBoids[MAX_MESHES];
	FlocksVisualsTable::FAddBoidData* VisualsBoidData[MAX_MESHES];

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		VisualsBoids[i] = new BOID_HANDLE[Amount];
		VisualsBoidData[i] = new FlocksVisualsTable::FAddBoidData[Amount];
	}

	FlocksStateTable::FAddBoidData* StateBoidData = new FlocksStateTable::FAddBoidData[Amount];

	// Create array of valid handles
	TArray<BOID_HANDLE> ValidHandles;
	ValidHandles.Reserve(Amount);
	for (int32 i = 0; i < Amount; ++i)
	{
		BOID_HANDLE Handle = DatabaseHeader->AddBoid();

		if (Handle == INVALID_BOID_HANDLE)
		{
			break;
		}

		int32 MeshIndex = AddBoidData[i].StateData.MeshIndex;
		VisualsBoids[MeshIndex][NumVisualsBoids[MeshIndex]] = Handle;
		VisualsBoidData[MeshIndex][NumVisualsBoids[MeshIndex]] = AddBoidData[i].VisualsData;
		NumVisualsBoids[MeshIndex] += 1;

		StateBoidData[ValidHandles.Num()] = AddBoidData[i].StateData;
		ValidHandles.Add(Handle);
	}

	// Add to tables
	StateTable->AddBoid(ValidHandles.Num(), ValidHandles.GetData(), StateBoidData);
	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		VisualsTable[i]->AddBoid(NumVisualsBoids[i], VisualsBoids[i], VisualsBoidData[i]);
	}

	// Trigger Events
	for (int32 i = 0; i < ValidHandles.Num(); ++i)
	{
		FFlocksBoidBlueprintHandle BPHandle;
		BPHandle.Handle = ValidHandles[i];
		OnBoidAdded(BPHandle);
	}

	delete[] StateBoidData;

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		delete[] VisualsBoids[i];
		delete[] VisualsBoidData[i];
	}
	
	return ValidHandles;
}

void AFlocksWorld::RemoveBoid(BOID_HANDLE Boid)
{
	RemoveBoid_Internal(1, &Boid);
}

void AFlocksWorld::BatchRemoveBoids(int32 Amount)
{
	int32 TotalBoids = StateTable->Size();
	Amount = FMath::Min(TotalBoids, Amount);

	int32 CurrentTotalBoids = TotalBoids;
	BOID_HANDLE* AllBoidHandles = new BOID_HANDLE[TotalBoids];

	for (int32 i = 0; i < TotalBoids; ++i)
	{
		AllBoidHandles[i] = StateTable->Get(i);
	}

	// Pick Boids to remove
	BOID_HANDLE* HandlesToRemove = new BOID_HANDLE[Amount];
	for (int32 i = 0; i < Amount; ++i)
	{
		int32 Rand = FMath::RandRange(0, CurrentTotalBoids - 1);

		HandlesToRemove[i] = AllBoidHandles[Rand];
		AllBoidHandles[Rand] = AllBoidHandles[CurrentTotalBoids - 1];
		CurrentTotalBoids--;
	}

	RemoveBoid_Internal(Amount, HandlesToRemove);

	delete[] AllBoidHandles;
	delete[] HandlesToRemove;
}

void AFlocksWorld::RemoveBoid_Internal(int32 Amount, BOID_HANDLE* Handles)
{
	FlushRenderingCommands();

	int32 NumStateTableHandles = 0;
	BOID_HANDLE* StateTableHandles = new BOID_HANDLE[Amount];

	int32 NumVisualsTableHandles[MAX_MESHES];
	BOID_HANDLE* VisualsTableHandles[MAX_MESHES];

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		NumVisualsTableHandles[i] = 0;
		VisualsTableHandles[i] = new BOID_HANDLE[Amount];
	}

	// Remove Headers
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	for (int32 i = 0; i < Amount; ++i)
	{
		bool bSuccess = DatabaseHeader->RemoveBoid(Handles[i]);

		if (bSuccess)
		{
			FFlocksBoidBlueprintHandle BPHandle;
			BPHandle.Handle = Handles[i];
			OnBoidRemoved(BPHandle);

			unsigned short StateTableIndex = StateTable->Find(Handles[i]);
			if (StateTableIndex != INVALID_BOID_HANDLE_INDEX)
			{
				StateTableHandles[NumStateTableHandles] = Handles[i];
				NumStateTableHandles++;

				int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
				VisualsTableHandles[MeshIndex][NumVisualsTableHandles[MeshIndex]] = Handles[i];
				NumVisualsTableHandles[MeshIndex]++;
			}
		}
	}
	StateTable->Unlock();

	// Remove from Tables
	StateTable->RemoveBoid(NumStateTableHandles, StateTableHandles);

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		VisualsTable[i]->RemoveBoid(NumVisualsTableHandles[i], VisualsTableHandles[i]);
	}

	// Delete allocated memory
	delete[] StateTableHandles;
	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		delete[] VisualsTableHandles[i];
	}
}

void AFlocksWorld::RemoveBoidNextFrame(BOID_HANDLE Boid)
{
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	StateTableData[StateTable->Find(Boid)].bIsPendingDelete = true;
	StateTable->Unlock();

	BoidsPendingDelete[NumBoidsPendingDelete] = Boid;
	NumBoidsPendingDelete++;
}

void AFlocksWorld::FlushBoidsPendingDelete()
{
	for(int32 i = 0; i < NumBoidsPendingDelete; ++i)
	{
		RemoveBoid(BoidsPendingDelete[i]);
	}

	NumBoidsPendingDelete = 0;
}

VOLUME_HANDLE AFlocksWorld::AddVolume(const FVolumeInfo& Volume)
{
	FlocksVolumeInfoTable::FAddVolumeData Info;

	FVector Location = Volume.Position;
	FRotator Heading = Volume.Rotation;

	Info.VolumeType = static_cast<int32>(Volume.Type);
	Info.VolumeShape = static_cast<int32>(Volume.Shape);
	Info.VolumeUseFalloff = Volume.bUseFalloff;
	Info.VolumeFalloff = Volume.Falloff;
	Info.VolumeInnerRadius = Volume.InnerRadius;
	Info.VolumeOuterRadius = Volume.OuterRadius;
	Info.VolumeInnerExtents = FVector3f(Volume.InnerExtents.X, Volume.InnerExtents.Y, Volume.InnerExtents.Z);
	Info.VolumeOuterExtents = FVector3f(Volume.OuterExtents.X, Volume.OuterExtents.Y, Volume.OuterExtents.Z);
	Info.VolumePosition = FVector3f(Location.X, Location.Y, Location.Z);
	Info.VolumeRotation = FRotator3f(Heading.Pitch, Heading.Yaw, Heading.Roll);

	int32 InfluenceGroups = Volume.bAllGroups ? -1 : 0;
	for (int32 i = 0; i < Volume.InfluencesGroups.Num(); ++i)
	{
		InfluenceGroups |= (1 << Volume.InfluencesGroups[i]);
	}
	Info.VolumeInfluencesGroups = InfluenceGroups;

	FAddVolumeData AddVolumeData;
	AddVolumeData.InfoData = Info;
	return AddVolume_Internal(AddVolumeData);
}

VOLUME_HANDLE AFlocksWorld::AddVolume_Internal(const FAddVolumeData& AddVolumeData)
{
	VOLUME_HANDLE Handle = DatabaseHeader->AddVolume();
	if (Handle != INVALID_VOLUME_HANDLE)
	{
		VolumeInfoTable->AddVolume(Handle, AddVolumeData.InfoData);
		VolumeOverlapsTable->AddVolume(Handle, AddVolumeData.OverlapsData);
	}

	return Handle;
}

bool AFlocksWorld::RemoveVolume(VOLUME_HANDLE Volume)
{
	bool bSuccess = DatabaseHeader->RemoveVolume(Volume);

	if (bSuccess)
	{
		VolumeInfoTable->RemoveVolume(Volume);
		VolumeOverlapsTable->RemoveVolume(Volume);
	}

	return bSuccess;
}

void AFlocksWorld::NativeBoidHealthChanged(BOID_HANDLE Boid, float OldHealth, float NewHealth, AController* InInstigator)
{
	FFlocksBoidBlueprintHandle BPHandle;
	BPHandle.Handle = Boid;
	OnBoidHealthChanged(BPHandle, OldHealth, NewHealth, InInstigator);
	BoidHealthChangedDelegate.Broadcast(BPHandle, OldHealth, NewHealth, InInstigator);

	if (OldHealth > 0.0f && NewHealth <= 0.0f)
	{
		NativeBoidKilled(Boid, InInstigator);
	}
}

void AFlocksWorld::NativeBoidKilled(BOID_HANDLE Boid, AController* InInstigator)
{
	FFlocksBoidBlueprintHandle BPHandle;
	BPHandle.Handle = Boid;
	OnBoidKilled(BPHandle, InInstigator);
	BoidKilledDelegate.Broadcast(BPHandle, InInstigator);

	RemoveBoidNextFrame(Boid);
}

#undef LOCTEXT_NAMESPACE
