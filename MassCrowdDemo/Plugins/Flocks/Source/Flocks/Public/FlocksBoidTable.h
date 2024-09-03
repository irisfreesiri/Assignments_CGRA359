// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksLookUpTable.h"
#include "FlocksTypes.h"
#include "FlocksTable.h"

struct FLOCKS_API FlocksBoidTable : public FlocksTable
{
public:
	FlocksBoidTable(AFlocksWorld* InWorld);
	virtual ~FlocksBoidTable();

	unsigned short Find(BOID_HANDLE Boid) const;
	BOID_HANDLE Get(unsigned short Index) const;
	virtual unsigned short Size() const override;

protected:
	BoidLookUpTable* LookUpTable;
};
