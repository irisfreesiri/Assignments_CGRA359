// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"

class AFlocksWorld;
struct FlocksTableHeader;

struct FLOCKS_API FlocksTable
{
public:
	FlocksTable(AFlocksWorld* InWorld);
	virtual ~FlocksTable();

	virtual unsigned short Size() const { return 0; }

	virtual void Update(float DeltaSeconds);
	virtual void Reset();

public:
	AFlocksWorld* World;
};
