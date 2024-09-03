// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksTypes.h"
#include "FlocksWorld.h"
#include "FlocksVolumeInfoTable.h"
#include "Kismet/KismetMathLibrary.h"

BOID_HANDLE MakeBoidHandle(uint8 GenerationNumber, unsigned short Index)
{
	return (GenerationNumber << 16) | (Index << 0);
}

unsigned short BoidHandleExtractIndex(BOID_HANDLE Handle)
{
	return static_cast<unsigned short>(Handle & 0x0000ffff);
}

VOLUME_HANDLE MakeVolumeHandle(uint8 GenerationNumber, unsigned short Index)
{
	return GenerationNumber << 16 | (Index << 0);
}

unsigned short VolumeHandleExtractIndex(VOLUME_HANDLE Handle)
{
	return static_cast<unsigned short>(Handle & 0x0000ffff);
}

void FSpawnTypeSettings::GetLocationAndRotation(int32 Group, FVector& OutLocation, FRotator& OutRotation) const
{
	OutLocation = FVector::ZeroVector;
	OutRotation = bRandomRotation ? UKismetMathLibrary::RandomRotator() : SpawnRotation;

	if(AFlocksWorld::WorldInst == nullptr)
		return;

	switch (SpawnType)
	{
	case ESpawnTypes::AtWorld:
		OutLocation = AFlocksWorld::WorldInst->GetActorLocation();
		break;

	case ESpawnTypes::AtActor:
		OutLocation = SpawnActor != nullptr ? SpawnActor->GetActorLocation() : FVector::ZeroVector;
		break;

	case ESpawnTypes::AtLocation:
		OutLocation = SpawnLocation;
		break;

	case ESpawnTypes::AtSpawnPoint:
		OutLocation = AFlocksWorld::WorldInst->SpawnPoints.IsValidIndex(SpawnPointIndex) ? AFlocksWorld::WorldInst->SpawnPoints[SpawnPointIndex]->GetActorLocation() : FVector::ZeroVector;
		break;

	case ESpawnTypes::InsideRandomRestrictionVolume:
		FVector3f RandomPoint;
		if (AFlocksWorld::WorldInst->VolumeInfoTable->GetRandomPointInRestrictionVolumes(Group, RandomPoint))
		{
			OutLocation = FVector(RandomPoint.X, RandomPoint.Y, RandomPoint.Z);
		}
		break;
	}

	OutLocation += FMath::RandRange(-SpawnRadius, SpawnRadius) * FMath::VRand();
}
