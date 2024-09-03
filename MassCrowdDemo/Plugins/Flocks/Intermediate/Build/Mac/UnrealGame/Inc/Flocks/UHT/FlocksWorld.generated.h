// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlocksWorld.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FFlocksBoidBlueprintHandle;
#ifdef FLOCKS_FlocksWorld_generated_h
#error "FlocksWorld.generated.h already included, missing '#pragma once' in FlocksWorld.h"
#endif
#define FLOCKS_FlocksWorld_generated_h

#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_29_DELEGATE \
FLOCKS_API void FOnBoidKilledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBoidKilledDelegate, FFlocksBoidBlueprintHandle const& Boid, const AController* CausedBy);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_30_DELEGATE \
FLOCKS_API void FOnBoidHealthChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBoidHealthChangedDelegate, FFlocksBoidBlueprintHandle const& Boid, float OldHealth, float NewHealth, const AController* CausedBy);


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_CALLBACK_WRAPPERS
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFlocksWorld(); \
	friend struct Z_Construct_UClass_AFlocksWorld_Statics; \
public: \
	DECLARE_CLASS(AFlocksWorld, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Flocks"), NO_API) \
	DECLARE_SERIALIZER(AFlocksWorld)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AFlocksWorld(AFlocksWorld&&); \
	AFlocksWorld(const AFlocksWorld&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFlocksWorld); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFlocksWorld); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFlocksWorld)


#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_32_PROLOG
#define FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_CALLBACK_WRAPPERS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_INCLASS_NO_PURE_DECLS \
	FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKS_API UClass* StaticClass<class AFlocksWorld>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
