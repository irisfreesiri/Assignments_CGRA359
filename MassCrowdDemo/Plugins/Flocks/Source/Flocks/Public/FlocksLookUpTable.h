// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"

struct IndexArray;

struct FLOCKS_API BoidLookUpTable
{
public:
	BoidLookUpTable();
	~BoidLookUpTable();

	void Reset();

	unsigned short AddBoid(BOID_HANDLE Boid);
	unsigned short RemoveBoid(BOID_HANDLE Boid);

	//Converts sparse index into packed index. Use when indexing a table array instead of using the index.
	unsigned short FindBoid(BOID_HANDLE Boid) const;
	bool ContainsBoid(BOID_HANDLE Boid) const;

public:
	BOID_HANDLE* Boids; //packed
	unsigned short* BoidLookUpIndices; //sparse
	unsigned int BoidTableSize = 0;
};

struct FLOCKS_API VolumeLookUpTable
{
public:
	VolumeLookUpTable();
	~VolumeLookUpTable();

	void Reset();
	
	unsigned short AddVolume(VOLUME_HANDLE Volume);
	unsigned short RemoveVolume(VOLUME_HANDLE Volume);

	unsigned short FindVolume(VOLUME_HANDLE Volume) const;
	bool ContainsVolume(VOLUME_HANDLE Volume) const;

public:
	VOLUME_HANDLE* Volumes; //packed
	unsigned short* VolumeLookUpIndices; //sparse
	unsigned int VolumeTableSize = 0;
};