// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksVATBuilder.h"
#include "FlocksEditorUtils.h"
#include "FlocksTypes.h"

// Asset Registry
#include "AssetRegistry/AssetRegistryModule.h"
#include "PackageTools.h"
#include "ObjectTools.h"
#include "AssetToolsModule.h"

// Notifications
#include "Dialogs/DlgPickAssetPath.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Framework/Notifications/NotificationManager.h"

// Animation/Conversion
#include "MeshDescription.h"
#include "Animation/SkeletalMeshActor.h"
#include "Animation/AnimComposite.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "SkeletalRenderPublic.h"

#define LOCTEXT_NAMESPACE "FFlocksEditorModule"

inline int32 FlocksGetNumAnimationFrames(UAnimSequence* Anim)
{
#if UE_VERSION_OLDER_THAN(5, 0, 0)
	return Anim->GetNumberOfFrames();
#else
	return Anim->GetNumberOfSampledKeys();
#endif
}

void FlocksVATBuilder::CreateVATMeshFile(UObject* Outer, USkeletalMesh* Mesh)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FString VATMeshPackageDir;
	FString VATMeshName;

	if (!ShowAssetPathPicker(FString(TEXT("/Game/Animation/")), FString(TEXT("VATMesh")), LOCTEXT("CreateVATMeshDesc", "Choose the VAT Mesh Output Location"), VATMeshPackageDir, VATMeshName))
	{
		return;
	}

	if (UPackageTools::LoadPackage(*(VATMeshPackageDir + VATMeshName)) != nullptr)
	{
		EAppReturnType::Type Type = FMessageDialog::Open(EAppMsgType::YesNo, FText::Format(LOCTEXT("AssetAlreadyExists", "Asset with that name {0} already exists, Would you like to override the asset?"), FText::FromString(VATMeshName)));

		if (Type == EAppReturnType::No)
			return;
	}

	UPackage* MeshPackage = CreatePackage(*(VATMeshPackageDir + VATMeshName));

	UStaticMesh* VATMesh = NewObject<UStaticMesh>(MeshPackage, *VATMeshName, RF_Public | RF_Standalone);
	bool bSuccess = BuildVATMesh(Outer, VATMesh, Mesh);

	if (!bSuccess)
	{
		TArray<FAssetData> AssetDataToDelete;
		AssetRegistryModule.Get().GetAssetsByPackageName(*(VATMeshPackageDir + VATMeshName), AssetDataToDelete);
		ObjectTools::DeleteAssets(AssetDataToDelete, false);
		return;
	}

	// Notify asset registry of new asset
	FAssetRegistryModule::AssetCreated(VATMesh);

	VATMesh->MarkPackageDirty();

	// Display notification so users can quickly access the mesh
	if (GIsEditor)
	{
		FNotificationInfo InfoSM(FText::Format(LOCTEXT("StaticMeshExported", "Successfully Created VAT Static Mesh"), FText::FromString(VATMesh->GetName())));
		InfoSM.ExpireDuration = 8.0f;
		InfoSM.bUseLargeFont = false;
		InfoSM.Hyperlink = FSimpleDelegate::CreateLambda([=]() { GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAssets(TArray<UObject*>({ VATMesh })); });
		InfoSM.HyperlinkText = FText::Format(LOCTEXT("OpenNewVATAnimationHyperlink", "Open {0}"), FText::FromString(VATMesh->GetName()));

		TSharedPtr<SNotificationItem> NotificationSM = FSlateNotificationManager::Get().AddNotification(InfoSM);

		if (NotificationSM.IsValid())
		{
			NotificationSM->SetCompletionState(SNotificationItem::CS_Success);
		}
	}
}

void FlocksVATBuilder::CreateVATAnimFile(UObject* Outer, USkeletalMesh* Mesh, UAnimationAsset* Anim)
{
	FAssetRegistryModule& AssetRegistryModule = FModuleManager::LoadModuleChecked<FAssetRegistryModule>("AssetRegistry");
	FString VATAnimPackageDir;
	FString VATAnimName;

	if (!ShowAssetPathPicker(FString(TEXT("/Game/Animation/")), FString(TEXT("VATAnimation")), LOCTEXT("CreateVATAnimDesc", "Choose the VAT Animation Output Location"), VATAnimPackageDir, VATAnimName))
	{
		return;
	}

	FString PositionTextureName = "T_" + VATAnimName + "_Pos";
	FString NormalTextureName = "T_" + VATAnimName + "_Nor";
	FString AnimationDataName = "DA_" + VATAnimName + "_AnimData";

	if (UPackageTools::LoadPackage(*(VATAnimPackageDir + PositionTextureName)) != nullptr ||
		UPackageTools::LoadPackage(*(VATAnimPackageDir + NormalTextureName)) != nullptr ||
		UPackageTools::LoadPackage(*(VATAnimPackageDir + AnimationDataName)) != nullptr)
	{
		EAppReturnType::Type Type = FMessageDialog::Open(EAppMsgType::YesNo, FText::Format(LOCTEXT("AssetAlreadyExists", "Asset with that name {0} already exists, Would you like to override the asset?"), FText::FromString(VATAnimName)));

		if (Type == EAppReturnType::No)
			return;
	}

	UPackage* PositionTexturePackage = CreatePackage(*(VATAnimPackageDir + PositionTextureName));
	UPackage* NormalTexturePackage = CreatePackage(*(VATAnimPackageDir + NormalTextureName));
	UPackage* AnimationDataPackage = CreatePackage(*(VATAnimPackageDir + AnimationDataName));

	UTexture2D* PositionTexture = NewObject<UTexture2D>(PositionTexturePackage, *PositionTextureName, RF_Public | RF_Standalone);
	UTexture2D* NormalTexture = NewObject<UTexture2D>(NormalTexturePackage, *NormalTextureName, RF_Public | RF_Standalone);
	UFlocksAnimationData* AnimData = NewObject<UFlocksAnimationData>(AnimationDataPackage, *AnimationDataName, RF_Public | RF_Standalone);

	bool bSuccess = BuildVATAnimation(Outer, Mesh, Anim, PositionTexture, NormalTexture);
	bSuccess &= BuildAnimationData(Outer, AnimData, Anim, PositionTexture, NormalTexture);

	if (!bSuccess)
	{
		TArray<FAssetData> AssetDataToDelete;

		AssetRegistryModule.Get().GetAssetsByPackageName(*(VATAnimPackageDir + PositionTextureName), AssetDataToDelete);
		AssetRegistryModule.Get().GetAssetsByPackageName(*(VATAnimPackageDir + NormalTextureName), AssetDataToDelete);
		AssetRegistryModule.Get().GetAssetsByPackageName(*(VATAnimPackageDir + AnimationDataName), AssetDataToDelete);
		ObjectTools::DeleteAssets(AssetDataToDelete, false);
		return;
	}

	// Notify asset registry of new asset
	FAssetRegistryModule::AssetCreated(PositionTexture);
	FAssetRegistryModule::AssetCreated(NormalTexture);
	FAssetRegistryModule::AssetCreated(AnimData);

	PositionTexture->MarkPackageDirty();
	NormalTexture->MarkPackageDirty();
	AnimData->MarkPackageDirty();

	// Display notification so users can quickly access the mesh
	if (GIsEditor)
	{
		FNotificationInfo InfoPos(FText::Format(LOCTEXT("PositionTexExported", "Successfully Created VAT Position Texture"), FText::FromString(PositionTexture->GetName())));
		InfoPos.ExpireDuration = 8.0f;
		InfoPos.bUseLargeFont = false;
		InfoPos.Hyperlink = FSimpleDelegate::CreateLambda([=]() { GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAssets(TArray<UObject*>({ PositionTexture })); });
		InfoPos.HyperlinkText = FText::Format(LOCTEXT("OpenNewVATAnimationHyperlink", "Open {0}"), FText::FromString(PositionTexture->GetName()));

		FNotificationInfo InfoNorm(FText::Format(LOCTEXT("NormalTexExported", "Successfully Created VAT Normal Texture"), FText::FromString(NormalTexture->GetName())));
		InfoNorm.ExpireDuration = 8.0f;
		InfoNorm.bUseLargeFont = false;
		InfoNorm.Hyperlink = FSimpleDelegate::CreateLambda([=]() { GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAssets(TArray<UObject*>({ NormalTexture })); });
		InfoNorm.HyperlinkText = FText::Format(LOCTEXT("OpenNewVATAnimationHyperlink", "Open {0}"), FText::FromString(NormalTexture->GetName()));

		FNotificationInfo InfoAnim(FText::Format(LOCTEXT("AnimationDataExported", "Successfully Created VAT Animation Data"), FText::FromString(AnimData->GetName())));
		InfoAnim.ExpireDuration = 8.0f;
		InfoAnim.bUseLargeFont = false;
		InfoAnim.Hyperlink = FSimpleDelegate::CreateLambda([=]() { GEditor->GetEditorSubsystem<UAssetEditorSubsystem>()->OpenEditorForAssets(TArray<UObject*>({ AnimData })); });
		InfoAnim.HyperlinkText = FText::Format(LOCTEXT("OpenNewAnimationDataHyperlink", "Open {0}"), FText::FromString(AnimData->GetName()));

		TSharedPtr<SNotificationItem> NotificationPos = FSlateNotificationManager::Get().AddNotification(InfoPos);
		TSharedPtr<SNotificationItem> NotificationNorm = FSlateNotificationManager::Get().AddNotification(InfoNorm);
		TSharedPtr<SNotificationItem> NotificationAnim = FSlateNotificationManager::Get().AddNotification(InfoAnim);

		if (NotificationPos.IsValid())
		{
			NotificationPos->SetCompletionState(SNotificationItem::CS_Success);
		}

		if (NotificationNorm.IsValid())
		{
			NotificationNorm->SetCompletionState(SNotificationItem::CS_Success);
		}

		if (NotificationAnim.IsValid())
		{
			NotificationAnim->SetCompletionState(SNotificationItem::CS_Success);
		}
	}
}

bool FlocksVATBuilder::BuildVATMesh(const UObject* WorldContext, UStaticMesh* StaticMesh, USkeletalMesh* SkeletalMesh)
{
	FFlocksBasePose BasePose;
	BuildBasePose(WorldContext, SkeletalMesh, BasePose);

	FlocksEditorUtils::SkeletalToStaticMesh(WorldContext, SkeletalMesh, StaticMesh);
	WriteVertexIDsIntoUVs(StaticMesh, BasePose);
	return true;
}

void FlocksVATBuilder::WriteVertexIDsIntoUVs(UStaticMesh* Mesh, const FFlocksBasePose& BasePose)
{
	int32 NumUVs = Mesh->GetNumUVChannels(0);
	int32 UVsToAdd = 4 - NumUVs;

	for (int32 i = 0; i < UVsToAdd; ++i)
	{
		Mesh->AddUVChannel(0);
	}

	TMap<FVertexInstanceID, FVector2D> UVs1;
	TMap<FVertexInstanceID, FVector2D> UVs2;

	FMeshDescription* Desc = Mesh->GetMeshDescription(0);
	for (const FVertexInstanceID& ID : Desc->VertexInstances().GetElementIDs())
	{
		FVertexID VertexId = Desc->GetVertexInstanceVertex(ID);

		FVector2D UV1;
		FVector2D UV2;

		//Pack the vertex ID into the UV channels
		UV2.Y = (VertexId.GetValue() & 0x000000ff) >> 0;
		UV2.X = (VertexId.GetValue() & 0x0000ff00) >> 8;
		UV1.Y = (VertexId.GetValue() & 0x00ff0000) >> 16;
		UV1.X = (VertexId.GetValue() & 0xff000000) >> 24;

		UVs1.Add(ID, UV1);
		UVs2.Add(ID, UV2);
	}

	Mesh->SetUVChannel(0, 2, UVs1);
	Mesh->SetUVChannel(0, 3, UVs2);
}

bool FlocksVATBuilder::BuildVATAnimation(const UObject* WorldContext, USkeletalMesh* Mesh, UAnimationAsset* Anim, UTexture2D* PositionTexture, UTexture2D* NormalTexture)
{
	TArray<UAnimSequence*> Sequences;
	if (!GetSequencesFromAnimAsset(Anim, Sequences))
	{
		FMessageDialog::Open(EAppMsgType::Ok, EAppReturnType::Ok, FText::FromString("No Animation Sequence Found! Close and Try again."));
		return false;
	}

	FFlocksBasePose BasePose;
	BuildBasePose(WorldContext, Mesh, BasePose);

	if (BasePose.Positions.Num() >= FLOCKS_MAX_TEXTURE_SIZE)
	{
		FMessageDialog::Open(EAppMsgType::Ok, EAppReturnType::Ok, FText::FromString(FString::Printf(TEXT("Maximum Vertices supported by VAT is %i"), FLOCKS_MAX_TEXTURE_SIZE)));
		return false;
	}

	int32 NumVerts = BasePose.Positions.Num();
	int32 TotalFrames = 0;

	for (int32 i = 0; i < Sequences.Num(); ++i)
	{
		int32 NumFrames = FlocksGetNumAnimationFrames(Sequences[i]);
		TotalFrames += NumFrames;
	}

	TArray<FFloat16Color> PositionTextureData;
	TArray<FFloat16Color> NormalTextureData;
	PositionTextureData.SetNum(NumVerts * TotalFrames);
	NormalTextureData.SetNum(NumVerts * TotalFrames);

	int32 FrameOffset = 0;

	for (int32 i = 0; i < Sequences.Num(); ++i)
	{
		WriteAnimationIntoColors(WorldContext, Mesh, Sequences[i], BasePose, &PositionTextureData[FrameOffset * NumVerts], &NormalTextureData[FrameOffset * NumVerts]);

		int32 NumFrames = FlocksGetNumAnimationFrames(Sequences[i]);
		FrameOffset += NumFrames;
	}

	BuildVATTexture(WorldContext, PositionTexture, BasePose.Positions.Num(), TotalFrames, PositionTextureData);
	BuildVATTexture(WorldContext, NormalTexture, BasePose.Positions.Num(), TotalFrames, NormalTextureData);

	return true;
}

void FlocksVATBuilder::WriteAnimationIntoColors(const UObject* WorldContext, USkeletalMesh* Mesh, UAnimSequence* Anim, const FFlocksBasePose& BasePose, FFloat16Color* PositionTextureData, FFloat16Color* NormalTextureData)
{
	int32 NumFrames = FlocksGetNumAnimationFrames(Anim);
	int32 NumVerts = BasePose.Positions.Num();

	ASkeletalMeshActor* SkeletalActor = WorldContext->GetWorld()->SpawnActor<ASkeletalMeshActor>();

	USkeletalMeshComponent* SkeletalComp = SkeletalActor->GetSkeletalMeshComponent();
	SkeletalComp->SetSkeletalMesh(Mesh);
	SkeletalComp->PlayAnimation(Anim, false);

	UAnimSingleNodeInstance* SingleNodeInstance = SkeletalComp->GetSingleNodeInstance();

	for (int32 i = 0; i < NumFrames; ++i)
	{
		float Time = Anim->GetTimeAtFrame(i);
		SingleNodeInstance->SetPosition(Time);
		SkeletalComp->RefreshBoneTransforms();

		TArray<FVector3f> SkinnedPositions;
		TArray<FVector3f> SkinnedNormals;
		FlocksEditorUtils::GetSkinnedVertices(SkeletalComp, 0, SkinnedPositions, SkinnedNormals);

		for (int32 j = 0; j < BasePose.Positions.Num(); ++j)
		{
			FVector3f Position = SkinnedPositions[BasePose.StaticToSkeletalRemap[j]];
			FVector3f Normal = SkinnedNormals[BasePose.StaticToSkeletalRemap[j]];

			FVector3f BasePosition = BasePose.Positions[j];
			FVector3f Offset = Position - BasePosition;

			PositionTextureData[i * NumVerts + j].R = Offset.X;
			PositionTextureData[i * NumVerts + j].G = Offset.Y;
			PositionTextureData[i * NumVerts + j].B = Offset.Z;
			PositionTextureData[i * NumVerts + j].A = 1.0f;

			NormalTextureData[i * NumVerts + j].R = Normal.X;
			NormalTextureData[i * NumVerts + j].G = Normal.Y;
			NormalTextureData[i * NumVerts + j].B = Normal.Z;
			NormalTextureData[i * NumVerts + j].A = 1.0f;
		}
	}

	SkeletalActor->Destroy();
}

bool FlocksVATBuilder::BuildVATTexture(const UObject* WorldContext, UTexture2D* Texture, int32 Width, int32 Height, TArray<FFloat16Color>& Data)
{
	Texture->Source.Init(Width, Height, 1, 1, TSF_RGBA16F);

	uint8* TexData = Texture->Source.LockMip(0);
	FMemory::Memcpy(TexData, Data.GetData(), Width * Height * GPixelFormats[PF_FloatRGBA].BlockBytes);
	Texture->Source.UnlockMip(0);

	Texture->CompressionSettings = TextureCompressionSettings::TC_HDR;
	Texture->MipGenSettings = TextureMipGenSettings::TMGS_NoMipmaps;
	Texture->SRGB = false;
	Texture->Filter = TextureFilter::TF_Bilinear;

	Texture->PostEditChange();

	return true;
}

bool FlocksVATBuilder::BuildAnimationData(const UObject* WorldContext, UFlocksAnimationData* Data, UAnimationAsset* AnimAsset, UTexture2D* PositionTexture, UTexture2D* NormalTexture)
{
	TArray<UAnimSequence*> Sequences;
	if (!GetSequencesFromAnimAsset(AnimAsset, Sequences))
	{
		FMessageDialog::Open(EAppMsgType::Ok, EAppReturnType::Ok, FText::FromString("No Animation Sequence Found! Close and Try again."));
		return false;
	}

	Data->PositionTexture = PositionTexture;
	Data->NormalTexture = NormalTexture;
	Data->AnimationMode = Sequences.Num() > 1 ? EFlocksAnimationMode::PlayVarious : EFlocksAnimationMode::LoopSingle;
	Data->bUseRandomStartTime = true;
	Data->DefaultAnimation = Sequences.Num() > 0 ? Sequences[0]->GetFName() : NAME_None;

	int32 TotalFrames = 0;
	for (int32 i = 0; i < Sequences.Num(); ++i)
	{
		int32 StartFrame = TotalFrames;
		int32 NumFrames = FlocksGetNumAnimationFrames(Sequences[i]) - 1;

		FFlocksAnimation Animation;
		Animation.AnimationName = Sequences[i]->GetFName();
		Animation.RateScale = Sequences[i]->RateScale;
		Animation.StartFrame = StartFrame;
		Animation.NumberOfFrames = NumFrames;
		Data->Animations.Add(Animation);

		FFlocksAnimationVariationData Variation;
		Variation.AnimationName = Sequences[i]->GetFName();
		Variation.MinLoops = 1;
		Variation.MinLoops = 1;
		Data->AnimationVariations.Add(Variation);

		TotalFrames += NumFrames + 1;
	}

	return true;
}

bool FlocksVATBuilder::GetSequencesFromAnimAsset(UAnimationAsset* AnimAsset, TArray<UAnimSequence*>& OutSequences)
{
	if (UAnimComposite* Composite = Cast<UAnimComposite>(AnimAsset))
	{
		TArray<UAnimationAsset*> Assets;
		Composite->GetAllAnimationSequencesReferred(Assets, false);

		for (int32 i = 0; i < Assets.Num(); ++i)
		{
			if (UAnimSequence* Sequence = Cast<UAnimSequence>(Assets[i]))
			{
				OutSequences.Add(Sequence);
			}
		}

		return true;
	}
	else if (UAnimSequence* Sequence = Cast<UAnimSequence>(AnimAsset))
	{
		OutSequences.Add(Sequence);
		return true;
	}

	return false;
}

void FlocksVATBuilder::BuildBasePose(const UObject* WorldContext, USkeletalMesh* Mesh, FFlocksBasePose& Pose)
{
	UStaticMesh* StaticMesh = FlocksEditorUtils::SkeletalToStaticMesh(WorldContext, Mesh, EObjectFlags::RF_Transient);

	FlocksEditorUtils::GetStaticVertices(WorldContext, StaticMesh, Pose.Positions, Pose.Normals);
	FlocksEditorUtils::RemapStaticToSkeletal(WorldContext, StaticMesh, Mesh, Pose.StaticToSkeletalRemap);

	StaticMesh->ConditionalBeginDestroy();
}

bool FlocksVATBuilder::ShowAssetPathPicker(const FString& DirectorySuggestion, const FString& NameSuggestion, const FText& DescriptionText, FString& OutPackageDir, FString& OutPackageName)
{
	// Build a package name to use
	FString PackageNameSuggestion = DirectorySuggestion + NameSuggestion;
	FString Name;
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>("AssetTools");
	AssetToolsModule.Get().CreateUniqueAssetName(PackageNameSuggestion, TEXT(""), PackageNameSuggestion, Name);

	TSharedPtr<SDlgPickAssetPath> PickAssetPathWidget =
		SNew(SDlgPickAssetPath)
		.Title(DescriptionText)
		.DefaultAssetPath(FText::FromString(PackageNameSuggestion));

	if (PickAssetPathWidget->ShowModal() == EAppReturnType::Ok)
	{
		// Get the full name of where we want to create the mesh asset.
		FText FullPackageName = PickAssetPathWidget->GetFullAssetPath();
		OutPackageDir = PickAssetPathWidget->GetAssetPath().ToString() + "/";
		OutPackageName = FPackageName::GetLongPackageAssetName(FullPackageName.ToString());

		// Check if the user inputed a valid asset name, if they did not, give it the generated default name
		if (Name.IsEmpty())
		{
			// Use the defaults that were already generated.
			OutPackageDir = DirectorySuggestion;
			OutPackageName = *Name;
		}

		return true;
	}

	return false;
}

#undef LOCTEXT_NAMESPACE
