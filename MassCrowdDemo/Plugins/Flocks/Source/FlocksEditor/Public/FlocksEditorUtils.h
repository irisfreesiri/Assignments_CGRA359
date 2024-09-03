// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "RawMesh.h"
#include "Misc/EngineVersionComparison.h"

#if UE_VERSION_OLDER_THAN(5, 0, 0)
typedef FVector FVector3f;
typedef FVector4 FVector4f;
typedef FRotator FRotator3f;
typedef FMatrix FMatrix44f;
typedef FTransform FTransform3f;
#endif

class USkeletalMesh;
class UStaticMesh;
class USkinnedMeshComponent;

struct FFlocksRawMeshTracker
{
	FFlocksRawMeshTracker()
		: bValidColors(false)
	{
		FMemory::Memset(bValidTexCoords, 0);
	}

	bool bValidTexCoords[MAX_MESH_TEXTURE_COORDS];
	bool bValidColors;
};

struct FlocksEditorUtils
{
public:
	static UStaticMesh* SkeletalToStaticMesh(const UObject* WorldContext, USkeletalMesh* Mesh, EObjectFlags Flags, UPackage* Package = GetTransientPackage());
	static void SkeletalToStaticMesh(const UObject* WorldContext, USkeletalMesh* Mesh, UStaticMesh* WriteToMesh);
	static void GetSkinnedVertices(USkeletalMeshComponent* MeshComp, const int32 LODIndex, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals);

	static void GetSkeletalVertices(const UObject* WorldContext, USkeletalMesh* Mesh, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals);
	static void GetStaticVertices(const UObject* WorldContext, UStaticMesh* Mesh, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals);

	static void RemapStaticToSkeletal(const UObject* WorldContext, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh, TArray<int32>& SkeletalToStatic);
	static void SkinnedMeshToRawMeshes(USkeletalMeshComponent* InSkinnedMeshComponent, int32 LODIndex, const FMatrix& InComponentToWorld, FFlocksRawMeshTracker& OutRawMeshTrackers, FRawMesh& OutRawMesh);

private:
	static int32 MatchClosestVertex(const FVector3f& Input, const TArray<FVector3f>& Vertices);
};
