// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksEditorUtils.h"
#include "FlocksCompat.h"

#include "Animation/SkeletalMeshActor.h"
#include "Misc/EngineVersionComparison.h"
#include "SkeletalRenderPublic.h"
#include "StaticMeshAttributes.h"
#include "MeshDescription.h"
#include "Rendering/SkeletalMeshRenderData.h"
#include "Engine/SkinnedAssetCommon.h"

template <unsigned short NumInfluences>
struct TVertexSkinWeight
{
	TStaticArray<unsigned short, NumInfluences> MeshBoneIndices;
	TStaticArray<unsigned short, NumInfluences> BoneIndices;
	TStaticArray<uint8, NumInfluences>  BoneWeights;
};

void GetSkinWeightsData(const USkeletalMesh& SkeletalMesh, const int32 LODIndex, TArray<TVertexSkinWeight<MAX_TOTAL_INFLUENCES>>& SkinWeights)
{
	// Reset Weights
	SkinWeights.Reset();

	// Get Render Data
	const FSkeletalMeshRenderData* RenderData = SkeletalMesh.GetResourceForRendering();
	check(RenderData);

	if (!RenderData->LODRenderData.IsValidIndex(LODIndex))
	{
		UE_LOG(LogTemp, Warning, TEXT("Invalid LODIndex: %i"), LODIndex)
			return;
	}

	// Get LOD Data
	const FSkeletalMeshLODRenderData& LODRenderData = RenderData->LODRenderData[LODIndex];

	// Get Weights
	const FSkinWeightVertexBuffer* SkinWeightVertexBuffer = LODRenderData.GetSkinWeightVertexBuffer();
	check(SkinWeightVertexBuffer);

	// Get Weights from Buffer.
	// this is size of number of vertices.
	TArray<FSkinWeightInfo> SkinWeightsInfo;
	SkinWeightVertexBuffer->GetSkinWeights(SkinWeightsInfo);

	// Allocated SkinWeightData
	SkinWeights.SetNumUninitialized(SkinWeightsInfo.Num());

	// Loop thru vertices
	for (int32 VertexIndex = 0; VertexIndex < SkinWeightsInfo.Num(); ++VertexIndex)
	{
		// Find Section From Global Vertex Index
		// NOTE: BoneMap is stored by Section.
		int32 OutSectionIndex;
		int32 OutSectionVertexIndex;
		LODRenderData.GetSectionFromVertexIndex(VertexIndex, OutSectionIndex, OutSectionVertexIndex);

		// Get Section for Vertex.
		const FSkelMeshRenderSection& RenderSection = LODRenderData.RenderSections[OutSectionIndex];

		// Get Vertex Weights
		const FSkinWeightInfo& SkinWeightInfo = SkinWeightsInfo[VertexIndex];

		// Store Weights
		for (int32 InfluenceIndex = 0; InfluenceIndex < MAX_TOTAL_INFLUENCES; ++InfluenceIndex)
		{
			const uint8& BoneWeight = SkinWeightInfo.InfluenceWeights[InfluenceIndex];
			const unsigned short& BoneIndex = SkinWeightInfo.InfluenceBones[InfluenceIndex];
			const unsigned short& MeshBoneIndex = RenderSection.BoneMap[BoneIndex];

			SkinWeights[VertexIndex].BoneWeights[InfluenceIndex] = BoneWeight;
			SkinWeights[VertexIndex].BoneIndices[InfluenceIndex] = BoneIndex;
			SkinWeights[VertexIndex].MeshBoneIndices[InfluenceIndex] = MeshBoneIndex;
		}
	}
}

UStaticMesh* FlocksEditorUtils::SkeletalToStaticMesh(const UObject* WorldContext, USkeletalMesh* Mesh, EObjectFlags Flags, UPackage* Package /*= GetTransientPackage()*/)
{
	UStaticMesh* NewMesh = NewObject<UStaticMesh>(Package, NAME_None, Flags);
	SkeletalToStaticMesh(WorldContext, Mesh, NewMesh);

	return NewMesh;
}

void FlocksEditorUtils::SkeletalToStaticMesh(const UObject* WorldContext, USkeletalMesh* Mesh, UStaticMesh* WriteToMesh)
{
	ASkeletalMeshActor* SkeletalActor = WorldContext->GetWorld()->SpawnActor<ASkeletalMeshActor>();

	USkeletalMeshComponent* SkeletalComp = SkeletalActor->GetSkeletalMeshComponent();
	SkeletalComp->SetSkeletalMesh(Mesh);
	SkeletalComp->PlayAnimation(nullptr, false);
	SkeletalComp->RefreshBoneTransforms();


	FRawMesh RawMesh;
	FFlocksRawMeshTracker RawMeshTracker;
	FlocksEditorUtils::SkinnedMeshToRawMeshes(SkeletalComp, 0, SkeletalComp->GetComponentTransform().ToMatrixWithScale(), RawMeshTracker, RawMesh);

	unsigned int MaxInUseTextureCoordinate = 0;
	if (!RawMeshTracker.bValidColors)
	{
		RawMesh.WedgeColors.Empty();
	}

	for (unsigned int TexCoordIndex = 0; TexCoordIndex < MAX_MESH_TEXTURE_COORDS; TexCoordIndex++)
	{
		if (!RawMeshTracker.bValidTexCoords[TexCoordIndex])
		{
			RawMesh.WedgeTexCoords[TexCoordIndex].Empty();
		}
		else
		{
			// Store first texture coordinate index not in use
			MaxInUseTextureCoordinate = FMath::Max(MaxInUseTextureCoordinate, TexCoordIndex);
		}
	}

	WriteToMesh->InitResources();
	WriteToMesh->SetLightingGuid();
	// Determine which texture coordinate map should be used for storing/generating the lightmap UVs
	const unsigned int LightMapIndex = FMath::Min(MaxInUseTextureCoordinate + 1, (unsigned int)MAX_MESH_TEXTURE_COORDS - 1);

	// Add source to new StaticMesh
	if (RawMesh.IsValidOrFixable())
	{
		FStaticMeshSourceModel& SrcModel = WriteToMesh->AddSourceModel();
		SrcModel.ReductionSettings.WeldingThreshold = -1.0f;
		SrcModel.BuildSettings.bRecomputeNormals = false;
		SrcModel.BuildSettings.bRecomputeTangents = false;
		SrcModel.BuildSettings.bRemoveDegenerates = true;
		SrcModel.BuildSettings.bSupportFaceRemap = true;
		SrcModel.BuildSettings.bUseHighPrecisionTangentBasis = true;
		SrcModel.BuildSettings.bUseFullPrecisionUVs = true;
		SrcModel.BuildSettings.bGenerateLightmapUVs = true;
		SrcModel.BuildSettings.SrcLightmapIndex = 0;
		SrcModel.BuildSettings.DstLightmapIndex = LightMapIndex;
		SrcModel.SaveRawMesh(RawMesh);
	}

	// Copy materials to new mesh 
	TArray<FStaticMaterial> StaticMaterials;
	for (FSkeletalMaterial& Material : FlocksCompat::FlocksGetSkeletalMaterials(SkeletalComp))
	{
		StaticMaterials.Add(FStaticMaterial(Material.MaterialInterface));
	}

	FlocksCompat::FlocksSetStaticMaterials(WriteToMesh, StaticMaterials);

	//Set the Imported version before calling the build
	WriteToMesh->ImportVersion = EImportStaticMeshVersion::LastVersion;

	// Set light map coordinate index to match DstLightmapIndex
	FlocksCompat::FlocksSetLightMapCoordinateIndex(WriteToMesh, LightMapIndex);

	// setup section info map
	TArray<int32> UniqueMaterialIndices;
	for (int32 MaterialIndex : RawMesh.FaceMaterialIndices)
	{
		UniqueMaterialIndices.AddUnique(MaterialIndex);
	}

	int32 SectionIndex = 0;
	for (int32 UniqueMaterialIndex : UniqueMaterialIndices)
	{
		WriteToMesh->GetSectionInfoMap().Set(0, SectionIndex, FMeshSectionInfo(UniqueMaterialIndex));
		SectionIndex++;
	}
	WriteToMesh->GetOriginalSectionInfoMap().CopyFrom(WriteToMesh->GetSectionInfoMap());

	// Build mesh from source
	WriteToMesh->Build(false);
	WriteToMesh->PostEditChange();

	SkeletalActor->Destroy();
}

void FlocksEditorUtils::GetSkeletalVertices(const UObject* WorldContext, USkeletalMesh* Mesh, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals)
{
	ASkeletalMeshActor* SkeletalActor = WorldContext->GetWorld()->SpawnActor<ASkeletalMeshActor>();

	USkeletalMeshComponent* SkeletalComp = SkeletalActor->GetSkeletalMeshComponent();
	SkeletalComp->SetSkeletalMesh(Mesh);
	SkeletalComp->PlayAnimation(nullptr, false);
	SkeletalComp->RefreshBoneTransforms();

	OutPositions.Reset();
	OutNormals.Reset();

	GetSkinnedVertices(SkeletalComp, 0, OutPositions, OutNormals);

	SkeletalActor->Destroy();
}

void FlocksEditorUtils::GetStaticVertices(const UObject* WorldContext, UStaticMesh* Mesh, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals)
{
	FMeshDescription* Desc = Mesh->GetMeshDescription(0);

	TVertexAttributesRef<FVector3f> VertexPositions = Desc->VertexAttributes().GetAttributesRef<FVector3f>(MeshAttribute::Vertex::Position);
	TVertexInstanceAttributesRef<FVector3f> VertexNormals = Desc->VertexInstanceAttributes().GetAttributesRef<FVector3f>(MeshAttribute::VertexInstance::Normal);

	OutPositions.SetNum(Desc->Vertices().Num());
	OutNormals.SetNum(Desc->Vertices().Num());

	for (const FVertexID& VertID : Desc->Vertices().GetElementIDs())
	{
		OutPositions[VertID.GetValue()] = VertexPositions[VertID];

		TArrayView<const FVertexInstanceID> VertexInstances = FlocksCompat::FlocksGetVertexInstanceIDs(Desc, VertID);

		for (int32 i = 0; i < VertexInstances.Num(); ++i)
		{
			OutNormals[VertID.GetValue()] += VertexNormals[VertexInstances[i]];
		}

		if (VertexInstances.Num() > 0)
		{
			OutNormals[VertID.GetValue()] /= VertexInstances.Num();
			OutNormals[VertID.GetValue()].Normalize();
		}
	}
}

void FlocksEditorUtils::GetSkinnedVertices(USkeletalMeshComponent* MeshComponent, const int32 LODIndex, TArray<FVector3f>& OutPositions, TArray<FVector3f>& OutNormals)
{
	OutPositions.Reset();
	OutNormals.Reset();

	if (!MeshComponent)
	{
		return;
	}

	// Get SkeletalMesh
	USkeletalMesh* SkeletalMesh = FlocksCompat::FlocksGetSkeletalMesh(MeshComponent);
	if (!SkeletalMesh)
	{
		return;
	}

	// Get Render Data 
	FSkeletalMeshRenderData* RenderData = SkeletalMesh->GetResourceForRendering();
	if (!RenderData->LODRenderData.IsValidIndex(LODIndex))
	{
		return;
	};

	// Get Matrices
	TArray<FMatrix44f> RefToLocals;
	MeshComponent->CacheRefToLocalMatrices(RefToLocals);

	// ---------------------------------------------------------------------------------------------

	// Get Ref-Pose Vertices
	TArray<FVector3f> Vertices;
	TArray<FVector3f> Normals;

	Vertices.Reset();
	Normals.Reset();

	// Get LOD Data
	const FSkeletalMeshLODRenderData& LODRenderData = RenderData->LODRenderData[0];

	// Get Total Num of Vertices (for all sections)
	const int32 NumVertices = LODRenderData.GetNumVertices();
	Vertices.SetNumUninitialized(NumVertices);
	Normals.SetNumUninitialized(NumVertices);

	for (int32 VertexIndex = 0; VertexIndex < NumVertices; ++VertexIndex)
	{
		Vertices[VertexIndex] = LODRenderData.StaticVertexBuffers.PositionVertexBuffer.VertexPosition(VertexIndex);
		Normals[VertexIndex] = LODRenderData.StaticVertexBuffers.StaticMeshVertexBuffer.VertexTangentZ(VertexIndex);
	}

	// TODO: Add Morph Deltas to Vertices.

	// Get Weights
	TArray<TVertexSkinWeight<MAX_TOTAL_INFLUENCES>> SkinWeights;
	GetSkinWeightsData(*SkeletalMesh, LODIndex, SkinWeights);

	OutPositions.SetNumUninitialized(NumVertices);
	OutNormals.SetNumUninitialized(NumVertices);

	for (int32 VertexIndex = 0; VertexIndex < NumVertices; ++VertexIndex)
	{
		const FVector3f& Vertex = Vertices[VertexIndex];
		const FVector3f& Normal = Normals[VertexIndex];
		const TVertexSkinWeight<MAX_TOTAL_INFLUENCES>& Weights = SkinWeights[VertexIndex];

		FVector4f SkinnedVertex(0);
		FVector4f SkinnedNormal(0);

		for (int32 InfluenceIndex = 0; InfluenceIndex < MAX_TOTAL_INFLUENCES; InfluenceIndex++)
		{
			const uint8& BoneWeight = Weights.BoneWeights[InfluenceIndex];
			const unsigned short& MeshBoneIndex = Weights.MeshBoneIndices[InfluenceIndex];

			// Get Matrix
			const FMatrix44f& RefToLocal = RefToLocals[MeshBoneIndex];

			const float Weight = (float)BoneWeight / 255.f;
			SkinnedVertex += RefToLocal.TransformPosition(Vertex) * Weight;
			SkinnedNormal += RefToLocal.TransformVector(Normal) * Weight;
		}

		OutPositions[VertexIndex] = SkinnedVertex;
		OutNormals[VertexIndex] = SkinnedNormal;
	};

};

void FlocksEditorUtils::RemapStaticToSkeletal(const UObject* WorldContext, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh, TArray<int32>& StaticToSkeletal)
{
	TArray<FVector3f> SkeletalVertices;
	TArray<FVector3f> Temp;

	GetSkeletalVertices(WorldContext, SkeletalMesh, SkeletalVertices, Temp);

	TArray<FVector3f> StaticVertices;
	GetStaticVertices(WorldContext, StaticMesh, StaticVertices, Temp);

	StaticToSkeletal.SetNum(StaticVertices.Num());
	for (int32 i = 0; i < StaticVertices.Num(); ++i)
	{
		StaticToSkeletal[i] = MatchClosestVertex(StaticVertices[i], SkeletalVertices);
	}
}

void FlocksEditorUtils::SkinnedMeshToRawMeshes(USkeletalMeshComponent* InSkinnedMeshComponent, int32 LODIndex, const FMatrix& InComponentToWorld, FFlocksRawMeshTracker& OutRawMeshTrackers, FRawMesh& OutRawMesh)
{
	const int32 BaseMaterialIndex = 0;

	// Export all LODs to raw meshes
	const int32 NumLODs = InSkinnedMeshComponent->GetNumLODs();

	const int32 BaseVertexIndex = OutRawMesh.VertexPositions.Num();

	FSkeletalMeshLODInfo& SrcLODInfo = *(FlocksCompat::FlocksGetSkeletalMesh(InSkinnedMeshComponent)->GetLODInfo(LODIndex));

	// Get the CPU skinned verts for this LOD
	TArray<FFinalSkinVertex> FinalVertices;
	InSkinnedMeshComponent->GetCPUSkinnedVertices(FinalVertices, LODIndex);

	FSkeletalMeshRenderData& SkeletalMeshRenderData = InSkinnedMeshComponent->MeshObject->GetSkeletalMeshRenderData();
	FSkeletalMeshLODRenderData& LODData = SkeletalMeshRenderData.LODRenderData[LODIndex];

	// Copy skinned vertex positions
	for (int32 VertIndex = 0; VertIndex < FinalVertices.Num(); ++VertIndex)
	{
		OutRawMesh.VertexPositions.Add((FVector4f)InComponentToWorld.TransformPosition((FVector)FinalVertices[VertIndex].Position));
	}

	const unsigned int NumTexCoords = FMath::Min(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetNumTexCoords(), (unsigned int)MAX_MESH_TEXTURE_COORDS);
	const int32 NumSections = LODData.RenderSections.Num();
	FRawStaticIndexBuffer16or32Interface& IndexBuffer = *LODData.MultiSizeIndexContainer.GetIndexBuffer();

	for (int32 SectionIndex = 0; SectionIndex < NumSections; SectionIndex++)
	{
		const FSkelMeshRenderSection& SkelMeshSection = LODData.RenderSections[SectionIndex];
		if (InSkinnedMeshComponent->IsMaterialSectionShown(SkelMeshSection.MaterialIndex, LODIndex))
		{
			// Build 'wedge' info
			const int32 NumWedges = SkelMeshSection.NumTriangles * 3;
			for (int32 WedgeIndex = 0; WedgeIndex < NumWedges; WedgeIndex++)
			{
				const int32 VertexIndexForWedge = IndexBuffer.Get(SkelMeshSection.BaseIndex + WedgeIndex);

				OutRawMesh.WedgeIndices.Add(BaseVertexIndex + VertexIndexForWedge);

				const FFinalSkinVertex& SkinnedVertex = FinalVertices[VertexIndexForWedge];
				const FVector TangentX = InComponentToWorld.TransformVector(SkinnedVertex.TangentX.ToFVector());
				const FVector TangentZ = InComponentToWorld.TransformVector(SkinnedVertex.TangentZ.ToFVector());
				const FVector4 UnpackedTangentZ = SkinnedVertex.TangentZ.ToFVector4();
				const FVector TangentY = (TangentZ ^ TangentX).GetSafeNormal() * UnpackedTangentZ.W;

				OutRawMesh.WedgeTangentX.Add((FVector3f)TangentX);
				OutRawMesh.WedgeTangentY.Add((FVector3f)TangentY);
				OutRawMesh.WedgeTangentZ.Add((FVector3f)TangentZ);

				for (unsigned int TexCoordIndex = 0; TexCoordIndex < MAX_MESH_TEXTURE_COORDS; TexCoordIndex++)
				{
					if (TexCoordIndex >= NumTexCoords)
					{
						OutRawMesh.WedgeTexCoords[TexCoordIndex].AddDefaulted();
					}
					else
					{
						OutRawMesh.WedgeTexCoords[TexCoordIndex].Add(LODData.StaticVertexBuffers.StaticMeshVertexBuffer.GetVertexUV(VertexIndexForWedge, TexCoordIndex));
						OutRawMeshTrackers.bValidTexCoords[TexCoordIndex] = true;
					}
				}

				if (LODData.StaticVertexBuffers.ColorVertexBuffer.IsInitialized())
				{
					OutRawMesh.WedgeColors.Add(LODData.StaticVertexBuffers.ColorVertexBuffer.VertexColor(VertexIndexForWedge));
					OutRawMeshTrackers.bValidColors = true;
				}
				else
				{
					OutRawMesh.WedgeColors.Add(FColor::White);
				}
			}

			int32 MaterialIndex = SkelMeshSection.MaterialIndex;
			// use the remapping of material indices if there is a valid value
			if (SrcLODInfo.LODMaterialMap.IsValidIndex(SectionIndex) && SrcLODInfo.LODMaterialMap[SectionIndex] != INDEX_NONE)
			{
				MaterialIndex = FMath::Clamp<int32>(SrcLODInfo.LODMaterialMap[SectionIndex], 0, FlocksCompat::FlocksGetSkeletalMaterials(InSkinnedMeshComponent).Num());
			}

			// copy face info
			for (unsigned int TriIndex = 0; TriIndex < SkelMeshSection.NumTriangles; TriIndex++)
			{
				OutRawMesh.FaceMaterialIndices.Add(BaseMaterialIndex + MaterialIndex);
				OutRawMesh.FaceSmoothingMasks.Add(0); // Assume this is ignored as bRecomputeNormals is false
			}
		}
	}
}

int32 FlocksEditorUtils::MatchClosestVertex(const FVector3f& Input, const TArray<FVector3f>& Vertices)
{
	float Dist = FLT_MAX;
	int32 Best = 0;

	for (int32 i = 0; i < Vertices.Num(); ++i)
	{
		float NewDist = FVector3f::Dist(Input, Vertices[i]);

		if (NewDist < Dist)
		{
			Dist = NewDist;
			Best = i;
		}
	}

	return Best;
}
