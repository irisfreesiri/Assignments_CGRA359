// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "GenericPlatform/GenericPlatform.h"
#include "Engine/SkinnedAssetCommon.h"

struct FVertexID;
struct FVertexInstanceID;
struct FStaticMaterial;
struct FSkeletalMaterial;
struct FMeshDescription;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMesh;

struct FLOCKS_API FlocksCompat
{
	static USkeletalMesh* FlocksGetSkeletalMesh(const USkeletalMeshComponent* SkeletalComp);
	static TArray<FSkeletalMaterial> FlocksGetSkeletalMaterials(const USkeletalMeshComponent* SkeletalComp);
	static TArrayView<const FVertexInstanceID> FlocksGetVertexInstanceIDs(const FMeshDescription* MeshDescription, const FVertexID& VertexID);

	static void FlocksSetStaticMaterials(UStaticMesh* Mesh, const TArray<FStaticMaterial>& StaticMaterials);
	static void FlocksSetLightMapCoordinateIndex(UStaticMesh* Mesh, unsigned int LightMapCoordinateIndex);
};
