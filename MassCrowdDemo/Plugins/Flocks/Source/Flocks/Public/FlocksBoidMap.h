// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTable.h"

struct FLOCKS_API FlocksBoidMap
{
	struct FBoidMapData
	{
		TArray<unsigned int> SortedCellList;
		unsigned int CellOffsetList[TOTAL_CELLS];
		unsigned int CellBoidCount[TOTAL_CELLS];
	};

public:
	FlocksBoidMap(AFlocksWorld* InWorld);
	~FlocksBoidMap();

	FBoidMapData* Lock();
	void Unlock();

	void Update(float DeltaSeconds);
	unsigned int GetFlatCellIndex(FIntVector CellIndex) const;

	float CellSize = 300.0f;
	class AFlocksWorld* World;

private:
	FCriticalSection MapLock;
	FBoidMapData Data;
};