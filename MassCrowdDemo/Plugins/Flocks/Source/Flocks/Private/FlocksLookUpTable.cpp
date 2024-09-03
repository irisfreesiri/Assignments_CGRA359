// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksLookUpTable.h"

BoidLookUpTable::BoidLookUpTable()
{
	//Add an entry onto the end thats invalid boid index
	BoidLookUpIndices = new unsigned short[MAX_BOIDS + 1];
	Boids = new BOID_HANDLE[MAX_BOIDS];

	Reset();
}

BoidLookUpTable::~BoidLookUpTable()
{
	delete[] BoidLookUpIndices;
	delete[] Boids;
}

unsigned short BoidLookUpTable::AddBoid(BOID_HANDLE Boid)
{
	unsigned short ObjectIndex = BoidHandleExtractIndex(Boid);
	if (ObjectIndex != INVALID_BOID_HANDLE_INDEX)
	{
		if (BoidLookUpIndices[ObjectIndex] != INVALID_BOID_HANDLE_INDEX)
		{
			//WARNING HERE
		}
		else
		{
			Boids[BoidTableSize] = Boid;
			BoidLookUpIndices[ObjectIndex] = BoidTableSize++;
		}

		return BoidLookUpIndices[ObjectIndex];
	}

	return INVALID_BOID_HANDLE_INDEX;
}

unsigned short BoidLookUpTable::RemoveBoid(BOID_HANDLE Boid)
{
	unsigned short ObjectIndex = BoidHandleExtractIndex(Boid);

	if (ObjectIndex != INVALID_BOID_HANDLE_INDEX)
	{
		auto SwapIndex = BoidLookUpIndices[ObjectIndex];

		if (SwapIndex != INVALID_BOID_HANDLE_INDEX)
		{
			auto LastObject = Boids[BoidTableSize - 1];
			auto LastObjectIndex = BoidHandleExtractIndex(LastObject);

			Boids[SwapIndex] = LastObject;
			BoidLookUpIndices[LastObjectIndex] = SwapIndex;

			BoidLookUpIndices[ObjectIndex] = INVALID_BOID_HANDLE_INDEX;
			BoidTableSize -= 1;

			return SwapIndex;
		}
	}

	return INVALID_BOID_HANDLE_INDEX;
}

void BoidLookUpTable::Reset()
{
	memset(BoidLookUpIndices, UINT8_MAX, (MAX_BOIDS + 1) * sizeof(unsigned short));
	memset(Boids, UINT8_MAX, MAX_BOIDS * sizeof(BOID_HANDLE));

	BoidTableSize = 0;
}

unsigned short BoidLookUpTable::FindBoid(BOID_HANDLE Boid) const
{
	return BoidLookUpIndices[BoidHandleExtractIndex(Boid)];
}

bool BoidLookUpTable::ContainsBoid(BOID_HANDLE Boid) const
{
	return FindBoid(Boid) != INVALID_BOID_HANDLE_INDEX;
}

VolumeLookUpTable::VolumeLookUpTable()
{
	//Add an entry onto the end thats invalid volume index
	VolumeLookUpIndices = new unsigned short[MAX_VOLUMES + 1];
	Volumes = new VOLUME_HANDLE[MAX_VOLUMES];

	Reset();
}

VolumeLookUpTable::~VolumeLookUpTable()
{
	delete[] VolumeLookUpIndices;
	delete[] Volumes;
}

unsigned short VolumeLookUpTable::AddVolume(VOLUME_HANDLE Volume)
{
	unsigned short ObjectIndex = VolumeHandleExtractIndex(Volume);
	if (ObjectIndex != INVALID_VOLUME_HANDLE_INDEX)
	{
		if (VolumeLookUpIndices[ObjectIndex] != INVALID_VOLUME_HANDLE_INDEX)
		{
			//WARNING HERE
		}
		else
		{
			Volumes[VolumeTableSize] = Volume;
			VolumeLookUpIndices[ObjectIndex] = VolumeTableSize++;
		}

		return VolumeLookUpIndices[ObjectIndex];
	}

	return INVALID_VOLUME_HANDLE_INDEX;
}

unsigned short VolumeLookUpTable::RemoveVolume(VOLUME_HANDLE Volume)
{
	unsigned short ObjectIndex = VolumeHandleExtractIndex(Volume);

	if (ObjectIndex != INVALID_VOLUME_HANDLE_INDEX)
	{
		auto SwapIndex = VolumeLookUpIndices[ObjectIndex];

		if (SwapIndex != INVALID_VOLUME_HANDLE_INDEX)
		{
			auto LastObject = Volumes[VolumeTableSize - 1];
			auto LastObjectIndex = VolumeHandleExtractIndex(LastObject);

			Volumes[SwapIndex] = LastObject;
			VolumeLookUpIndices[LastObjectIndex] = SwapIndex;

			VolumeLookUpIndices[ObjectIndex] = INVALID_VOLUME_HANDLE_INDEX;
			VolumeTableSize -= 1;

			return SwapIndex;
		}
	}

	return INVALID_VOLUME_HANDLE_INDEX;
}

void VolumeLookUpTable::Reset()
{
	memset(VolumeLookUpIndices, UINT8_MAX, (MAX_VOLUMES + 1) * sizeof(unsigned short));
	memset(Volumes, UINT8_MAX, MAX_VOLUMES * sizeof(VOLUME_HANDLE));

	VolumeTableSize = 0;
}

unsigned short VolumeLookUpTable::FindVolume(VOLUME_HANDLE Volume) const
{
	return VolumeLookUpIndices[VolumeHandleExtractIndex(Volume)];
}

bool VolumeLookUpTable::ContainsVolume(VOLUME_HANDLE Volume) const
{
	return FindVolume(Volume) != INVALID_VOLUME_HANDLE_INDEX;
}