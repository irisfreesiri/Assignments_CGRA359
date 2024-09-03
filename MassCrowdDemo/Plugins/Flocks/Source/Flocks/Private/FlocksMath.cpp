// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksMath.h"
#include "FlocksWorld.h"
#include "FlocksBoidMap.h"
#include "FlocksDatabaseHeader.h"
#include "FlocksVolumeInfoTable.h"
#include "Utils/IndexArray.h"

#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

FVector3f FlocksMath::Slerp(const FVector3f& Current, const FVector3f& Target, float DeltaTime, float MaxAngle)
{
	float t = (DeltaTime * MaxAngle) / (360.0f);

	// Dot product - the cosine of the angle between 2 vectors.
	float d = FVector3f::DotProduct(Current, Target);

	if (d > 0.99f)
	{
		return Target;
	}

	// Clamp it to be in the range of Acos()
	// This may be unnecessary, but floating point
	// precision can be a fickle mistress.
	d = FMath::Clamp(d, -1.0f, 1.0f);

	// Acos(d) returns the angle between start and end,
	// And multiplying that by percent returns the angle between
	// start and the final result.
	float Delta = FMath::Acos(d);
	float Theta = FMath::Min(1.0f, t);

	FVector3f RelativeVec = (Target - Current * d).GetSafeNormal(); // Orthonormal basis

	FVector3f Slerped = ((Current * FMath::Cos(Theta)) + (RelativeVec * FMath::Sin(Theta)));
	return Slerped;
}

float FlocksMath::InverseLerp(float Value, float MinRange, float MaxRange)
{
	return MinRange == MaxRange ? 0.0f : (Value - MinRange) / (MaxRange - MinRange);
}

FVector3f FlocksMath::RemoveDirectionFromVector(const FVector3f& InVec, const FVector3f& Direction)
{
	FVector3f Ret = InVec;
	float d = FVector3f::DotProduct(Ret, Direction);

	if (d > 0.0f)
	{
		Ret -= Direction * d;
	}

	return Ret;
}

FVector3f FlocksMath::ClampVectorRange(const FVector3f& InVec, const FVector3f& Min, const FVector3f& Max)
{
	FVector3f Ret = InVec;
	Ret.X = FMath::Clamp(InVec.X, Min.X, Max.X);
	Ret.Y = FMath::Clamp(InVec.Y, Min.Y, Max.Y);
	Ret.Z = FMath::Clamp(InVec.Z, Min.Z, Max.Z);
	return Ret;
}

FVector3f FlocksMath::ClampVectorToBox(const FVector3f& InVec, const FMatrix44f& WorldToLocal, const FMatrix44f& LocalToWorld, const FVector3f& Extents)
{
	FVector3f LocalP = WorldToLocal.TransformPosition(InVec);
	LocalP = ClampVectorRange(LocalP, -Extents, Extents);
	return LocalToWorld.TransformPosition(LocalP);
}

bool FlocksMath::BoxContainsPoint(const FVector3f& Point, const FMatrix44f& WorldToLocal, const FVector3f& Extents)
{
	{
		FVector3f LocalP = WorldToLocal.TransformPosition(Point);

		QUICK_SCOPE_CYCLE_COUNTER(Flocks_flocks_table____box_contains_point)
		FVector3f Min = -Extents;
		FVector3f Max = Extents;

		return
			(Min.X - LocalP.X) * (Max.X - LocalP.X) <= 0.0f &&
			(Min.Y - LocalP.Y) * (Max.Y - LocalP.Y) <= 0.0f &&
			(Min.Z - LocalP.Z) * (Max.Z - LocalP.Z) <= 0.0f;
	}
}

bool FlocksMath::SphereContainsPoint(const FVector3f& Point, const FMatrix44f& WorldToLocal, float Radius)
{
	FVector3f LocalP = WorldToLocal.TransformPosition(Point);

	float d = LocalP.Size();
	return d < Radius;
}

float FlocksMath::GetSphericalInfluence(const FVector3f& Position, const FMatrix44f& WorldToLocal, float InnerRadius, float OuterRadius, float Falloff)
{
	{
		FVector3f LocalP = WorldToLocal.TransformPosition(Position);
		QUICK_SCOPE_CYCLE_COUNTER(Flocks_flocks_table____get_sphere_influence)
		float DistanceFromEpicenter = LocalP.Size();

		if (DistanceFromEpicenter >= OuterRadius)
		{
			// outside the radius, no effect
			return 0.0f;
		}

		if ((Falloff == 0.f) || (DistanceFromEpicenter <= InnerRadius))
		{
			// no falloff or inside inner radius means full effect
			return 1.0f;
		}

		// calculate the interpolated scale
		float Influence = 1.f - ((DistanceFromEpicenter - InnerRadius) / (OuterRadius - InnerRadius));
		Influence = FMath::Pow(Influence, Falloff);

		return Influence;
	}
}

float FlocksMath::GetBoxInfluence(const FVector3f& Position, const FMatrix44f& WorldToLocal, const FVector3f& InnerExtents, const FVector3f& OuterExtents, float Falloff)
{
	if (BoxContainsPoint(Position, WorldToLocal, InnerExtents))
	{
		return 1.0f;
	}
	else if (!BoxContainsPoint(Position, WorldToLocal, OuterExtents))
	{
		return 0.0f;
	}
	else
	{
		FVector3f LocalP = WorldToLocal.TransformPosition(Position);
		float Inf = 0.0f;

		float Inf1 = LocalP.X > InnerExtents.X ? InverseLerp(LocalP.X, OuterExtents.X, InnerExtents.X) : 0.0f;
		float Inf2 = LocalP.Y > InnerExtents.Y ? InverseLerp(LocalP.Y, OuterExtents.Y, InnerExtents.Y) : 0.0f;
		float Inf3 = LocalP.Z > InnerExtents.Z ? InverseLerp(LocalP.Z, OuterExtents.Z, InnerExtents.Z) : 0.0f;
		float Inf4 = LocalP.X < -InnerExtents.X ? InverseLerp(LocalP.X, -OuterExtents.X, -InnerExtents.X) : 0.0f;
		float Inf5 = LocalP.Y < -InnerExtents.Y ? InverseLerp(LocalP.Y, -OuterExtents.Y, -InnerExtents.Y) : 0.0f;
		float Inf6 = LocalP.Z < -InnerExtents.Z ? InverseLerp(LocalP.Z, -OuterExtents.Z, -InnerExtents.Z) : 0.0f;

		Inf = FMath::Max(Inf, Inf1);
		Inf = FMath::Max(Inf, Inf2);
		Inf = FMath::Max(Inf, Inf3);
		Inf = FMath::Max(Inf, Inf4);
		Inf = FMath::Max(Inf, Inf5);
		Inf = FMath::Max(Inf, Inf6);

		return FMath::Pow(Inf, Falloff);
	}
}

float FlocksMath::GetInfluence(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume)
{
	switch (Volume.VolumeShape)
	{
	case 0:
		return GetSphericalInfluence(Position, Volume.VolumeWorldToLocal, Volume.VolumeInnerRadius, Volume.VolumeOuterRadius, Volume.VolumeUseFalloff == 1 ? Volume.VolumeFalloff : 0.0f);
		break;

	case 1:
		return GetBoxInfluence(Position, Volume.VolumeWorldToLocal, Volume.VolumeInnerExtents, Volume.VolumeOuterExtents, Volume.VolumeUseFalloff == 1 ? Volume.VolumeFalloff : 0.0f);
		break;
	}

	return 0.0f;
}

FVector3f FlocksMath::GetClosestInnerPoint(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume)
{
	FVector3f LocalP = Volume.VolumeWorldToLocal.TransformPosition(Position);

	switch (Volume.VolumeShape)
	{
	case 0:
		return Volume.VolumeLocalToWorld.TransformPosition(LocalP.GetSafeNormal() * Volume.VolumeInnerRadius);
		break;

	case 1:
		return Volume.VolumeLocalToWorld.TransformPosition(ClampVectorRange(LocalP, -Volume.VolumeInnerExtents, Volume.VolumeInnerExtents));
		break;
	}

	return Position;
}

FVector3f FlocksMath::GetClosestOuterPoint(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume)
{
	FVector3f LocalP = Volume.VolumeWorldToLocal.TransformPosition(Position);

	switch (Volume.VolumeShape)
	{
	case 0:
		return Volume.VolumeLocalToWorld.TransformPosition(LocalP.GetSafeNormal() * Volume.VolumeOuterRadius);
		break;

	case 1:
		return Volume.VolumeLocalToWorld.TransformPosition(ClampVectorRange(LocalP, -Volume.VolumeOuterExtents, Volume.VolumeOuterExtents));
		break;
	}

	return Position;
}

void FlocksMath::GetClosestInnerAndOuterPoints(const FVector3f& Position, const FlocksVolumeInfoTable::FTableData& Volume, FVector3f& OutInner, FVector3f& OutOuter)
{
	OutInner = Position;
	OutOuter = Position;

	FVector3f localP = Volume.VolumeWorldToLocal.TransformPosition(Position);

	switch (Volume.VolumeShape)
	{
	case 0:
		OutInner = Volume.VolumeLocalToWorld.TransformPosition(localP.GetSafeNormal() * Volume.VolumeInnerRadius);
		OutOuter = Volume.VolumeLocalToWorld.TransformPosition(localP.GetSafeNormal() * Volume.VolumeOuterRadius);
		break;

	case 1:
		OutInner = Volume.VolumeLocalToWorld.TransformPosition(ClampVectorRange(localP, -Volume.VolumeInnerExtents, Volume.VolumeInnerExtents));
		OutOuter = Volume.VolumeLocalToWorld.TransformPosition(ClampVectorRange(localP, -Volume.VolumeOuterExtents, Volume.VolumeOuterExtents));
		break;
	}
}

FMatrix FlocksMath::RotateAlign(const FVector3f& Vec1, const FVector3f& Vec2)
{
	FVector3f Axis = FVector3f::CrossProduct(Vec1, Vec2);

	const float CosA = FVector3f::DotProduct(Vec1, Vec2);
	const float k = 1.0f / (1.0f + CosA);

	FMatrix Result = FMatrix::Identity;
	Result.SetColumn(0, FVector((Axis.X * Axis.X * k) + CosA,
	                            (Axis.Y * Axis.X * k) - Axis.Z,
	                            (Axis.Z * Axis.X * k) + Axis.Y));

	Result.SetColumn(1, FVector((Axis.X * Axis.Y * k) + Axis.Z,
	                            (Axis.Y * Axis.Y * k) + CosA,
	                            (Axis.Z * Axis.Y * k) - Axis.X));

	Result.SetColumn(2, FVector((Axis.X * Axis.Z * k) - Axis.Y,
	                            (Axis.Y * Axis.Z * k) + Axis.X,
	                            (Axis.Z * Axis.Z * k) + CosA));

	return Result;
}