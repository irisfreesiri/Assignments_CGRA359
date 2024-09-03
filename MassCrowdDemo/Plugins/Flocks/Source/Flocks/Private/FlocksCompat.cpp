// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksCompat.h"
#include "Misc/EngineVersionComparison.h"
#include "Engine/StaticMesh.h"
#include "Engine/SkeletalMesh.h"
#include "Components/SkeletalMeshComponent.h"
#include "MeshDescription.h"

USkeletalMesh* FlocksCompat::FlocksGetSkeletalMesh(const USkeletalMeshComponent* SkeletalComp)
{
#if UE_VERSION_OLDER_THAN(5, 1, 0)
	return SkeletalComp->SkeletalMesh;
#else
	return SkeletalComp->GetSkeletalMeshAsset();
#endif
}

TArray<FSkeletalMaterial> FlocksCompat::FlocksGetSkeletalMaterials(const USkeletalMeshComponent* SkeletalComp)
{
#if UE_VERSION_OLDER_THAN(4, 27, 0)
	return FlocksGetSkeletalMesh(SkeletalComp)->Materials;
#else
	return FlocksGetSkeletalMesh(SkeletalComp)->GetMaterials();
#endif
}

void FlocksCompat::FlocksSetStaticMaterials(UStaticMesh* Mesh, const TArray<FStaticMaterial>& StaticMaterials)
{
#if UE_VERSION_OLDER_THAN(4, 27, 0)
	Mesh->StaticMaterials = StaticMaterials;
#else
	Mesh->SetStaticMaterials(StaticMaterials);
#endif
}

void FlocksCompat::FlocksSetLightMapCoordinateIndex(UStaticMesh* Mesh, unsigned int LightMapCoordinateIndex)
{
#if UE_VERSION_OLDER_THAN(4, 27, 0)
	Mesh->LightMapCoordinateIndex = LightMapCoordinateIndex;
#else
	Mesh->SetLightMapCoordinateIndex(LightMapCoordinateIndex);
#endif
}

TArrayView<const FVertexInstanceID> FlocksCompat::FlocksGetVertexInstanceIDs(const FMeshDescription* MeshDescription, const FVertexID& VertexID)
{
#if UE_VERSION_OLDER_THAN(5, 0, 0)
	return MeshDescription->GetVertexVertexInstances(VertexID);
#else
	return MeshDescription->GetVertexVertexInstanceIDs(VertexID);
#endif
}