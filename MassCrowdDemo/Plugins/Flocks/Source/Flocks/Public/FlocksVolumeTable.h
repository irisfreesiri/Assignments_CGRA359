// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "FlocksTable.h"

struct VolumeLookUpTable;

struct FLOCKS_API FlocksVolumeTable : public FlocksTable
{
public:
	FlocksVolumeTable(AFlocksWorld* InWorld);
	virtual ~FlocksVolumeTable();

	unsigned short Find(VOLUME_HANDLE Volume) const;
	virtual unsigned short Size() const override;

protected:
	VolumeLookUpTable* LookUpTable;
};
