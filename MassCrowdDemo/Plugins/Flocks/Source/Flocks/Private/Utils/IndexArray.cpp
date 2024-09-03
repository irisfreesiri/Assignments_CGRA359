// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "Utils/IndexArray.h"

IndexArray::IndexArray(unsigned int MaxSize) :
	ArrayMax(MaxSize)
{
	NextFree = new unsigned short[MaxSize];
	Reset();
}

IndexArray::~IndexArray()
{
	delete[] NextFree;
}

unsigned short IndexArray::Add()
{
	if (ArrayUsed < ArrayMax)
	{
		auto result = ArrayNext;
		ArrayNext = NextFree[result];
		ArrayUsed += 1;
		
		return result;
	}
	
	return 0xffff;
}

void IndexArray::Remove(unsigned short Index)
{
	if (Index < ArrayMax)
	{
		NextFree[Index] = ArrayNext;
		ArrayNext = Index;
		ArrayUsed -= 1;
	}
}

bool IndexArray::IsFull() const
{
	return ArrayUsed >= ArrayMax;
}


void IndexArray::Reset()
{
	for (unsigned int i = 0; i < ArrayMax; ++i)
		NextFree[i] = i + 1;
	
	ArrayNext = 0;
	ArrayUsed = 0;
}
