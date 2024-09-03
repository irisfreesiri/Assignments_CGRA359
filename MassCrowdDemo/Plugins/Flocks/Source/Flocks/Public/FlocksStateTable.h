// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksBoidTable.h"

struct FLOCKS_API FlocksStateTable : public FlocksBoidTable
{
	struct FTableData
	{
		FVector3f Position;
		float Scale;
		FVector3f Heading;
		float Turning;
		float Speed;
		int32 Group;
		int32 MeshIndex;
		float Health;
		float MaxHealth;
		// 0th bit set if Goaling - 1st bit set if Fleeing
		int32 Action;
		bool bIsPendingDelete;
		int32 NumVolumesAffecting;
		int32 VolumesAffectingIndices[MAX_VOLUMES];
	};

	struct FAddBoidData
	{
		FVector3f Position;
		float Scale;
		FVector3f Heading;
		float Turning;
		float Speed;
		int32 Group;
		int32 MeshIndex;
		float MaxHealth;
	};

public:
	FlocksStateTable(AFlocksWorld* InWorld);
	~FlocksStateTable();

	FTableData* Lock();
	void Unlock();

	virtual TArray<unsigned short> AddBoid(int32 Amount, BOID_HANDLE* Handles, const FAddBoidData* InData);
	virtual void RemoveBoid(int32 Amount, BOID_HANDLE* Boid);

private:
	FCriticalSection TableLock;
	FTableData Data[MAX_BOIDS];
};