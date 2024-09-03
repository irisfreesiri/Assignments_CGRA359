// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "FlocksVolumeTable.h"

struct FLOCKS_API FlocksVolumeInfoTable : public FlocksVolumeTable
{
	struct FTableData
	{
		int32 VolumeType;
		int32 VolumeShape;
		int32 VolumeUseFalloff;
		float VolumeFalloff;
		FVector3f VolumeInnerExtents;
		float VolumeInnerRadius;
		FVector3f VolumeOuterExtents;
		float VolumeOuterRadius;
		FMatrix44f VolumeWorldToLocal;
		FMatrix44f VolumeLocalToWorld;
		FVector3f VolumePosition;
		int32 VolumeInfluencesGroups;
		FRotator3f VolumeRotation;
		float Padding;
	};

	struct FAddVolumeData
	{
		int32 VolumeType;
		int32 VolumeShape;
		int32 VolumeUseFalloff;
		float VolumeFalloff;
		float VolumeInnerRadius;
		float VolumeOuterRadius;
		FVector3f VolumeInnerExtents;
		FVector3f VolumeOuterExtents;
		FVector3f VolumePosition;
		FRotator3f VolumeRotation;
		int32 VolumeInfluencesGroups;
	};

public:
	FlocksVolumeInfoTable(AFlocksWorld* InWorld);
	~FlocksVolumeInfoTable();

	FTableData* Lock();
	void Unlock();

	virtual unsigned short AddVolume(VOLUME_HANDLE Volume, const FAddVolumeData& AddVolumeData);
	virtual void RemoveVolume(VOLUME_HANDLE Volume);

	void SetVolumeType(VOLUME_HANDLE Volume, const FlocksVolumeTypes Type);
	void SetVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups);
	void AddVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups);
	void RemoveVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups);

	void SetVolumeLocation(VOLUME_HANDLE Volume, const FVector3f& Location);
	void SetVolumeRotation(VOLUME_HANDLE Volume, const FRotator3f& Rotation);
	void SetVolumeLocationAndRotation(VOLUME_HANDLE Volume, const FVector3f& Location, const FRotator3f& Rotation);

	bool GetRandomPointInRestrictionVolumes(int32 Group, FVector3f& Point) const;
	
private:
	FCriticalSection TableLock;
	FTableData Data[MAX_VOLUMES];
};