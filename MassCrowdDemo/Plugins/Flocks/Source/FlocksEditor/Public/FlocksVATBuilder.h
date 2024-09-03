// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksEditorUtils.h"

#define FLOCKS_MAX_TEXTURE_SIZE 8192

class UAnimComposite;
class UFlocksAnimationData;
class UTexture2D;
class UAnimSequence;
class UObject;
class USkeletalMesh;
class UStaticMesh;

struct FFlocksBasePose
{
public:
	TArray<FVector3f> Positions;
	TArray<FVector3f> Normals;
	TArray<int32> StaticToSkeletalRemap;
};

struct FlocksVATBuilder
{
public:
	static void CreateVATMeshFile(UObject* Outer, USkeletalMesh* Mesh);
	static void CreateVATAnimFile(UObject* Outer, USkeletalMesh* Mesh, UAnimationAsset* Animation);

private:
	static bool BuildVATMesh(const UObject* WorldContext, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh);
	static bool BuildVATTexture(const UObject* WorldContext, UTexture2D* Texture, int32 Width, int32 Height, TArray<FFloat16Color>& TextureData);
	static bool BuildVATAnimation(const UObject* WorldContext, USkeletalMesh* Mesh, UAnimationAsset* Anim, UTexture2D* PositionTexture, UTexture2D* NormalTexture);
	static bool BuildAnimationData(const UObject* WorldContext, UFlocksAnimationData* Asset, UAnimationAsset* AnimAsset, UTexture2D* PositionTexture, UTexture2D* NormalTexture);

	static void WriteVertexIDsIntoUVs(UStaticMesh* Mesh, const FFlocksBasePose& BasePose);
	static void WriteAnimationIntoColors(const UObject* WorldContext, USkeletalMesh* Mesh, UAnimSequence* Anim, const FFlocksBasePose& BasePose, FFloat16Color* PositionTextureData, FFloat16Color* NormalTextureData);

	static bool GetSequencesFromAnimAsset(UAnimationAsset* AnimAsset, TArray<UAnimSequence*>& OutSequences);
	static bool ShowAssetPathPicker(const FString& DirectorySuggestion, const FString& NameSuggestion, const FText& DescriptionText, FString& OutFullPackageName, FString& OutPackageName);

	static void BuildBasePose(const UObject* WorldContext, USkeletalMesh* Mesh, FFlocksBasePose& Pose);
};
