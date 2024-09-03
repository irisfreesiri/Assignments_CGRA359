// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksDatabaseHeader.h"
#include "Flocks.h"

#include "Utils/IndexArray.h"

FlocksDatabaseHeader::FlocksDatabaseHeader()
{
	BoidInfo = new IndexArray(MAX_BOIDS);
	Boids = new BOID_HANDLE[MAX_BOIDS];
	BoidGenerationNumbers = new uint8[MAX_BOIDS];

	VolumeInfo = new IndexArray(MAX_VOLUMES);
	Volumes = new VOLUME_HANDLE[MAX_VOLUMES];
	VolumeGenerationNumbers = new uint8[MAX_VOLUMES];

	Reset();
}

FlocksDatabaseHeader::~FlocksDatabaseHeader()
{
	delete BoidInfo;
	delete[] Boids;
	delete[] BoidGenerationNumbers;

	delete VolumeInfo;
	delete[] Volumes;
	delete[] VolumeGenerationNumbers;
}

BOID_HANDLE FlocksDatabaseHeader::AddBoid()
{
	unsigned short NextIndex = BoidInfo->Add();
	if (NextIndex != INVALID_BOID_HANDLE_INDEX)
	{
		check(Boids[NextIndex] == INVALID_BOID_HANDLE);

		Boids[NextIndex] = MakeBoidHandle(BoidGenerationNumbers[NextIndex]++, NextIndex);
		return Boids[NextIndex];
	}

	UE_LOG(FlocksLog, Warning, TEXT("Failure to add Boid: Most likely exceeded the max boid count of %i"), MAX_BOIDS);

	return INVALID_BOID_HANDLE;
}

bool FlocksDatabaseHeader::RemoveBoid(BOID_HANDLE Boid)
{
	if (!IsValidBoid(Boid))
		return false;

	unsigned short ObjectIndex = BoidHandleExtractIndex(Boid);
	Boids[ObjectIndex] = INVALID_BOID_HANDLE;
	BoidInfo->Remove(ObjectIndex);
	return true;
}

bool FlocksDatabaseHeader::IsValidBoid(BOID_HANDLE Boid) const
{
	return Boid != INVALID_BOID_HANDLE && (Boids[BoidHandleExtractIndex(Boid)] == Boid);
}

VOLUME_HANDLE FlocksDatabaseHeader::AddVolume()
{
	unsigned short NextIndex = VolumeInfo->Add();
	if (NextIndex != INVALID_VOLUME_HANDLE_INDEX)
	{
		check(Volumes[NextIndex] == INVALID_VOLUME_HANDLE);

		Volumes[NextIndex] = MakeVolumeHandle(VolumeGenerationNumbers[NextIndex]++, NextIndex);
		return Volumes[NextIndex];
	}

	UE_LOG(FlocksLog, Warning, TEXT("Failure to add Volume: Most likely exceeded the max volume count of %i"), MAX_VOLUMES);

	return INVALID_VOLUME_HANDLE;
}

bool FlocksDatabaseHeader::RemoveVolume(VOLUME_HANDLE Volume)
{
	if (!IsValidVolume(Volume))
		return false;

	unsigned short ObjectIndex = VolumeHandleExtractIndex(Volume);
	Volumes[ObjectIndex] = INVALID_VOLUME_HANDLE;
	VolumeInfo->Remove(ObjectIndex);
	return true;
}

bool FlocksDatabaseHeader::IsValidVolume(VOLUME_HANDLE Volume) const
{
	return Volume != INVALID_VOLUME_HANDLE && (Volumes[VolumeHandleExtractIndex(Volume)] == Volume);
}

void FlocksDatabaseHeader::Reset()
{
	memset(Boids, UINT8_MAX, MAX_BOIDS * sizeof(BOID_HANDLE));
	memset(Volumes, UINT8_MAX, MAX_VOLUMES * sizeof(VOLUME_HANDLE));
	memset(BoidGenerationNumbers, 0, MAX_BOIDS * sizeof(uint8));
	memset(VolumeGenerationNumbers, 0, MAX_VOLUMES * sizeof(uint8));
	BoidInfo->Reset();
	VolumeInfo->Reset();
}

BOID_HANDLE FlocksDatabaseHeader::GetBoid(unsigned short Index) const
{
	return Boids[Index];
}

unsigned short FlocksDatabaseHeader::NumBoids() const
{
	return BoidInfo->ArrayUsed;
}
