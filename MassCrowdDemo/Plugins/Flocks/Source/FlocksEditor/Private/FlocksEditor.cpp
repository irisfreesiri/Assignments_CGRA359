// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksEditor.h"
#include "FlocksCompat.h"

#include "Interfaces/IPluginManager.h"
#include "ToolMenus.h"
#include "Components/SkeletalMeshComponent.h"
#include "FlocksVATBuilder.h"
#include "SkeletalMeshToolMenuContext.h"
#include "Animation/AnimSingleNodeInstance.h"
#include "ISkeletalMeshEditor.h"
#include "IPersonaToolkit.h"
#include "Animation/DebugSkelMeshComponent.h"
#include "IAnimationEditorModule.h"
#include "Misc/EngineVersionComparison.h"

#define LOCTEXT_NAMESPACE "FFlocksEditorModule"
IMPLEMENT_MODULE(FFlocksEditorModule, FlocksEditor)
DEFINE_LOG_CATEGORY(FlocksEditorLog);

void FFlocksEditorModule::StartupModule()
{
	ModuleLoadedDelegateHandle = FModuleManager::Get().OnModulesChanged().AddLambda([this](FName InModuleName, EModuleChangeReason InChangeReason)
	{
		if (InChangeReason == EModuleChangeReason::ModuleLoaded)
		{
			if (InModuleName == "AnimationEditor")
			{
				AddAnimationEditorToolbarExtender();
			}
		}
	});


	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FFlocksEditorModule::RegisterMenus));
}

void FFlocksEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	RemoveAnimationEditorToolbarExtender();
	FModuleManager::Get().OnModulesChanged().Remove(ModuleLoadedDelegateHandle);
}

void FFlocksEditorModule::RegisterMenus()
{
}

void FFlocksEditorModule::AddAnimationEditorToolbarExtender()
{
	IAnimationEditorModule& AnimationEditorModule = FModuleManager::Get().LoadModuleChecked<IAnimationEditorModule>("AnimationEditor");
	auto& ToolbarExtenders = AnimationEditorModule.GetAllAnimationEditorToolbarExtenders();

	ToolbarExtenders.Add(IAnimationEditorModule::FAnimationEditorToolbarExtender::CreateRaw(this, &FFlocksEditorModule::GetAnimationEditorToolbarExtender));
	AnimationEditorExtenderHandle = ToolbarExtenders.Last().GetHandle();
}

void FFlocksEditorModule::RemoveAnimationEditorToolbarExtender()
{
	IAnimationEditorModule* AnimationEditorModule = FModuleManager::Get().GetModulePtr<IAnimationEditorModule>("AnimationEditor");
	if (AnimationEditorModule)
	{
		typedef IAnimationEditorModule::FAnimationEditorToolbarExtender DelegateType;
		AnimationEditorModule->GetAllAnimationEditorToolbarExtenders().RemoveAll([this](const DelegateType& In) { return In.GetHandle() == AnimationEditorExtenderHandle; });
	}
}

TSharedRef<FExtender> FFlocksEditorModule::GetAnimationEditorToolbarExtender(const TSharedRef<FUICommandList> CommandList, TSharedRef<IAnimationEditor> InAnimationEditor)
{
	TSharedRef<FExtender> Extender = MakeShareable(new FExtender);

	UMeshComponent* MeshComponent = InAnimationEditor->GetPersonaToolkit()->GetPreviewMeshComponent();

	Extender->AddToolBarExtension(
		"Asset",
		EExtensionHook::After,
		CommandList,
		FToolBarExtensionDelegate::CreateRaw(this, &FFlocksEditorModule::HandleAddSkeletalMeshActionExtenderToToolbar, MeshComponent)
	);

	return Extender;
}

void FFlocksEditorModule::HandleAddSkeletalMeshActionExtenderToToolbar(FToolBarBuilder& ParentToolbarBuilder, UMeshComponent* InMeshComponent)
{
	ParentToolbarBuilder.AddToolBarButton(
		FUIAction(FExecuteAction::CreateLambda([this, InMeshComponent]()
		{
			USkeletalMeshComponent* skeletalMesh = Cast<USkeletalMeshComponent>(InMeshComponent);
			if (skeletalMesh)
			{
				FlocksVATBuilder::CreateVATMeshFile(skeletalMesh, FlocksCompat::FlocksGetSkeletalMesh(skeletalMesh));
			}
		})),
		NAME_None,
		LOCTEXT("MakeVATMesh", "Make VAT Mesh"),
		LOCTEXT("MakeVATMeshTooltip", "Make a VAT Mesh out of the preview's current pose."),
		FSlateIcon("EditorStyle", "Persona.ConvertToStaticMesh")
	);

	ParentToolbarBuilder.AddToolBarButton(
		FUIAction(FExecuteAction::CreateLambda([this, InMeshComponent]()
		{
			USkeletalMeshComponent* skeletalMesh = Cast<USkeletalMeshComponent>(InMeshComponent);
			if (skeletalMesh && skeletalMesh->GetSingleNodeInstance())
			{
				FlocksVATBuilder::CreateVATAnimFile(skeletalMesh, FlocksCompat::FlocksGetSkeletalMesh(skeletalMesh), skeletalMesh->GetSingleNodeInstance()->GetAnimationAsset());
			}
		})),
		NAME_None,
		LOCTEXT("MakeVATAnimation", "Make VAT Animation"),
		LOCTEXT("MakeVATAnimationTooltip", "Make a VAT Animation out of the preview's current pose."),
		FSlateIcon("EditorStyle", "Persona.ConvertToStaticMesh")
	);
}

#undef LOCTEXT_NAMESPACE
