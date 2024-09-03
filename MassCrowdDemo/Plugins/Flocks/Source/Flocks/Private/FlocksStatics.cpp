// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksStatics.h"
#include "FlocksWorld.h"
#include "FlocksDatabaseHeader.h"
#include "FlocksVolumeInfoTable.h"
#include "FlocksVolumeOverlapsTable.h"
#include "FlocksVolumeActor.h"
#include "FlocksLookUpTable.h"
#include "FlocksVisualsTable.h"
#include "Utils/IndexArray.h"
#include "FlocksStateTable.h"
#include "Logging/MessageLog.h"

#include "Engine/StaticMesh.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/InstancedStaticMeshComponent.h"

FThreadSafeCounter UFlocksStatics::ParallelBoidCounter = FThreadSafeCounter();

FLineTraceForBoidsResult UFlocksStatics::LineTraceResults[MAX_BOIDS];

#define LOCTEXT_NAMESPACE "FFlocksModule"

#define VALIDATE_FLOCKS_WORLD()	\
if(AFlocksWorld::WorldInst == nullptr) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidWorld", "Invalid World when Calling \"{0}\": This will CRASH in builds. Please verify a Flocks world exists first!"), FText::FromString(FString(__FUNCTION__)))); \
	return;	\
} \

#define VALIDATE_BOID_BP_HANDLE(Boid) \
if(Boid.Handle == INVALID_BOID_HANDLE) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidBoid", "Invalid Boid when Calling \"{0}\": This will CRASH in builds. Please verify the Boid is valid first!"), FText::FromString(FString(__FUNCTION__)))); \
	return;	\
} \

#define VALIDATE_VOLUME_BP_HANDLE(Volume) \
if(Volume.Handle == INVALID_VOLUME_HANDLE) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidVolume", "Invalid Volume when Calling \"{0}\": This will CRASH in builds. Please verify the Volume is valid first!"), FText::FromString(FString(__FUNCTION__)))); \
	return;	\
} \

#define VALIDATE_FLOCKS_GROUP(Group) \
if(Group < 0 || Group >= MAX_GROUPS) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidGroup", "Invalid Group when Calling \"{0}\": This will CRASH in builds. Please make sure Group is > 0 AND < 16!"), FText::FromString(FString(__FUNCTION__)))); \
	return;	\
} \

#define VALIDATE_FLOCKS_MESH_INDEX(MeshIndex) \
if(MeshIndex < 0 || MeshIndex >= MAX_MESHES) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidMeshIndex", "Invalid Mesh Index when Calling \"{0}\": This will CRASH in builds. Please make sure Mesh Index is > 0 AND < 16!"), FText::FromString(FString(__FUNCTION__)))); \
	return;	\
} \

#define VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid) \
	VALIDATE_FLOCKS_WORLD() \
	VALIDATE_BOID_BP_HANDLE(Boid) \

#define VALIDATE_FLOCKS_WORLD_AND_VOLUME_HANDLE(Volume) \
	VALIDATE_FLOCKS_WORLD() \
	VALIDATE_VOLUME_BP_HANDLE(Volume) \

#define VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group) \
	VALIDATE_FLOCKS_WORLD()	\
	VALIDATE_FLOCKS_GROUP(Group) \

#define VALIDATE_FLOCKS_WORLD_AND_MESH_INDEX(MeshIndex)	\
	VALIDATE_FLOCKS_WORLD() \
	VALIDATE_FLOCKS_MESH_INDEX(MeshIndex) \

#define VALIDATE_FLOCKS_WORLD_RETURN(ReturnValueIfInvalid) \
if(AFlocksWorld::WorldInst == nullptr) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidWorld", "Invalid World when Calling \"{0}\": This will CRASH in builds. Please verify a Flocks world exists first!"), FText::FromString(FString(__FUNCTION__)))); \
	return ReturnValueIfInvalid; \
} \

#define VALIDATE_BOID_BP_HANDLE_RETURN(Boid, ReturnValueIfInvalid) \
if(Boid.Handle == INVALID_BOID_HANDLE) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidBoid", "Invalid Boid when Calling \"{0}\": This will CRASH in builds. Please verify the Boid is valid first!"), FText::FromString(FString(__FUNCTION__)))); \
	return ReturnValueIfInvalid; \
} \

#define VALIDATE_VOLUME_BP_HANDLE_RETURN(Volume, ReturnValueIfInvalid) \
if(Volume.Handle == INVALID_VOLUME_HANDLE) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidVolume", "Invalid Volume when Calling \"{0}\": This will CRASH in builds. Please verify the Volume is valid first!"), FText::FromString(FString(__FUNCTION__)))); \
	return ReturnValueIfInvalid; \
} \

#define VALIDATE_FLOCKS_GROUP_RETURN(Group, ReturnValueIfInvalid) \
if(Group < 0 || Group >= MAX_GROUPS) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidGroup", "Invalid Group when Calling \"{0}\": This will CRASH in builds. Please make sure Group is > 0 AND < 16!"), FText::FromString(FString(__FUNCTION__)))); \
	return ReturnValueIfInvalid; \
} \

#define VALIDATE_FLOCKS_MESH_INDEX_RETURN(MeshIndex, ReturnValueIfInvalid) \
if(MeshIndex < 0 || MeshIndex >= MAX_MESHES) \
{ \
	FMessageLog MessageLog = FMessageLog("PIE"); \
	MessageLog.Open(EMessageSeverity::Error, true);	\
	MessageLog.Message(EMessageSeverity::Error, FText::Format(LOCTEXT("FlocksInvalidMeshIndex", "Invalid Mesh Index when Calling \"{0}\": This will CRASH in builds. Please make sure Mesh Index is > 0 AND < 16!"), FText::FromString(FString(__FUNCTION__)))); \
	return ReturnValueIfInvalid; \
} \

#define VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_WORLD_RETURN(ReturnValueIfInvalid) \
	VALIDATE_BOID_BP_HANDLE_RETURN(Boid, ReturnValueIfInvalid) \

#define VALIDATE_FLOCKS_WORLD_AND_VOLUME_HANDLE_RETURN(Volume, ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_WORLD_RETURN(ReturnValueIfInvalid) \
	VALIDATE_VOLUME_BP_HANDLE_RETURN(Volume, ReturnValueIfInvalid) \

#define VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX_RETURN(Group, ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_WORLD_RETURN(ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_GROUP_RETURN(Group, ReturnValueIfInvalid) \

#define VALIDATE_FLOCKS_WORLD_AND_MESH_INDEX_RETURN(MeshIndex, ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_WORLD_RETURN(ReturnValueIfInvalid) \
	VALIDATE_FLOCKS_MESH_INDEX_RETURN(MeshIndex, ReturnValueIfInvalid) \

AFlocksWorld* UFlocksStatics::GetFlocksWorld()
{
	return AFlocksWorld::WorldInst.Get();
}

bool UFlocksStatics::AddBoid(int32 Group, FFlocksBoidBlueprintHandle& OutBoid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	OutBoid.Handle = AFlocksWorld::WorldInst->AddBoid(Group);
	return OutBoid.Handle != INVALID_BOID_HANDLE;
}

bool UFlocksStatics::AddBoidAtLocation(int32 Group, FVector Location, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	FSpawnTypeSettings Settings;
	Settings.SpawnType = ESpawnTypes::AtLocation;
	Settings.SpawnLocation = Location;
	Settings.bRandomRotation = bRandomRotation;
	Settings.SpawnRotation = Rotation;
	Settings.SpawnRadius = RandomRadius;

	OutBoid.Handle = AFlocksWorld::WorldInst->AddBoid(Group, Settings);
	return OutBoid.Handle != INVALID_BOID_HANDLE;
}

bool UFlocksStatics::AddBoidAtActor(int32 Group, AActor* Actor, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	FSpawnTypeSettings settings;
	settings.SpawnType = ESpawnTypes::AtActor;
	settings.SpawnActor = Actor;
	settings.bRandomRotation = bRandomRotation;
	settings.SpawnRotation = Rotation;
	settings.SpawnRadius = RandomRadius;

	OutBoid.Handle = AFlocksWorld::WorldInst->AddBoid(Group, settings);
	return OutBoid.Handle != INVALID_BOID_HANDLE;
}

bool UFlocksStatics::AddBoidAtSpawnPoint(int32 Group, int32 SpawnPoint, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	FSpawnTypeSettings Settings;
	Settings.SpawnType = ESpawnTypes::AtSpawnPoint;
	Settings.SpawnPointIndex = SpawnPoint;
	Settings.bRandomRotation = bRandomRotation;
	Settings.SpawnRotation = Rotation;
	Settings.SpawnRadius = RandomRadius;

	OutBoid.Handle = AFlocksWorld::WorldInst->AddBoid(Group, Settings);
	return OutBoid.Handle != INVALID_BOID_HANDLE;
}

bool UFlocksStatics::AddBoidAdvanced(int32 Group, int32 MeshIndex, const FSpawnTypeSettings& Settings, FFlocksBoidBlueprintHandle& OutBoid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	OutBoid.Handle = AFlocksWorld::WorldInst->AddBoid(Group, MeshIndex, Settings);
	return OutBoid.Handle != INVALID_BOID_HANDLE;
}

TArray<FFlocksBoidBlueprintHandle> UFlocksStatics::BatchAddBoids(int32 Amount)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(TArray<FFlocksBoidBlueprintHandle>());
#endif

	TArray<BOID_HANDLE> Handles = AFlocksWorld::WorldInst->BatchAddBoids(Amount);
	TArray<FFlocksBoidBlueprintHandle> BlueprintHandles;
	BlueprintHandles.SetNum(Handles.Num());

	for (int32 i = 0; i < Handles.Num(); ++i)
	{
		BlueprintHandles[i] = FFlocksBoidBlueprintHandle(Handles[i]);
	}

	return BlueprintHandles;
}

void UFlocksStatics::BatchRemoveBoids(int32 Amount)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld::WorldInst->BatchRemoveBoids(Amount);
}

void UFlocksStatics::RemoveBoid(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld::WorldInst->RemoveBoid(Boid.Handle);
}

void UFlocksStatics::SetMaxHealthForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewMaxHealth, bool KeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	float OldHealth = StateTableData[Index].Health;
	float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
	StateTableData[Index].Health = KeepHealthPercent ? OldHealthPercent * NewMaxHealth : StateTableData[Index].Health;
	StateTableData[Index].MaxHealth = NewMaxHealth;

	float NewHealth = StateTableData[Index].Health;
	StateTable->Unlock();

	World->NativeBoidHealthChanged(Boid.Handle, OldHealth, NewHealth, nullptr);
}

void UFlocksStatics::SetSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Speed = NewSpeed;
	StateTable->Unlock();
}

void UFlocksStatics::SetTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Turning = NewTurningSpeed;
	StateTable->Unlock();

}

void UFlocksStatics::SetScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Scale = NewScale;
	StateTable->Unlock();
}

void UFlocksStatics::SetAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	FlocksAnimationTable* AnimationTable = VisualsTable->AnimationTable;
	int32 AnimationTableIndex = AnimationTable->Find(Boid.Handle);
	if(AnimationTableIndex != INVALID_BOID_HANDLE_INDEX)
	{
		FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
		AnimationTableData[AnimationTableIndex].AnimRateScale = NewAnimRate;
		AnimationTable->Unlock();
	}
}

void UFlocksStatics::RandomizeSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Speed = FMath::RandRange(MinSpeed, MaxSpeed);
	StateTable->Unlock();
}

void UFlocksStatics::RandomizeTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Turning = FMath::RandRange(MinTurningSpeed, MaxTurningSpeed);
	StateTable->Unlock();
}

void UFlocksStatics::RandomizeScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Scale = FMath::RandRange(MinScale, MaxScale);
	StateTable->Unlock();
}

void UFlocksStatics::RandomizeAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	FlocksAnimationTable* AnimationTable = VisualsTable->AnimationTable;
	int32 AnimationTableIndex = AnimationTable->Find(Boid.Handle);

	FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
	if (AnimationTableIndex != INVALID_BOID_HANDLE_INDEX)
	{
		AnimationTableData[AnimationTableIndex].AnimRateScale = FMath::RandRange(MinAnimRate, MaxAnimRate);
	}
	AnimationTable->Unlock();
}

void UFlocksStatics::ClampSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Speed = FMath::Clamp(StateTableData[Index].Speed, MinSpeed, MaxSpeed);
	StateTable->Unlock();
}

void UFlocksStatics::ClampTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Turning = FMath::Clamp(StateTableData[Index].Turning, MinTurningSpeed, MaxTurningSpeed);
	StateTable->Unlock();
}

void UFlocksStatics::ClampScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	unsigned short Index = StateTable->Find(Boid.Handle);
	StateTableData[Index].Scale = FMath::Clamp(StateTableData[Index].Scale, MinScale, MaxScale);
	StateTable->Unlock();
}

void UFlocksStatics::ClampAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	FlocksAnimationTable* AnimationTable = VisualsTable->AnimationTable;
	int32 AnimationTableIndex = AnimationTable->Find(Boid.Handle);
	if(AnimationTableIndex != INVALID_BOID_HANDLE_INDEX)
	{
		FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
		AnimationTableData[AnimationTableIndex].AnimRateScale = FMath::Clamp(AnimationTableData[AnimationTableIndex].AnimRateScale, MinAnimRate, MaxAnimRate);
		AnimationTable->Unlock();
	}
}

void UFlocksStatics::UpdateSettingsForBoid(const FFlocksBoidBlueprintHandle& Boid, const FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTableData[StateTableIndex].Speed = FMath::RandRange(Settings.MinSpeed, Settings.MaxSpeed);
	StateTableData[StateTableIndex].Turning = FMath::RandRange(Settings.MinTurning, Settings.MaxTurning);
	StateTableData[StateTableIndex].Scale = FMath::RandRange(Settings.MinScale, Settings.MaxScale);

	float OldHealth = StateTableData[StateTableIndex].Health;
	float OldMaxHealth = StateTableData[StateTableIndex].MaxHealth;
	StateTableData[StateTableIndex].MaxHealth = Settings.MaxHealth;
	StateTableData[StateTableIndex].Health = bKeepHealthPercent ? (Settings.MaxHealth * (OldHealth / OldMaxHealth)) : OldHealth;
	StateTableData[StateTableIndex].Health = FMath::Clamp(StateTableData[StateTableIndex].Health, 0.0f, StateTableData[StateTableIndex].MaxHealth);
	StateTable->Unlock();
}

void UFlocksStatics::SetMaxHealthForAllBoids(float NewMaxHealth, bool bKeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	float OldHealths[MAX_BOIDS];
	float NewHealths[MAX_BOIDS];
	ParallelFor(StateTable->Size(), [StateTableData, &OldHealths, &NewHealths, NewMaxHealth, bKeepHealthPercent](unsigned short Index)
		{
			OldHealths[Index] = StateTableData[Index].Health;
			float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
			StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * NewMaxHealth : StateTableData[Index].Health;
			StateTableData[Index].MaxHealth = NewMaxHealth;
			StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);

			NewHealths[Index] = StateTableData[Index].Health;
		});

	StateTable->Unlock();

	for (int32 i = 0; i < StateTable->Size(); ++i)
	{
		if (NewHealths[i] != OldHealths[i])
		{
			World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
		}
	}
}

void UFlocksStatics::SetSpeedForAllBoids(float NewSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, NewSpeed](unsigned short Index)
		{
			StateTableData[Index].Speed = NewSpeed;
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetTurningSpeedForAllBoids(float NewTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, NewTurningSpeed](unsigned short Index)
		{
			StateTableData[Index].Turning = NewTurningSpeed;
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetScaleForAllBoids(float NewScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, NewScale](unsigned short Index)
		{
			StateTableData[Index].Scale = NewScale;
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetAnimRateForAllBoids(float NewAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		if(World->VisualsTable[i]->AnimationTable == nullptr)
			continue;

		FlocksAnimationTable* AnimationTable = World->VisualsTable[i]->AnimationTable;

		FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
		ParallelFor(AnimationTable->Size(), [AnimationTableData, NewAnimRate](unsigned short Index)
		{
			AnimationTableData[Index].AnimRateScale = NewAnimRate;
		});
		AnimationTable->Unlock();
	}
}

void UFlocksStatics::RandomizeSpeedForAllBoids(float MinSpeed, float MaxSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, MinSpeed, MaxSpeed](unsigned short Index)
		{
			StateTableData[Index].Speed = FMath::RandRange(MinSpeed, MaxSpeed);
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeTurningSpeedForAllBoids(float MinTurningSpeed, float MaxTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, MinTurningSpeed, MaxTurningSpeed](unsigned short Index)
		{
			StateTableData[Index].Turning = FMath::RandRange(MinTurningSpeed, MaxTurningSpeed);
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeScaleForAllBoids(float MinScale, float MaxScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, MinScale, MaxScale](unsigned short Index)
		{
			StateTableData[Index].Scale = FMath::RandRange(MinScale, MaxScale);
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeAnimRateForAllBoids(float MinAnimRate, float MaxAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		if (World->VisualsTable[i]->AnimationTable == nullptr)
			continue;

		FlocksAnimationTable* AnimationTable = World->VisualsTable[i]->AnimationTable;

		FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
		ParallelFor(AnimationTable->Size(), [AnimationTableData, MinAnimRate, MaxAnimRate](unsigned short Index)
			{
				AnimationTableData[Index].AnimRateScale = FMath::RandRange(MinAnimRate, MaxAnimRate);
			});
		AnimationTable->Unlock();
	}
}

void UFlocksStatics::UpdateSettingsForAllBoids(const FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	float OldHealths[MAX_BOIDS];
	float NewHealths[MAX_BOIDS];
	ParallelFor(StateTable->Size(), [&StateTableData, &OldHealths, &NewHealths, StateTable, Settings, bKeepHealthPercent](unsigned short Index)
		{
			StateTableData[Index].Speed = FMath::RandRange(Settings.MinSpeed, Settings.MaxSpeed);
			StateTableData[Index].Turning = FMath::RandRange(Settings.MinTurning, Settings.MaxTurning);
			StateTableData[Index].Scale = FMath::RandRange(Settings.MinScale, Settings.MaxScale);

			OldHealths[Index] = StateTableData[Index].Health;
			float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
			StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * Settings.MaxHealth : StateTableData[Index].Health;
			StateTableData[Index].MaxHealth = Settings.MaxHealth;
			StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);
			NewHealths[Index] = StateTableData[Index].Health;
		});

	StateTable->Unlock();
	
	for (int32 i = 0; i < StateTable->Size(); ++i)
	{
		if (NewHealths[i] != OldHealths[i])
		{
			World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
		}
	}

}

void UFlocksStatics::SetMaxHealthForAllBoidsInGroup(int32 Group, float NewMaxHealth, bool bKeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	float OldHealths[MAX_BOIDS];
	float NewHealths[MAX_BOIDS];
	ParallelFor(StateTable->Size(), [StateTableData, &OldHealths, &NewHealths, Group, NewMaxHealth, bKeepHealthPercent](unsigned short Index)
		{
			OldHealths[Index] = 0.0f;
			NewHealths[Index] = 0.0f;

			if(StateTableData[Index].Group == Group)
			{
				OldHealths[Index] = StateTableData[Index].Health;
				float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
				StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * NewMaxHealth : StateTableData[Index].Health;
				StateTableData[Index].MaxHealth = NewMaxHealth;
				StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);

				NewHealths[Index] = StateTableData[Index].Health;
			}
		});

	StateTable->Unlock();

	for (int32 i = 0; i < StateTable->Size(); ++i)
	{
		if (NewHealths[i] != OldHealths[i])
		{
			World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
		}
	}
}

void UFlocksStatics::SetSpeedForBoidsInGroup(int32 Group, float NewSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, NewSpeed](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Speed = NewSpeed;
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetTurningSpeedForBoidsInGroup(int32 Group, float NewTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, NewTurningSpeed](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Turning = NewTurningSpeed;
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetScaleForBoidsInGroup(int32 Group, float NewScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, NewScale](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Scale = NewScale;
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::SetAnimRateForBoidsInGroup(int32 Group, float NewAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	FlocksAnimationTable* AnimationTables[MAX_MESHES];
	FlocksAnimationTable::FTableData* AnimationTableData[MAX_MESHES];

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		AnimationTables[i] = World->VisualsTable[i]->AnimationTable;
		AnimationTableData[i] = World->VisualsTable[i]->AnimationTable->Lock();
	}

	ParallelFor(StateTable->Size(), [StateTable, &StateTableData, AnimationTables, &AnimationTableData, Group, NewAnimRate](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				BOID_HANDLE Boid = StateTable->Get(Index);

				int32 MeshIndex = StateTableData[Index].MeshIndex;

				FlocksAnimationTable* AnimationTable = AnimationTables[MeshIndex];
				int32 AnimationTableIndex = AnimationTable->Find(Boid);
				AnimationTableData[MeshIndex][AnimationTableIndex].AnimRateScale = NewAnimRate;
			}
		});

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		World->VisualsTable[i]->AnimationTable->Unlock();
	}

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeSpeedForAllBoidsInGroup(int32 Group, float MinSpeed, float MaxSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, MinSpeed, MaxSpeed](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Speed = FMath::RandRange(MinSpeed, MaxSpeed);
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeTurningSpeedForAllBoidsInGroup(int32 Group, float MinTurningSpeed, float MaxTurningSpeed)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, MinTurningSpeed, MaxTurningSpeed](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Turning = FMath::RandRange(MinTurningSpeed, MaxTurningSpeed);
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeScaleForAllBoidsInGroup(int32 Group, float MinScale, float MaxScale)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	ParallelFor(StateTable->Size(), [&StateTableData, Group, MinScale, MaxScale](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Scale = FMath::RandRange(MinScale, MaxScale);
			}
		});

	StateTable->Unlock();
}

void UFlocksStatics::RandomizeAnimRateForAllBoidsInGroup(int32 Group, float MinAnimRate, float MaxAnimRate)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	FlocksAnimationTable* AnimationTables[MAX_MESHES];
	FlocksAnimationTable::FTableData* AnimationTableData[MAX_MESHES];

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		AnimationTables[i] = World->VisualsTable[i]->AnimationTable;
		AnimationTableData[i] = World->VisualsTable[i]->AnimationTable->Lock();
	}

	ParallelFor(StateTable->Size(), [StateTable, &StateTableData, AnimationTables, &AnimationTableData, Group, MinAnimRate, MaxAnimRate](unsigned short Index)
		{
			if (StateTableData[Index].Group == Group)
			{
				BOID_HANDLE Boid = StateTable->Get(Index);

				int32 MeshIndex = StateTableData[Index].MeshIndex;

				FlocksAnimationTable* AnimationTable = AnimationTables[MeshIndex];
				int32 AnimationTableIndex = AnimationTable->Find(Boid);
				AnimationTableData[MeshIndex][AnimationTableIndex].AnimRateScale = FMath::RandRange(MinAnimRate, MaxAnimRate);
			}
		});

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		World->VisualsTable[i]->AnimationTable->Unlock();
	}

	StateTable->Unlock();
}

void UFlocksStatics::UpdateSettingsForAllBoidsInGroup(int32 Group, const FDefaultBoidSettings& Settings, bool bKeepHealthPercent)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	float OldHealths[MAX_BOIDS];
	float NewHealths[MAX_BOIDS];
	ParallelFor(StateTable->Size(), [&StateTableData, &OldHealths, &NewHealths, Group, StateTable, Settings, bKeepHealthPercent](unsigned short Index)
		{
			OldHealths[Index] = 0.0f;
			NewHealths[Index] = 0.0f;

			if(StateTableData[Index].Group == Group)
			{
				StateTableData[Index].Speed = FMath::RandRange(Settings.MinSpeed, Settings.MaxSpeed);
				StateTableData[Index].Turning = FMath::RandRange(Settings.MinTurning, Settings.MaxTurning);
				StateTableData[Index].Scale = FMath::RandRange(Settings.MinScale, Settings.MaxScale);

				OldHealths[Index] = StateTableData[Index].Health;
				float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
				StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * Settings.MaxHealth : StateTableData[Index].Health;
				StateTableData[Index].MaxHealth = Settings.MaxHealth;
				StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);

				NewHealths[Index] = StateTableData[Index].Health;
			}
		});

	StateTable->Unlock();

	for (int32 i = 0; i < StateTable->Size(); ++i)
	{
		if (NewHealths[i] != OldHealths[i])
		{
			World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
		}
	}
}

void UFlocksStatics::UpdateBoidDefaultMaxHealthForGroup(int32 Group, float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultBoidSettings[Group].MaxHealth = NewMaxHealth;

	if (UpdateHealthMode != EUpdateBoidDefaultHealthMode::LeaveExistingMaxHealth)
	{
		float OldHealths[MAX_BOIDS];
		float NewHealths[MAX_BOIDS];
		FlocksStateTable* StateTable = World->StateTable;
		FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

		bool bKeepHealthPercent = UpdateHealthMode == EUpdateBoidDefaultHealthMode::KeepHealthPercent;
		ParallelFor(StateTable->Size(), [&StateTableData, &OldHealths, &NewHealths, Group, StateTable, NewMaxHealth, bKeepHealthPercent](unsigned short Index)
			{
				OldHealths[Index] = 0.0f;
				NewHealths[Index] = 0.0f;

				if (StateTableData[Index].Group == Group)
				{
					OldHealths[Index] = StateTableData[Index].Health;
					float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
					StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * NewMaxHealth : StateTableData[Index].Health;
					StateTableData[Index].MaxHealth = NewMaxHealth;
					StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);

					NewHealths[Index] = StateTableData[Index].Health;
				}
			});

		StateTable->Unlock();

		for (int32 i = 0; i < StateTable->Size(); ++i)
		{
			if (NewHealths[i] != OldHealths[i])
			{
				World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
			}
		}
	}
}

void UFlocksStatics::UpdateBoidDefaultSpeedForGroup(int32 Group, float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultBoidSettings[Group].MinSpeed = MinSpeed;
	World->DefaultBoidSettings[Group].MaxSpeed = MaxSpeed;

	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	switch (UpdateMode)
	{
		case EUpdateBoidDefaultsMode::RandomizeExistingBoidValues:
			ParallelFor(StateTable->Size(), [StateTableData, Group, MinSpeed, MaxSpeed](unsigned short Index)
				{
					if (StateTableData[Index].Group == Group)
					{
						StateTableData[Index].Speed = FMath::RandRange(MinSpeed, MaxSpeed);
					}
				});
		break;

		case EUpdateBoidDefaultsMode::ClampExistingBoidValues:
			ParallelFor(StateTable->Size(), [StateTableData, Group, MinSpeed, MaxSpeed](unsigned short Index)
				{
					if (StateTableData[Index].Group == Group)
					{
						StateTableData[Index].Speed = FMath::Clamp(StateTableData[Index].Speed, MinSpeed, MaxSpeed);
					}
				});
		break;
	}

	StateTable->Unlock();
}

void UFlocksStatics::UpdateBoidDefaultTurningSpeedForGroup(int32 Group, float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultBoidSettings[Group].MinTurningSpeed = MinTurningSpeed;
	World->DefaultBoidSettings[Group].MaxTurningSpeed = MaxTurningSpeed;

	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	switch (UpdateMode)
	{
	case EUpdateBoidDefaultsMode::RandomizeExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, MinTurningSpeed, MaxTurningSpeed](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Turning = FMath::RandRange(MinTurningSpeed, MaxTurningSpeed);
				}
			});
		break;

	case EUpdateBoidDefaultsMode::ClampExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, MinTurningSpeed, MaxTurningSpeed](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Turning = FMath::Clamp(StateTableData[Index].Turning, MinTurningSpeed, MaxTurningSpeed);
				}
			});
		break;
	}

	StateTable->Unlock();
}

void UFlocksStatics::UpdateBoidDefaultScaleForGroup(int32 Group, float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultBoidSettings[Group].MinScale = MinScale;
	World->DefaultBoidSettings[Group].MaxScale = MaxScale;

	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	switch (UpdateMode)
	{
	case EUpdateBoidDefaultsMode::RandomizeExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, MinScale, MaxScale](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Scale = FMath::RandRange(MinScale, MaxScale);
				}
			});
		break;

	case EUpdateBoidDefaultsMode::ClampExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, MinScale, MaxScale](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Scale = FMath::Clamp(StateTableData[Index].Scale, MinScale, MaxScale);
				}
			});
		break;
	}

	StateTable->Unlock();
}

void UFlocksStatics::UpdateBoidDefaultAnimRateForMesh(int32 MeshIndex, float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultMeshSettings[MeshIndex].MinAnimRateScale = MinAnimRate;
	World->DefaultMeshSettings[MeshIndex].MaxAnimRateScale = MaxAnimRate;

	if(UpdateMode != EUpdateBoidDefaultsMode::LeaveExistingBoidValues)
	{
		FlocksAnimationTable* AnimationTable = World->VisualsTable[MeshIndex]->AnimationTable;
		FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();

		ParallelFor(AnimationTable->Size(), [&AnimationTableData, UpdateMode, MinAnimRate, MaxAnimRate](unsigned short Index)
		{
			switch (UpdateMode)
			{
				case EUpdateBoidDefaultsMode::ClampExistingBoidValues:
					AnimationTableData[Index].AnimRateScale = FMath::Clamp(AnimationTableData[Index].AnimRateScale, MinAnimRate, MaxAnimRate);
				break;

				case EUpdateBoidDefaultsMode::RandomizeExistingBoidValues:
					AnimationTableData[Index].AnimRateScale = FMath::RandRange(MinAnimRate, MaxAnimRate);
				break;
			}
		});

		AnimationTable->Unlock();
	}
}

void UFlocksStatics::UpdateBoidDefaultSettingsForGroup(int32 Group, const FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	World->DefaultBoidSettings[Group].MinSpeed = Settings.MinSpeed;
	World->DefaultBoidSettings[Group].MaxSpeed = Settings.MaxSpeed;
	World->DefaultBoidSettings[Group].MinTurningSpeed = Settings.MinTurning;
	World->DefaultBoidSettings[Group].MaxTurningSpeed = Settings.MaxTurning;
	World->DefaultBoidSettings[Group].MinScale = Settings.MinScale;
	World->DefaultBoidSettings[Group].MaxScale = Settings.MaxScale;
	World->DefaultBoidSettings[Group].MaxHealth = Settings.MaxHealth;

	FlocksStateTable* StateTable = World->StateTable;
	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();

	switch (UpdateMode)
	{
	case EUpdateBoidDefaultsMode::RandomizeExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, Settings](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Speed = FMath::RandRange(Settings.MinSpeed, Settings.MaxSpeed);
					StateTableData[Index].Turning = FMath::RandRange(Settings.MinTurning, Settings.MaxTurning);
					StateTableData[Index].Scale = FMath::RandRange(Settings.MinScale, Settings.MaxScale);
				}
			});
		break;

	case EUpdateBoidDefaultsMode::ClampExistingBoidValues:
		ParallelFor(StateTable->Size(), [StateTableData, Group, Settings](unsigned short Index)
			{
				if (StateTableData[Index].Group == Group)
				{
					StateTableData[Index].Speed = FMath::Clamp(StateTableData[Index].Speed, Settings.MinSpeed, Settings.MaxSpeed);
					StateTableData[Index].Turning = FMath::Clamp(StateTableData[Index].Turning, Settings.MinTurning, Settings.MaxTurning);
					StateTableData[Index].Scale = FMath::Clamp(StateTableData[Index].Scale, Settings.MinScale, Settings.MaxScale);
				}
			});
		break;
	}

	StateTable->Unlock();

	if (UpdateHealthMode != EUpdateBoidDefaultHealthMode::LeaveExistingMaxHealth)
	{
		StateTableData = StateTable->Lock();

		float OldHealths[MAX_BOIDS];
		float NewHealths[MAX_BOIDS];

		bool bKeepHealthPercent = UpdateHealthMode == EUpdateBoidDefaultHealthMode::KeepHealthPercent;
		ParallelFor(StateTable->Size(), [&StateTableData, &OldHealths, &NewHealths, Group, Settings, bKeepHealthPercent](unsigned short Index)
			{
				OldHealths[Index] = 0.0f;
				NewHealths[Index] = 0.0f;

				if (StateTableData[Index].Group == Group)
				{
					OldHealths[Index] = StateTableData[Index].Health;
					float OldHealthPercent = StateTableData[Index].Health / StateTableData[Index].MaxHealth;
					StateTableData[Index].Health = bKeepHealthPercent ? OldHealthPercent * Settings.MaxHealth : StateTableData[Index].Health;
					StateTableData[Index].MaxHealth = Settings.MaxHealth;
					StateTableData[Index].Health = FMath::Clamp(StateTableData[Index].Health, 0.0f, StateTableData[Index].MaxHealth);

					NewHealths[Index] = StateTableData[Index].Health;
				}
			});

		StateTable->Unlock();

		for (int32 i = 0; i < StateTable->Size(); ++i)
		{
			if (NewHealths[i] != OldHealths[i])
			{
				World->NativeBoidHealthChanged(StateTable->Get(i), OldHealths[i], NewHealths[i], nullptr);
			}
		}
	}
}

void UFlocksStatics::UpdateBoidDefaultMaxHealthForAllGroups(float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		UpdateBoidDefaultMaxHealthForGroup(i, NewMaxHealth, UpdateHealthMode);
	}
}

void UFlocksStatics::UpdateBoidDefaultSpeedForAllGroups(float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		UpdateBoidDefaultSpeedForGroup(i, MinSpeed, MaxSpeed, UpdateMode);
	}
}

void UFlocksStatics::UpdateBoidDefaultTurningSpeedForAllGroups(float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		UpdateBoidDefaultTurningSpeedForGroup(i, MinTurningSpeed, MaxTurningSpeed, UpdateMode);
	}
}

void UFlocksStatics::UpdateBoidDefaultScaleForAllGroups(float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		UpdateBoidDefaultScaleForGroup(i, MinScale, MaxScale, UpdateMode);
	}
}

void UFlocksStatics::UpdateBoidDefaultAnimRateForAllMeshes(float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		UpdateBoidDefaultAnimRateForMesh(i, MinAnimRate, MaxAnimRate, UpdateMode);
	}
}

void UFlocksStatics::UpdateBoidDefaultSettingsForAllGroups(const FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		UpdateBoidDefaultSettingsForGroup(i, Settings, UpdateMode, UpdateHealthMode);
	}
}

void UFlocksStatics::SetGroupCohesion(int32 Group, float Cohesion)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupCohesion = Cohesion;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupSeparation(int32 Group, float Separation)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupSeparation = Separation;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupAlignment(int32 Group, float Alignment)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupAlignment = Alignment;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupGoal(int32 Group, float Goal)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupGoal = Goal;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupFlee(int32 Group, float Flee)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupFlee = Flee;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupRestriction(int32 Group, float Restriction)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupRestriction = Restriction;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupPreferNonVerticalMovement(int32 Group, bool PreferNonVerticalMovement)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupNonVerticalMovementFactor = PreferNonVerticalMovement ? 1.0f : 0.0f;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupCohesionRadius(int32 Group, float CohesionRadius)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupCohesionRadius = CohesionRadius;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupSeparationRadius(int32 Group, float SeparationRadius)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupSeparationRadius = SeparationRadius;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupAlignmentRadius(int32 Group, float AlignmentRadius)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupAlignmentRadius = AlignmentRadius;
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupResponseToGroup(int32 Group, int32 OtherGroup, EGroupResponses Response)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupResponseToGroups[OtherGroup] = static_cast<int32>(Response);
	World->UnlockGroupData();
}

void UFlocksStatics::SetGroupSettings(int32 Group, const FGroupSettings& Settings)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	GroupData[Group].GroupAlignment = Settings.Alignment;
	GroupData[Group].GroupCohesion = Settings.Cohesion;
	GroupData[Group].GroupSeparation = Settings.Separation;
	GroupData[Group].GroupGoal = Settings.Goal;
	GroupData[Group].GroupFlee = Settings.Flee;
	GroupData[Group].GroupRestriction = Settings.Restriction;
	GroupData[Group].GroupSeparationRadius = Settings.SeparationRadius;
	GroupData[Group].GroupCohesionRadius = Settings.CohesionRadius;
	GroupData[Group].GroupAlignmentRadius = Settings.AlignmentRadius;
	GroupData[Group].GroupNonVerticalMovementFactor = Settings.bPreferNonVerticalMovement ? 1.0f : 0.0f;

	for (int32 i = 0; i < Settings.GroupResponses.Num(); ++i)
	{
		GroupData[Group].GroupResponseToGroups[Settings.GroupResponses[i].Group] = static_cast<int32>(Settings.GroupResponses[i].Response);
	}
	World->UnlockGroupData();
}

void UFlocksStatics::GetGroupSettings(int32 Group, FGroupSettings& Settings)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_GROUP_INDEX(Group);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	AFlocksWorld::FFlocksGroupData* GroupData = World->LockGroupData();
	Settings.Alignment = GroupData[Group].GroupAlignment;
	Settings.AlignmentRadius = GroupData[Group].GroupAlignmentRadius;
	Settings.bPreferNonVerticalMovement = GroupData[Group].GroupNonVerticalMovementFactor > 0.0f;
	Settings.Cohesion = GroupData[Group].GroupCohesion;
	Settings.CohesionRadius = GroupData[Group].GroupCohesionRadius;
	Settings.Flee = GroupData[Group].GroupFlee;
	Settings.Goal = GroupData[Group].GroupGoal;
	Settings.Restriction = GroupData[Group].GroupRestriction;
	Settings.Separation = GroupData[Group].GroupSeparation;
	Settings.SeparationRadius = GroupData[Group].GroupSeparationRadius;

	for (int32 i = 0; i < MAX_GROUPS; ++i)
	{
		FGroupResponseEntry Entry;
		Entry.Group = i;
		Entry.Response = static_cast<EGroupResponses>(GroupData[Group].GroupResponseToGroups[i]);
		Settings.GroupResponses.Add(Entry);
	}
	World->UnlockGroupData();
}

void UFlocksStatics::SetBoidMaterialCustomValue(const FFlocksBoidBlueprintHandle& Boid, const int32 ValueIndex, const float Value)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	ensureMsgf(ValueIndex >= AFlocksWorld::WorldInst->PluginReservedCustomDataValues, TEXT("The first %i Custom Data Values are reserved for Flocks Plugin. Please offset your usage by this amount."), AFlocksWorld::WorldInst->PluginReservedCustomDataValues);
	
	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTable->Find(Boid.Handle)].MeshIndex;
	StateTable->Unlock();

	World->VisualsTable[MeshIndex]->SetMaterialCustomDataValue(Boid.Handle, ValueIndex, Value);
}

void UFlocksStatics::SetBoidMaterialCustomValueOnAll(const int32 ValueIndex, const float Value)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD();
#endif

	ensureMsgf(ValueIndex >= AFlocksWorld::WorldInst->PluginReservedCustomDataValues, TEXT("The first %i Custom Data Values are reserved for Flocks Plugin. Please offset your usage by this amount."), AFlocksWorld::WorldInst->PluginReservedCustomDataValues);

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		World->VisualsTable[i]->SetMaterialCustomDataValueOnAll(ValueIndex, Value);
	}
}

TArray<FVector> UFlocksStatics::GetAllBoidLocations()
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN({});
#endif

	TArray<FVector> Locations;

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	Locations.SetNum(StateTable->Size());

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	ParallelFor(StateTable->Size(), [&Locations, StateTableData](unsigned short Index)
	{
		FVector3f Position = StateTableData[Index].Position;
		Locations[Index] = (FVector)Position;

	});
	StateTable->Unlock();

	return Locations;
}

TArray<FVector> UFlocksStatics::GetBoidLocations(TArray<FFlocksBoidBlueprintHandle> Boids)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN({});
#endif

	TArray<FVector> Locations;

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	Locations.SetNum(StateTable->Size());

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	ParallelFor(Boids.Num(), [&Locations, StateTable, StateTableData, Boids](unsigned short Index)
	{
		FFlocksBoidBlueprintHandle Boid = Boids[Index];
		FVector3f Position = StateTableData[StateTable->Find(Boid.Handle)].Position;
		Locations[Index] = (FVector)Position;

	});
	StateTable->Unlock();

	return Locations;
}

bool UFlocksStatics::IsValidBoidHandle(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	return AFlocksWorld::WorldInst->DatabaseHeader->IsValidBoid(Boid.Handle);
}

bool UFlocksStatics::IsValidVolumeHandle(const FFlocksVolumeBlueprintHandle& Volume)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	return AFlocksWorld::WorldInst->DatabaseHeader->IsValidVolume(Volume.Handle);
}

FVector UFlocksStatics::GetBoidLocation(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, FVector::ZeroVector);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	FVector3f Position = StateTableData[StateTable->Find(Boid.Handle)].Position;
	StateTable->Unlock();

	return FVector(Position.X, Position.Y, Position.Z);
}

FRotator UFlocksStatics::GetBoidHeading(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, FRotator::ZeroRotator);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	FVector3f Heading = StateTableData[StateTable->Find(Boid.Handle)].Heading;
	StateTable->Unlock();

	return FVector(Heading.X, Heading.Y, Heading.Z).Rotation();
}

int32 UFlocksStatics::GetBoidGroup(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 0);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 Group = StateTableData[StateTable->Find(Boid.Handle)].Group;
	StateTable->Unlock();

	return Group;
}

float UFlocksStatics::GetBoidSpeed(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 0.0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float Speed = StateTableData[StateTable->Find(Boid.Handle)].Speed;
	StateTable->Unlock();

	return Speed;
}

float UFlocksStatics::GetBoidTurningSpeed(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, .0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float Turning = StateTableData[StateTable->Find(Boid.Handle)].Turning;
	StateTable->Unlock();

	return Turning;
}

float UFlocksStatics::GetBoidScale(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 1.0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float Scale = StateTableData[StateTable->Find(Boid.Handle)].Scale;
	StateTable->Unlock();

	return Scale;
}

float UFlocksStatics::GetBoidAnimRate(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 1.0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	FlocksAnimationTable* AnimationTable = VisualsTable->AnimationTable;

	FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
	int32 AnimationTableIndex = AnimationTable->Find(Boid.Handle);

	float AnimRate = 1.0f;
	if (AnimationTableIndex != INVALID_BOID_HANDLE_INDEX)
	{
		AnimRate = AnimationTableData[AnimationTableIndex].AnimRateScale;
	}
	AnimationTable->Unlock();

	return AnimRate;
}

float UFlocksStatics::GetBoidHealth(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 0.0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float Health = StateTableData[StateTable->Find(Boid.Handle)].Health;
	StateTable->Unlock();

	return Health;
}

float UFlocksStatics::GetBoidMaxHealth(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 1.0f);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float MaxHealth = StateTableData[StateTable->Find(Boid.Handle)].MaxHealth;
	StateTable->Unlock();

	return MaxHealth;
}

float UFlocksStatics::GetBoidHealthPercent(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, 0.0f);
#endif

	return GetBoidHealth(Boid) / GetBoidMaxHealth(Boid);
}

void UFlocksStatics::GetBoidRadiusAndCenter(const FFlocksBoidBlueprintHandle& Boid, float& OutRadius, FVector& OutCenter)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	float Scale = StateTableData[StateTable->Find(Boid.Handle)].Scale;
	StateTable->Unlock();

	UStaticMesh* Mesh = GetMeshForBoid(Boid);
	OutRadius = Mesh != nullptr ? Mesh->GetBounds().SphereRadius * Scale : 0.0f;

	FVector Position = GetBoidLocation(Boid);
	FRotator Rotation = GetBoidHeading(Boid);
	FTransform BoidTrans = FTransform(Rotation, Position, FVector::OneVector * Scale);

	FTransform CustomPivotInverse = VisualsTable->CustomPivot.Inverse();
	OutCenter = UKismetMathLibrary::ComposeTransforms(CustomPivotInverse, BoidTrans).GetLocation();
}

FBoidSettings UFlocksStatics::GetBoidSettings(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, FBoidSettings());
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;

	FVector3f Position = StateTableData[StateTableIndex].Position;
	FVector3f Heading = StateTableData[StateTableIndex].Heading;

	FBoidSettings Settings;
	Settings.Position = FVector(Position.X, Position.Y, Position.Z);
	Settings.Rotation = FVector(Heading.X, Heading.Y, Heading.Z).Rotation();
	Settings.Actions = StateTableData[StateTableIndex].Action;
	Settings.Scale = StateTableData[StateTableIndex].Scale;
	Settings.Turning = StateTableData[StateTableIndex].Turning;
	Settings.Speed = StateTableData[StateTableIndex].Speed;
	Settings.MeshIndex = MeshIndex;
	Settings.Health = StateTableData[StateTableIndex].Health;
	Settings.MaxHealth = StateTableData[StateTableIndex].MaxHealth;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	FlocksAnimationTable* AnimationTable = VisualsTable->AnimationTable;
	FlocksAnimationTable::FTableData* AnimationTableData = AnimationTable->Lock();
	int32 AnimationTableIndex = AnimationTable->Find(Boid.Handle);

	float AnimRate = 1.0f;
	if (AnimationTableIndex != INVALID_BOID_HANDLE_INDEX)
	{
		AnimRate = AnimationTableData[AnimationTableIndex].AnimRateScale;
	}
	Settings.AnimRateScale = AnimRate;
	AnimationTable->Unlock();
	return Settings;
}

void UFlocksStatics::GetMaterialInstances(int32 MeshIndex, TArray<UMaterialInstanceDynamic*>& OutMaterials)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_MESH_INDEX(MeshIndex);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];

	OutMaterials.SetNum(VisualsTable->Materials.Num());

	for (int32 i = 0; VisualsTable->Materials.Num(); ++i)
	{
		OutMaterials[i] = VisualsTable->Materials[i].Get();
	}
}

UStaticMesh* UFlocksStatics::GetMeshForBoid(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, nullptr);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	int32 StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 MeshIndex = StateTableData[StateTableIndex].MeshIndex;
	StateTable->Unlock();

	FlocksVisualsTable* VisualsTable = World->VisualsTable[MeshIndex];
	return VisualsTable->ISMComponent->GetStaticMesh();
}

bool UFlocksStatics::GetBoidFromBlueprintID(int32 BlueprintID, FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	FFlocksBoidBlueprintHandle TempHandle;
	memcpy(&TempHandle.Handle, &BlueprintID, sizeof(unsigned int));

	if (!IsValidBoidHandle(TempHandle))
		return false;

	memcpy(&Boid.Handle, &BlueprintID, sizeof(unsigned int));
	return true;
}

bool UFlocksStatics::GetBoidBlueprintID(const FFlocksBoidBlueprintHandle& Boid, int32& BlueprintID)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	if (!IsValidBoidHandle(Boid))
		return false;

	memcpy(&BlueprintID, &Boid.Handle, sizeof(unsigned int));
	return true;
}

bool UFlocksStatics::GetBoidAtIndex(const int32 Index, FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_RETURN(false);
#endif

	Boid.Handle = AFlocksWorld::WorldInst->StateTable->Get(Index);
	return AFlocksWorld::WorldInst->DatabaseHeader->IsValidBoid(Boid.Handle);
}

int32 UFlocksStatics::GetNumBoids()
{
	if(AFlocksWorld::WorldInst == nullptr)
		return 0;

	return (int32)AFlocksWorld::WorldInst->StateTable->Size();
}

int32 UFlocksStatics::GetMaxGroups()
{
	return (int32)MAX_GROUPS;
}

int IntersectRaySphere(FVector Start, FVector Direction, FVector SphereLocation, float SphereRadius, float& T, FVector& HitPoint)
{
	FVector m = Start - SphereLocation;
	float b = FVector::DotProduct(m, Direction);
	float c = FVector::DotProduct(m, m) - SphereRadius * SphereRadius;

	if (c > 0.0f && b > 0.0f)
		return 0;

	float Discr = b * b - c;

	if (Discr < 0.0f)
		return 0;

	T = -b - FMath::Sqrt(Discr);

	if (T < 0.0f)
		T = 0.0f;

	HitPoint = Start + T * Direction;
	return 1;
}

bool UFlocksStatics::LineTraceForBoid(FVector Start, FVector End, FLineTraceForBoidsResult& Result)
{
	if (!AFlocksWorld::WorldInst.IsValid())
		return false;

	TArray<FLineTraceForBoidsResult> results;
	if (!LineTraceForBoids(Start, End, results))
	{
		return false;
	}

	Result = results[0];
	return true;
}

bool UFlocksStatics::LineTraceForBoids(FVector Start, FVector End, TArray<FLineTraceForBoidsResult>& Result)
{
	if (!AFlocksWorld::WorldInst.IsValid())
		return false;

	float LineDist = FVector::Dist(Start, End);
	Result.Empty();
	ParallelBoidCounter.Reset();

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	float AllMeshBounds[MAX_MESHES];
	for (int32 i = 0; i < MAX_MESHES; ++i)
	{
		UStaticMesh* Mesh = World->ISMComponents[i]->GetStaticMesh();
		AllMeshBounds[i] = Mesh != nullptr ? Mesh->GetBounds().SphereRadius : 0.0f;
	}

	FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
	ParallelFor(GetNumBoids(), [StateTableData, AllMeshBounds, LineDist, World, Start, End](int32 Index)
	{
		BOID_HANDLE Boid = World->StateTable->Get(Index);

		int32 MeshIndex = StateTableData[Index].MeshIndex;
		float Scale = StateTableData[Index].Scale;
		FVector3f Location = StateTableData[Index].Position;
		float Radius = Scale * AllMeshBounds[MeshIndex];

		float Dist;
		FVector HitPoint;
		if (IntersectRaySphere(Start, (End - Start).GetSafeNormal(), FVector(Location.X, Location.Y, Location.Z), Radius, Dist, HitPoint) != 0)
		{
			if (Dist <= LineDist)
			{
				int32 Count = ParallelBoidCounter.Add(1);
				LineTraceResults[Count].HitBoid = FFlocksBoidBlueprintHandle(Boid);
				LineTraceResults[Count].HitWorldPosition = HitPoint;
				LineTraceResults[Count].HitNormal = (HitPoint - FVector(Location.X, Location.Y, Location.Z)).GetSafeNormal();
				LineTraceResults[Count].Dist = Dist;
			}
		}
	});
	World->StateTable->Unlock();

	Result.SetNum(ParallelBoidCounter.GetValue());
	FMemory::Memcpy(Result.GetData(), &LineTraceResults[0], ParallelBoidCounter.GetValue() * sizeof(FLineTraceForBoidsResult));

	Result.Sort([](const FLineTraceForBoidsResult& a, const FLineTraceForBoidsResult& b)
	{
		// access some random field just to test compile
		return a.Dist < b.Dist;
	});

	return Result.Num() > 0;
}

TArray<FFlocksBoidBlueprintHandle> UFlocksStatics::GetAllBoidsInSphere(const FVector& Origin, float Radius)
{
	if (!AFlocksWorld::WorldInst.IsValid())
		return TArray<FFlocksBoidBlueprintHandle>();

	TArray<FFlocksBoidBlueprintHandle> Boids;
	Boids.SetNum(MAX_BOIDS);

	ParallelBoidCounter.Reset();

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();

	FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
	ParallelFor(GetNumBoids(), [World, &Boids, StateTableData, Origin, Radius](int32 Index)
		{
			BOID_HANDLE Boid = World->StateTable->Get(Index);
			FFlocksBoidBlueprintHandle Handle;
			Handle.Handle = Boid;

			FVector3f Location = StateTableData[Index].Position;

			float DistSqr = FVector::DistSquared(Origin, FVector(Location.X, Location.Y, Location.Z));
			if (DistSqr <= Radius * Radius)
			{
				int32 Count = ParallelBoidCounter.Add(1);
				Boids[Count] = Handle;
			}
		});
	World->StateTable->Unlock();

	Boids.SetNum(ParallelBoidCounter.GetValue());
	return Boids;
}

bool UFlocksStatics::IsBoidFleeing(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, false);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 Actions = StateTableData[StateTable->Find(Boid.Handle)].Action;
	StateTable->Unlock();

	return (Actions & (1 << 1)) != 0;
}

bool UFlocksStatics::IsBoidGoaling(const FFlocksBoidBlueprintHandle& Boid)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE_RETURN(Boid, false);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	int32 Actions = StateTableData[StateTable->Find(Boid.Handle)].Action;
	StateTable->Unlock();

	return (Actions & (1 << 0)) != 0;
}

void UFlocksStatics::GetVolumeBounds(const FFlocksVolumeBlueprintHandle& Volume, FVector& BoundsCenter, FVector& BoundsExtents, float& BoundsRadius)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_VOLUME_HANDLE(Volume);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	unsigned int VolumeIndex = World->VolumeInfoTable->Find(Volume.Handle);

	FlocksVolumeInfoTable::FTableData* VolumeInfoData = World->VolumeInfoTable->Lock();
	FMatrix44f LocalToWorld = VolumeInfoData[VolumeIndex].VolumeLocalToWorld;
	FVector3f Location = VolumeInfoData[VolumeIndex].VolumePosition;
	int32 VolumeShape = VolumeInfoData[VolumeIndex].VolumeShape;

	float OuterRadius = 0.0f;
	FBox3f Box;

	// Sphere
	if (VolumeShape == 0)
	{
		OuterRadius = VolumeInfoData[VolumeIndex].VolumeOuterRadius;
		Box.Min = Location + FVector3f(-OuterRadius, -OuterRadius, -OuterRadius);
		Box.Max = Location + FVector3f(OuterRadius, OuterRadius, OuterRadius);
	}
	// Box
	else
	{
		FVector3f Extents = VolumeInfoData[VolumeIndex].VolumeOuterExtents;
		FVector3f LocalCorners[8] =
		{
			FVector3f(Extents.X, Extents.Y, Extents.Z),
			FVector3f(-Extents.X, Extents.Y, Extents.Z),
			FVector3f(Extents.X, -Extents.Y, Extents.Z),
			FVector3f(Extents.X, Extents.Y, -Extents.Z),
			FVector3f(-Extents.X, -Extents.Y, Extents.Z),
			FVector3f(-Extents.X, Extents.Y, -Extents.Z),
			FVector3f(Extents.X, -Extents.Y, -Extents.Z),
			FVector3f(-Extents.X, -Extents.Y, -Extents.Z),
		};

		for (int32 i = 0; i < 8; ++i)
		{
			FVector3f WorldCorner = LocalToWorld.TransformPosition(LocalCorners[i]);

			if (i == 0)
			{
				OuterRadius = FVector3f::Dist(WorldCorner, Location);
				Box.Min = WorldCorner;
				Box.Max = WorldCorner;
			}
			else
			{
				OuterRadius = FMath::Max(FVector3f::Dist(WorldCorner, Location), OuterRadius);
				Box.Min = FVector3f(FMath::Min(WorldCorner.X, Box.Min.X), FMath::Min(WorldCorner.Y, Box.Min.Y), FMath::Min(WorldCorner.Z, Box.Min.Z));
				Box.Max = FVector3f(FMath::Max(WorldCorner.X, Box.Max.X), FMath::Max(WorldCorner.Y, Box.Max.Y), FMath::Max(WorldCorner.Z, Box.Max.Z));
			}
		}
	}
	World->VolumeInfoTable->Unlock();

	BoundsCenter = (FVector)Location;
	BoundsExtents = (FVector)Box.GetExtent();
	BoundsRadius = OuterRadius;
}

TArray<FFlocksBoidBlueprintHandle> UFlocksStatics::GetAllBoidsAffectedByVolume(const FFlocksVolumeBlueprintHandle& Volume)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_VOLUME_HANDLE_RETURN(Volume, TArray<FFlocksBoidBlueprintHandle>());

	if(!AFlocksWorld::WorldInst->bTrackVolumeOverlaps)
	{
		FMessageLog MessageLog = FMessageLog("PIE");
		MessageLog.Open(EMessageSeverity::Warning, true);
		MessageLog.Message(EMessageSeverity::Warning, LOCTEXT("FlocksGetAllBoidsAffectedByVolumeError", "Trying to call GetAllBoidsAffectByVolume, but bTrackVolumeOverlaps on World is false! Check this for the function to work as intended."));
		return TArray<FFlocksBoidBlueprintHandle>();
	}
#endif

	TArray<FFlocksBoidBlueprintHandle> Handles;

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksVolumeOverlapsTable* VolumeOverlapsTable = World->VolumeOverlapsTable;

	FlocksVolumeOverlapsTable::FTableData* VolumeOverlapsTableData = VolumeOverlapsTable->Lock();
	int32 VolumeIndex = VolumeOverlapsTable->Find(Volume.Handle);
	int32 NumBoids = VolumeOverlapsTableData[VolumeIndex].NumBoidsInVolume;

	ParallelFor(NumBoids, [VolumeOverlapsTableData, &Handles, VolumeIndex](int32 Index)
		{
			Handles[Index] = FFlocksBoidBlueprintHandle(VolumeOverlapsTableData[VolumeIndex].BoidsInVolume[Index]);
		});

	VolumeOverlapsTable->Unlock();
	return Handles;
}

int32 UFlocksStatics::GetNumBoidsAffectedByVolume(const FFlocksVolumeBlueprintHandle& Volume)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_VOLUME_HANDLE_RETURN(Volume, 0);

	if (!AFlocksWorld::WorldInst->bTrackVolumeOverlaps)
	{
		FMessageLog MessageLog = FMessageLog("PIE");
		MessageLog.Open(EMessageSeverity::Warning, true);
		MessageLog.Message(EMessageSeverity::Warning, LOCTEXT("GetNumBoidsAffectedByVolumeError", "Trying to call GetNumBoidsAffectedByVolume, but bTrackVolumeOverlaps on World is false! Check this for the function to work as intended."));
		return 0;
	}
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksVolumeOverlapsTable* VolumeOverlapsTable = World->VolumeOverlapsTable;

	FlocksVolumeOverlapsTable::FTableData* VolumeOverlapsTableData = VolumeOverlapsTable->Lock();
	int32 VolumeIndex = VolumeOverlapsTable->Find(Volume.Handle);
	int32 NumBoids = VolumeOverlapsTableData[VolumeIndex].NumBoidsInVolume;
	VolumeOverlapsTable->Unlock();
	return NumBoids;
}

void UFlocksStatics::SetHealthForBoid(const FFlocksBoidBlueprintHandle& Boid, float Health, AController* Instigator, bool& OutKilled)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	OutKilled = false;

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float CurrentHealth = StateTableData[StateTableIndex].Health;
	StateTable->Unlock();

	if(CurrentHealth > 0.0f)
	{
		StateTableData = StateTable->Lock();
		float OldHealth = StateTableData[StateTableIndex].Health;
		StateTableData[StateTableIndex].Health = Health;
		StateTableData[StateTableIndex].Health = FMath::Clamp(StateTableData[StateTableIndex].Health, 0.0f, StateTableData[StateTableIndex].MaxHealth);
		CurrentHealth = StateTableData[StateTableIndex].Health;
		StateTable->Unlock();

		OutKilled = Health <= 0.0f;
		World->NativeBoidHealthChanged(Boid.Handle, OldHealth, CurrentHealth, Instigator);
	}
}

void UFlocksStatics::DamageBoid(const FFlocksBoidBlueprintHandle& Boid, float Damage, AController* Instigator, bool& OutKilled)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	OutKilled = false;

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float CurrentHealth = StateTableData[StateTableIndex].Health;
	StateTable->Unlock();

	if (CurrentHealth > 0.0f)
	{
		StateTableData = StateTable->Lock();
		float OldHealth = StateTableData[StateTableIndex].Health;
		StateTableData[StateTableIndex].Health -= Damage;
		StateTableData[StateTableIndex].Health = FMath::Clamp(StateTableData[StateTableIndex].Health, 0.0f, StateTableData[StateTableIndex].MaxHealth);
		CurrentHealth = StateTableData[StateTableIndex].Health;
		StateTable->Unlock();

		OutKilled = CurrentHealth <= 0.0f;
		World->NativeBoidHealthChanged(Boid.Handle, OldHealth, CurrentHealth, Instigator);
	}
}

void UFlocksStatics::HealBoid(const FFlocksBoidBlueprintHandle& Boid, float Heal, AController* Instigator)
{
#if WITH_EDITOR
	VALIDATE_FLOCKS_WORLD_AND_BOID_HANDLE(Boid);
#endif

	AFlocksWorld* World = AFlocksWorld::WorldInst.Get();
	FlocksStateTable* StateTable = World->StateTable;
	unsigned short StateTableIndex = StateTable->Find(Boid.Handle);

	FlocksStateTable::FTableData* StateTableData = StateTable->Lock();
	float CurrentHealth = StateTableData[StateTableIndex].Health;
	StateTable->Unlock();

	if (CurrentHealth > 0.0f)
	{
		StateTableData = StateTable->Lock();
		float OldHealth = StateTableData[StateTableIndex].Health;
		StateTableData[StateTableIndex].Health += Heal;
		StateTableData[StateTableIndex].Health = FMath::Clamp(StateTableData[StateTableIndex].Health, 0.0f, StateTableData[StateTableIndex].MaxHealth);
		CurrentHealth = StateTableData[StateTableIndex].Health;
		StateTable->Unlock();

		World->NativeBoidHealthChanged(Boid.Handle, OldHealth, CurrentHealth, Instigator);
	}
}




















void UFlocksStatics::SetVelocityForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewVelocity)
{
}

void UFlocksStatics::RandomizeVelocityForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinVelocity, float MaxVelocity)
{
}

void UFlocksStatics::SetVelocityForAllBoids(float NewVelocity)
{
}

void UFlocksStatics::RandomizeVelocityForAllBoids(float MinVelocity, float MaxVelocity)
{
}

void UFlocksStatics::SetVelocityForBoidsInGroup(int32 Group, float NewVelocity)
{
}

void UFlocksStatics::RandomizeVelocityForAllBoidsInGroup(int32 Group, float MinVelocity, float MaxVelocity)
{
}

void UFlocksStatics::UpdateBoidDefaultVelocityForGroup(int32 Group, float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode)
{
}

void UFlocksStatics::UpdateBoidDefaultVelocityForAllGroups(float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode)
{
}

void UFlocksStatics::ApplyBoidMaterialCustomValues(const FFlocksBoidBlueprintHandle& Boid)
{
	//Deprecated
}

void UFlocksStatics::ApplyAllBoidMaterialCustomValues()
{
	//Deprecated
}

#undef LOCTEXT_NAMESPACE
