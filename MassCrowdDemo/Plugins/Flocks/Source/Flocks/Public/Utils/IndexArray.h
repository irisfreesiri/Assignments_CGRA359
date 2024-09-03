// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "GenericPlatform/GenericPlatform.h"

struct IndexArray
{
	IndexArray(unsigned int MaxSize);
	virtual ~IndexArray();

	unsigned short Add();
	void Remove(unsigned short Index);

	void Reset();
	bool IsFull() const;
	
public:
	unsigned int ArrayMax = 0;
	unsigned int ArrayUsed = 0;
	unsigned short ArrayNext = 0;
	unsigned short* NextFree = 0;
};
