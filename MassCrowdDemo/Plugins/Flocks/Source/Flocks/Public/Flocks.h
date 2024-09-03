// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"

class FLOCKS_API FFlocksModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

DECLARE_LOG_CATEGORY_EXTERN(FlocksLog, Log, All);