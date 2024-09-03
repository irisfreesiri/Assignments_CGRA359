// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksVolumeInfoTable.h"

#include "FlocksLookUpTable.h"
#include "FlocksWorld.h"

FlocksVolumeInfoTable::FlocksVolumeInfoTable(AFlocksWorld* InWorld) : FlocksVolumeTable(InWorld)
{

}

FlocksVolumeInfoTable::~FlocksVolumeInfoTable()
{

}

FlocksVolumeInfoTable::FTableData* FlocksVolumeInfoTable::Lock()
{
	TableLock.Lock();
	return Data;
}

void FlocksVolumeInfoTable::Unlock()
{
	TableLock.Unlock();
}

unsigned short FlocksVolumeInfoTable::AddVolume(VOLUME_HANDLE Volume, const FAddVolumeData& AddVolumeData)
{
	unsigned short Index = LookUpTable->AddVolume(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeType = AddVolumeData.VolumeType;
		Data[Index].VolumeShape = AddVolumeData.VolumeShape;
		Data[Index].VolumeUseFalloff = AddVolumeData.VolumeUseFalloff;
		Data[Index].VolumeFalloff = AddVolumeData.VolumeFalloff;
		Data[Index].VolumeInnerExtents = AddVolumeData.VolumeInnerExtents;
		Data[Index].VolumeInnerRadius = AddVolumeData.VolumeInnerRadius;
		Data[Index].VolumeOuterExtents = AddVolumeData.VolumeOuterExtents;
		Data[Index].VolumeOuterRadius = AddVolumeData.VolumeOuterRadius;
		Data[Index].VolumePosition = AddVolumeData.VolumePosition;
		Data[Index].VolumeRotation = AddVolumeData.VolumeRotation;
		Data[Index].VolumeInfluencesGroups = AddVolumeData.VolumeInfluencesGroups;
		Data[Index].VolumeLocalToWorld = FTransform3f(Data[Index].VolumeRotation, Data[Index].VolumePosition).ToMatrixNoScale();
		Data[Index].VolumeWorldToLocal = Data[Index].VolumeLocalToWorld.Inverse();
		Unlock();
	}

	return Index;
}

void FlocksVolumeInfoTable::RemoveVolume(VOLUME_HANDLE Volume)
{
	unsigned short Index = Find(Volume);
	LookUpTable->RemoveVolume(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index] = Data[Size()];
		Unlock();
	}
}

void FlocksVolumeInfoTable::SetVolumeType(VOLUME_HANDLE Volume, const FlocksVolumeTypes Type)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeType = static_cast<unsigned int>(Type);
		Unlock();
	}
}

void FlocksVolumeInfoTable::SetVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeInfluencesGroups = (unsigned int)Groups;
		Unlock();
	}
}

void FlocksVolumeInfoTable::AddVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeInfluencesGroups |= (unsigned int)Groups;
		Unlock();
	}
}

void FlocksVolumeInfoTable::RemoveVolumeInfluenceGroups(VOLUME_HANDLE Volume, int32 Groups)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeInfluencesGroups &= ~((unsigned int)Groups);
		Unlock();
	}
}

void FlocksVolumeInfoTable::SetVolumeLocation(VOLUME_HANDLE Volume, const FVector3f& Location)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumePosition = Location;
		Data[Index].VolumeLocalToWorld = FTransform3f(Data[Index].VolumeRotation, Data[Index].VolumePosition).ToMatrixNoScale();
		Data[Index].VolumeWorldToLocal = Data[Index].VolumeLocalToWorld.Inverse();
		Unlock();
	}
}

void FlocksVolumeInfoTable::SetVolumeRotation(VOLUME_HANDLE Volume, const FRotator3f& Rotation)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumeRotation = Rotation;
		Data[Index].VolumeLocalToWorld = FTransform3f(Data[Index].VolumeRotation, Data[Index].VolumePosition).ToMatrixNoScale();
		Data[Index].VolumeWorldToLocal = Data[Index].VolumeLocalToWorld.Inverse();
		Unlock();
	}
}

void FlocksVolumeInfoTable::SetVolumeLocationAndRotation(VOLUME_HANDLE Volume, const FVector3f& Location, const FRotator3f& Rotation)
{
	unsigned short Index = Find(Volume);

	if (Index != INVALID_VOLUME_HANDLE_INDEX)
	{
		Lock();
		Data[Index].VolumePosition = Location;
		Data[Index].VolumeRotation = Rotation;
		Data[Index].VolumeLocalToWorld = FTransform3f(Data[Index].VolumeRotation, Data[Index].VolumePosition).ToMatrixNoScale();
		Data[Index].VolumeWorldToLocal = Data[Index].VolumeLocalToWorld.Inverse();
		Unlock();
	}
}

bool FlocksVolumeInfoTable::GetRandomPointInRestrictionVolumes(int32 Group, FVector3f& Point) const
{
	int32 NumRestrictionVolumes = 0;
	int32 RestrictionVolumes[MAX_VOLUMES];

	for (int32 i = 0; i < Size(); ++i)
	{
		if ((Data[i].VolumeInfluencesGroups & (1 << Group)) == 0 || Data[i].VolumeType != 2)
		{
			continue;
		}

		RestrictionVolumes[NumRestrictionVolumes] = i;
		NumRestrictionVolumes++;
	}

	if (NumRestrictionVolumes == 0)
	{
		return false;
	}

	int32 Rand = FMath::RandRange(0, NumRestrictionVolumes - 1);
	int32 VolumeIndex = RestrictionVolumes[Rand];
	switch (Data[VolumeIndex].VolumeShape)
	{
	case 0:
		Point = Data[VolumeIndex].VolumePosition + static_cast<FVector3f>(FMath::VRand()) * FMath::RandRange(0.0f, Data[VolumeIndex].VolumeOuterRadius);
		break;

	case 1:
		Point = Data[VolumeIndex].VolumePosition + static_cast<FVector3f>(FVector(FMath::RandRange(-Data[VolumeIndex].VolumeOuterExtents.X, Data[VolumeIndex].VolumeOuterExtents.X), FMath::RandRange(-Data[VolumeIndex].VolumeOuterExtents.Y, Data[VolumeIndex].VolumeOuterExtents.Y), FMath::RandRange(-Data[VolumeIndex].VolumeOuterExtents.Z, Data[VolumeIndex].VolumeOuterExtents.Z)));
		break;
	}

	return true;
}