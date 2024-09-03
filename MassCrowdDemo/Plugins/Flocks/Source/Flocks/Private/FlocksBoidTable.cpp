// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksBoidTable.h"
#include "FlocksWorld.h"
#include "FlocksDatabaseHeader.h"
#include "Utils/IndexArray.h"
#include "FlocksLookUpTable.h"

FlocksBoidTable::FlocksBoidTable(AFlocksWorld* InWorld) : FlocksTable(InWorld)
{
	LookUpTable = new BoidLookUpTable();
}

FlocksBoidTable::~FlocksBoidTable()
{
	delete LookUpTable;
}

unsigned short FlocksBoidTable::Size() const
{
	return LookUpTable->BoidTableSize;
}

unsigned short FlocksBoidTable::Find(BOID_HANDLE Boid) const
{
	return LookUpTable->FindBoid(Boid);
}

BOID_HANDLE FlocksBoidTable::Get(unsigned short Index) const
{
	return LookUpTable->Boids[Index];
}
