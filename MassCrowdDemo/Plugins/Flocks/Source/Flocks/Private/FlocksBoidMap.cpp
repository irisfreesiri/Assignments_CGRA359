// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksBoidMap.h"
#include "FlocksWorld.h"
#include "FlocksStateTable.h"
#include "FlocksLookUpTable.h"
#include "Kismet/KismetMathLibrary.h"

#include "Utils/IndexArray.h"

FlocksBoidMap::FlocksBoidMap(AFlocksWorld* InWorld)
{
	Data.SortedCellList.SetNum(MAX_BOIDS);
	memset(Data.CellBoidCount, 0, TOTAL_CELLS * sizeof(unsigned int));
	memset(Data.CellOffsetList, UINT32_MAX, TOTAL_CELLS * sizeof(unsigned int));

	World = InWorld;
}

FlocksBoidMap::~FlocksBoidMap()
{
}

FlocksBoidMap::FBoidMapData* FlocksBoidMap::Lock()
{
	MapLock.Lock();
	return &Data;
}

void FlocksBoidMap::Unlock()
{
	MapLock.Unlock();
}

void FlocksBoidMap::Update(float DeltaSeconds)
{
	QUICK_SCOPE_CYCLE_COUNTER(Flocks_boid_map____update);

    FVector3f BoidPositions[MAX_BOIDS];
    FlocksStateTable::FTableData* StateTableData = World->StateTable->Lock();
    ParallelFor(World->StateTable->Size(), [&BoidPositions, StateTableData](int32 Index){
        BoidPositions[Index] = StateTableData[Index].Position;
    });
    World->StateTable->Unlock();
    
	Lock();
	memset(Data.CellBoidCount, 0, sizeof(unsigned int) * TOTAL_CELLS);
	memset(Data.CellOffsetList, UINT32_MAX, sizeof(unsigned int) * TOTAL_CELLS);

	{
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_boid_map____calculate_cells);
		for (unsigned short i = 0; i < World->StateTable->Size(); ++i)
			{
				FVector3f Position = BoidPositions[i];

				FIntVector CellVector = FIntVector((int32)Position.X, (int32)Position.Y, (int32)Position.Z) / World->CellSize;
				unsigned short Cell = GetFlatCellIndex(CellVector);

				Data.SortedCellList[i] = (Cell << 16) | (i << 0);
				Data.CellBoidCount[Cell]++;
			}
	}

	{
		//Here we can abuse the fact that sorting ints is faster than sorting struct. But ideally this sort would be done on the GPU with a Bitonic sort
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_boid_map____sort);
		Data.SortedCellList.Sort();
	}

	{
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_boid_map____generate_cell_offset);
		unsigned int LastCell = UINT32_MAX;
		for (unsigned int i = 0; i < World->StateTable->Size(); ++i)
		{
			unsigned int Cell = (Data.SortedCellList[i] & 0Xffff0000) >> 16;
			if (LastCell != Cell)
			{
				Data.CellOffsetList[Cell] = i;
				LastCell = Cell;
			}
		}
	}

	{
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_boid_map____shuffle_array);
		ParallelFor(TOTAL_CELLS, [this](unsigned short Index)
			{
				unsigned short Offset = Data.CellOffsetList[Index];
				unsigned short Count = Data.CellBoidCount[Index];

				if (Offset != UINT16_MAX)
				{
					while (Count > 0)
					{
						unsigned short Element = Offset + FMath::RandRange(0, (Count - 1));

						unsigned short Temp = Data.SortedCellList[Element];
						Data.SortedCellList[Element] = Data.SortedCellList[Offset + (Count - 1)];
						Data.SortedCellList[Offset + (Count - 1)] = Temp;
						Count--;
					}
				}
			});
	}
    
	Unlock();
}

unsigned int FlocksBoidMap::GetFlatCellIndex(FIntVector CellIndex) const
{
	const int32 p1 = 73856093; // some large primes
	const int32 p2 = 19349663;
	const int32 p3 = 83492791;
	int n = p1 * CellIndex.X ^ p2 * CellIndex.Y ^ p3 * CellIndex.Z;
	n %= TOTAL_CELLS;
	n = FMath::Abs(n);
	return n;
}
