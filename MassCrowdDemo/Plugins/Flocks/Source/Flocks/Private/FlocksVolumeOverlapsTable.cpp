// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksVolumeOverlapsTable.h"

#include "FlocksLookUpTable.h"
#include "FlocksWorld.h"

FlocksVolumeOverlapsTable::FlocksVolumeOverlapsTable(AFlocksWorld* InWorld) : FlocksVolumeTable(InWorld)
{

}

FlocksVolumeOverlapsTable::~FlocksVolumeOverlapsTable()
{

}

FlocksVolumeOverlapsTable::FTableData* FlocksVolumeOverlapsTable::Lock()
{
	TableLock.Lock();
	return Data;
}

void FlocksVolumeOverlapsTable::Unlock()
{
	TableLock.Unlock();
}

unsigned short FlocksVolumeOverlapsTable::AddVolume(VOLUME_HANDLE Volume, const FAddVolumeData& AddVolumeData)
{
	unsigned short Index = LookUpTable->AddVolume(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].NumBoidsInVolume = 0;
		Unlock();
	}

	return Index;
}

void FlocksVolumeOverlapsTable::RemoveVolume(VOLUME_HANDLE Volume)
{
	unsigned short Index = Find(Volume);
	LookUpTable->RemoveVolume(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index] = Data[Size()];
		Unlock();
	}
}

void FlocksVolumeOverlapsTable::RecalculateOverlaps()
{
	FlocksStateTable::FTableData* StateTableDataCopy = new FlocksStateTable::FTableData[MAX_BOIDS];

	FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
	memcpy(StateTableDataCopy, StateTableData, sizeof(FlocksStateTable::FTableData) * MAX_BOIDS);
	World->StateTable->Unlock();

	FlocksVolumeOverlapsTable::FTableData* VolumeOverlapsData = Lock();

	FThreadSafeCounter Counters[MAX_VOLUMES];
	ParallelFor(World->StateTable->Size(), [this, &Counters, StateTableDataCopy, &VolumeOverlapsData](int32 Index)
		{
			BOID_HANDLE Boid = World->StateTable->Find(Index);
			int32 NumVolumes = StateTableDataCopy[Index].NumVolumesAffecting;

			for (int32 i = 0; i < NumVolumes; ++i)
			{
				int32 VolumeIndex = StateTableDataCopy[Index].VolumesAffectingIndices[i];
				VolumeOverlapsData[VolumeIndex].BoidsInVolume[Counters[VolumeIndex].GetValue()] = Boid;

				Counters[VolumeIndex].Increment();
			}
		});

	for (int32 i = 0; i < MAX_VOLUMES; ++i)
	{
		VolumeOverlapsData[i].NumBoidsInVolume = Counters[i].GetValue();
	}

	Unlock();
	delete[] StateTableDataCopy;
}
