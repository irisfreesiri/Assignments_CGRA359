// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "Flocks.h"
#include "ShaderCore.h"
#include "Misc/Paths.h"
#include "Misc/FileHelper.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "Interfaces/IPluginManager.h"

#define LOCTEXT_NAMESPACE "FFlocksModule"
IMPLEMENT_MODULE(FFlocksModule, Flocks)
DEFINE_LOG_CATEGORY(FlocksLog);

void FFlocksModule::StartupModule()
{
	FString PluginShaderDir = FPaths::Combine(IPluginManager::Get().FindPlugin(TEXT("Flocks"))->GetBaseDir(), TEXT("Shaders"));
	AddShaderSourceDirectoryMapping(TEXT("/Flocks"), PluginShaderDir);
}

void FFlocksModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

#undef LOCTEXT_NAMESPACE