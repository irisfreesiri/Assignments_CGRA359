// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksVolumeInfoTable.h"

struct FLOCKS_API FlocksMath
{
	struct FInfluenceQueryResult
	{
		FVector3f ClosestInnerPoint;
		FVector3f ClosestOuterPoint;
		FVector3f InvalidHeading;
		int32 VolumeIndex;
	};

	static float InverseLerp(float Value, float MinRange, float MaxRange);
	static FVector3f Slerp(const FVector3f& Current, const FVector3f& Target, float DeltaTime, float MaxAngle);

	static FMatrix RotateAlign(const FVector3f& Vec1, const FVector3f& Vec2);
	static FVector3f RemoveDirectionFromVector(const FVector3f& InVec, const FVector3f& Direction);
	static FVector3f ClampVectorRange(const FVector3f& InVec, const FVector3f& Min, const FVector3f& Max);
	static FVector3f ClampVectorToBox(const FVector3f& InVec, const FMatrix44f& WorldToLocal, const FMatrix44f& LocalToWorld, const FVector3f& Extents);

	static bool BoxContainsPoint(const FVector3f& Point, const FMatrix44f& WorldToLocal, const FVector3f& Extents);
	static bool SphereContainsPoint(const FVector3f& Point, const FMatrix44f& WorldToLocal, float Radius);

	static float GetInfluence(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume);
	static float GetSphericalInfluence(const FVector3f& Position, const FMatrix44f& WorldToLocal, float InnerRadius, float OuterRadius, float Falloff);
	static float GetBoxInfluence(const FVector3f& Position, const FMatrix44f& WorldToLocal, const FVector3f& InnerExtents, const FVector3f& OuterExtents, float Falloff);

	static FVector3f GetClosestInnerPoint(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume);
	static FVector3f GetClosestOuterPoint(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume);
	static void GetClosestInnerAndOuterPoints(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume, FVector3f& OutInner, FVector3f& OutOuter);
};