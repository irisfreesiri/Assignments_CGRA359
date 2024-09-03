// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FlocksStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AController;
class AFlocksWorld;
class UMaterialInstanceDynamic;
class UStaticMesh;
enum class EGroupResponses : uint8;
enum class EUpdateBoidDefaultHealthMode : uint8;
enum class EUpdateBoidDefaultsMode : uint8;
struct FBoidSettings;
struct FDefaultBoidSettings;
struct FFlocksBoidBlueprintHandle;
struct FFlocksVolumeBlueprintHandle;
struct FGroupSettings;
struct FLineTraceForBoidsResult;
struct FSpawnTypeSettings;
#ifdef FLOCKS_FlocksStatics_generated_h
#error "FlocksStatics.generated.h already included, missing '#pragma once' in FlocksStatics.h"
#endif
#define FLOCKS_FlocksStatics_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics; \
	FLOCKS_API static class UScriptStruct* StaticStruct();


template<> FLOCKS_API UScriptStruct* StaticStruct<struct FLineTraceForBoidsResult>();

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyAllBoidMaterialCustomValues); \
	DECLARE_FUNCTION(execApplyBoidMaterialCustomValues); \
	DECLARE_FUNCTION(execUpdateBoidDefaultVelocityForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultVelocityForGroup); \
	DECLARE_FUNCTION(execRandomizeVelocityForAllBoidsInGroup); \
	DECLARE_FUNCTION(execSetVelocityForBoidsInGroup); \
	DECLARE_FUNCTION(execRandomizeVelocityForAllBoids); \
	DECLARE_FUNCTION(execSetVelocityForAllBoids); \
	DECLARE_FUNCTION(execRandomizeVelocityForBoid); \
	DECLARE_FUNCTION(execSetVelocityForBoid); \
	DECLARE_FUNCTION(execHealBoid); \
	DECLARE_FUNCTION(execDamageBoid); \
	DECLARE_FUNCTION(execSetHealthForBoid); \
	DECLARE_FUNCTION(execGetNumBoidsAffectedByVolume); \
	DECLARE_FUNCTION(execGetAllBoidsAffectedByVolume); \
	DECLARE_FUNCTION(execGetVolumeBounds); \
	DECLARE_FUNCTION(execIsBoidGoaling); \
	DECLARE_FUNCTION(execIsBoidFleeing); \
	DECLARE_FUNCTION(execGetAllBoidsInSphere); \
	DECLARE_FUNCTION(execLineTraceForBoids); \
	DECLARE_FUNCTION(execLineTraceForBoid); \
	DECLARE_FUNCTION(execGetMaxGroups); \
	DECLARE_FUNCTION(execGetNumBoids); \
	DECLARE_FUNCTION(execGetBoidAtIndex); \
	DECLARE_FUNCTION(execGetBoidBlueprintID); \
	DECLARE_FUNCTION(execGetBoidFromBlueprintID); \
	DECLARE_FUNCTION(execGetMeshForBoid); \
	DECLARE_FUNCTION(execGetMaterialInstances); \
	DECLARE_FUNCTION(execGetBoidSettings); \
	DECLARE_FUNCTION(execGetBoidRadiusAndCenter); \
	DECLARE_FUNCTION(execGetBoidHealthPercent); \
	DECLARE_FUNCTION(execGetBoidMaxHealth); \
	DECLARE_FUNCTION(execGetBoidHealth); \
	DECLARE_FUNCTION(execGetBoidAnimRate); \
	DECLARE_FUNCTION(execGetBoidScale); \
	DECLARE_FUNCTION(execGetBoidTurningSpeed); \
	DECLARE_FUNCTION(execGetBoidSpeed); \
	DECLARE_FUNCTION(execGetBoidGroup); \
	DECLARE_FUNCTION(execGetBoidHeading); \
	DECLARE_FUNCTION(execGetBoidLocation); \
	DECLARE_FUNCTION(execIsValidVolumeHandle); \
	DECLARE_FUNCTION(execIsValidBoidHandle); \
	DECLARE_FUNCTION(execGetBoidLocations); \
	DECLARE_FUNCTION(execGetAllBoidLocations); \
	DECLARE_FUNCTION(execSetBoidMaterialCustomValueOnAll); \
	DECLARE_FUNCTION(execSetBoidMaterialCustomValue); \
	DECLARE_FUNCTION(execGetGroupSettings); \
	DECLARE_FUNCTION(execSetGroupSettings); \
	DECLARE_FUNCTION(execSetGroupResponseToGroup); \
	DECLARE_FUNCTION(execSetGroupAlignmentRadius); \
	DECLARE_FUNCTION(execSetGroupSeparationRadius); \
	DECLARE_FUNCTION(execSetGroupCohesionRadius); \
	DECLARE_FUNCTION(execSetGroupPreferNonVerticalMovement); \
	DECLARE_FUNCTION(execSetGroupRestriction); \
	DECLARE_FUNCTION(execSetGroupFlee); \
	DECLARE_FUNCTION(execSetGroupGoal); \
	DECLARE_FUNCTION(execSetGroupAlignment); \
	DECLARE_FUNCTION(execSetGroupSeparation); \
	DECLARE_FUNCTION(execSetGroupCohesion); \
	DECLARE_FUNCTION(execUpdateBoidDefaultSettingsForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultAnimRateForAllMeshes); \
	DECLARE_FUNCTION(execUpdateBoidDefaultScaleForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultTurningSpeedForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultSpeedForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultMaxHealthForAllGroups); \
	DECLARE_FUNCTION(execUpdateBoidDefaultSettingsForGroup); \
	DECLARE_FUNCTION(execUpdateBoidDefaultAnimRateForMesh); \
	DECLARE_FUNCTION(execUpdateBoidDefaultScaleForGroup); \
	DECLARE_FUNCTION(execUpdateBoidDefaultTurningSpeedForGroup); \
	DECLARE_FUNCTION(execUpdateBoidDefaultSpeedForGroup); \
	DECLARE_FUNCTION(execUpdateBoidDefaultMaxHealthForGroup); \
	DECLARE_FUNCTION(execUpdateSettingsForAllBoidsInGroup); \
	DECLARE_FUNCTION(execRandomizeAnimRateForAllBoidsInGroup); \
	DECLARE_FUNCTION(execRandomizeScaleForAllBoidsInGroup); \
	DECLARE_FUNCTION(execRandomizeTurningSpeedForAllBoidsInGroup); \
	DECLARE_FUNCTION(execRandomizeSpeedForAllBoidsInGroup); \
	DECLARE_FUNCTION(execSetAnimRateForBoidsInGroup); \
	DECLARE_FUNCTION(execSetScaleForBoidsInGroup); \
	DECLARE_FUNCTION(execSetTurningSpeedForBoidsInGroup); \
	DECLARE_FUNCTION(execSetSpeedForBoidsInGroup); \
	DECLARE_FUNCTION(execSetMaxHealthForAllBoidsInGroup); \
	DECLARE_FUNCTION(execUpdateSettingsForAllBoids); \
	DECLARE_FUNCTION(execRandomizeAnimRateForAllBoids); \
	DECLARE_FUNCTION(execRandomizeScaleForAllBoids); \
	DECLARE_FUNCTION(execRandomizeTurningSpeedForAllBoids); \
	DECLARE_FUNCTION(execRandomizeSpeedForAllBoids); \
	DECLARE_FUNCTION(execSetAnimRateForAllBoids); \
	DECLARE_FUNCTION(execSetScaleForAllBoids); \
	DECLARE_FUNCTION(execSetTurningSpeedForAllBoids); \
	DECLARE_FUNCTION(execSetSpeedForAllBoids); \
	DECLARE_FUNCTION(execSetMaxHealthForAllBoids); \
	DECLARE_FUNCTION(execUpdateSettingsForBoid); \
	DECLARE_FUNCTION(execClampAnimRateForBoid); \
	DECLARE_FUNCTION(execClampScaleForBoid); \
	DECLARE_FUNCTION(execClampTurningSpeedForBoid); \
	DECLARE_FUNCTION(execClampSpeedForBoid); \
	DECLARE_FUNCTION(execRandomizeAnimRateForBoid); \
	DECLARE_FUNCTION(execRandomizeScaleForBoid); \
	DECLARE_FUNCTION(execRandomizeTurningSpeedForBoid); \
	DECLARE_FUNCTION(execRandomizeSpeedForBoid); \
	DECLARE_FUNCTION(execSetAnimRateForBoid); \
	DECLARE_FUNCTION(execSetScaleForBoid); \
	DECLARE_FUNCTION(execSetTurningSpeedForBoid); \
	DECLARE_FUNCTION(execSetSpeedForBoid); \
	DECLARE_FUNCTION(execSetMaxHealthForBoid); \
	DECLARE_FUNCTION(execRemoveBoid); \
	DECLARE_FUNCTION(execBatchRemoveBoids); \
	DECLARE_FUNCTION(execBatchAddBoids); \
	DECLARE_FUNCTION(execAddBoidAdvanced); \
	DECLARE_FUNCTION(execAddBoidAtSpawnPoint); \
	DECLARE_FUNCTION(execAddBoidAtActor); \
	DECLARE_FUNCTION(execAddBoidAtLocation); \
	DECLARE_FUNCTION(execAddBoid); \
	DECLARE_FUNCTION(execGetFlocksWorld);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFlocksStatics(); \
	friend struct Z_Construct_UClass_UFlocksStatics_Statics; \
public: \
	DECLARE_CLASS(UFlocksStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Flocks"), NO_API) \
	DECLARE_SERIALIZER(UFlocksStatics)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFlocksStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UFlocksStatics(UFlocksStatics&&); \
	UFlocksStatics(const UFlocksStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFlocksStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFlocksStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFlocksStatics) \
	NO_API virtual ~UFlocksStatics();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_28_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_31_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLOCKS_API UClass* StaticClass<class UFlocksStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
