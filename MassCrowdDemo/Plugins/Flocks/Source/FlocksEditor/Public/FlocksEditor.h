// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "IAnimationEditor.h"

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FFlocksEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	void RegisterMenus();
	void AddAnimationEditorToolbarExtender();
	void RemoveAnimationEditorToolbarExtender();
	TSharedRef<FExtender> GetAnimationEditorToolbarExtender(const TSharedRef<FUICommandList> CommandList, TSharedRef<IAnimationEditor> InAnimationEditor);
	void HandleAddSkeletalMeshActionExtenderToToolbar(FToolBarBuilder& ParentToolbarBuilder, UMeshComponent* InMeshComponent);

	FDelegateHandle ModuleLoadedDelegateHandle;
	FDelegateHandle AnimationEditorExtenderHandle;
};

DECLARE_LOG_CATEGORY_EXTERN(FlocksEditorLog, Log, All);