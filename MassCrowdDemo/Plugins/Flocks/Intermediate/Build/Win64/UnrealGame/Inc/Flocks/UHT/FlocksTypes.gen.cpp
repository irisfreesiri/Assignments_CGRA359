// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocks/Public/FlocksTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlocksTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
FLOCKS_API UClass* Z_Construct_UClass_UFlocksAnimationData();
FLOCKS_API UClass* Z_Construct_UClass_UFlocksAnimationData_NoRegister();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EFlocksAnimationMode();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EGroupResponses();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_ESpawnTypes();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_FlocksVolumeShapes();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_FlocksVolumeTypes();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoidSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultBoidSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksAnimation();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksAnimationVariationData();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FGroupResponseEntry();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FGroupSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialDataCustomValue();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FMeshRendererData();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerGroupDefaultSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTypeSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeInfo();
UPackage* Z_Construct_UPackage__Script_Flocks();
// End Cross Module References

// Begin Enum EUpdateBoidDefaultsMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode;
static UEnum* EUpdateBoidDefaultsMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("EUpdateBoidDefaultsMode"));
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<EUpdateBoidDefaultsMode>()
{
	return EUpdateBoidDefaultsMode_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClampExistingBoidValues.Name", "EUpdateBoidDefaultsMode::ClampExistingBoidValues" },
		{ "LeaveExistingBoidValues.Name", "EUpdateBoidDefaultsMode::LeaveExistingBoidValues" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
		{ "RandomizeExistingBoidValues.Name", "EUpdateBoidDefaultsMode::RandomizeExistingBoidValues" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateBoidDefaultsMode::LeaveExistingBoidValues", (int64)EUpdateBoidDefaultsMode::LeaveExistingBoidValues },
		{ "EUpdateBoidDefaultsMode::RandomizeExistingBoidValues", (int64)EUpdateBoidDefaultsMode::RandomizeExistingBoidValues },
		{ "EUpdateBoidDefaultsMode::ClampExistingBoidValues", (int64)EUpdateBoidDefaultsMode::ClampExistingBoidValues },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"EUpdateBoidDefaultsMode",
	"EUpdateBoidDefaultsMode",
	Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.InnerSingleton, Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode.InnerSingleton;
}
// End Enum EUpdateBoidDefaultsMode

// Begin Enum EUpdateBoidDefaultHealthMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode;
static UEnum* EUpdateBoidDefaultHealthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("EUpdateBoidDefaultHealthMode"));
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<EUpdateBoidDefaultHealthMode>()
{
	return EUpdateBoidDefaultHealthMode_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepHealthPercent.Name", "EUpdateBoidDefaultHealthMode::KeepHealthPercent" },
		{ "KeepHealthValue.Name", "EUpdateBoidDefaultHealthMode::KeepHealthValue" },
		{ "LeaveExistingMaxHealth.Name", "EUpdateBoidDefaultHealthMode::LeaveExistingMaxHealth" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateBoidDefaultHealthMode::LeaveExistingMaxHealth", (int64)EUpdateBoidDefaultHealthMode::LeaveExistingMaxHealth },
		{ "EUpdateBoidDefaultHealthMode::KeepHealthPercent", (int64)EUpdateBoidDefaultHealthMode::KeepHealthPercent },
		{ "EUpdateBoidDefaultHealthMode::KeepHealthValue", (int64)EUpdateBoidDefaultHealthMode::KeepHealthValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"EUpdateBoidDefaultHealthMode",
	"EUpdateBoidDefaultHealthMode",
	Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.InnerSingleton, Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode.InnerSingleton;
}
// End Enum EUpdateBoidDefaultHealthMode

// Begin Enum EUpdateBoidDefaultMaxHealthMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode;
static UEnum* EUpdateBoidDefaultMaxHealthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("EUpdateBoidDefaultMaxHealthMode"));
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<EUpdateBoidDefaultMaxHealthMode>()
{
	return EUpdateBoidDefaultMaxHealthMode_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeepHealthPercent.Name", "EUpdateBoidDefaultMaxHealthMode::KeepHealthPercent" },
		{ "KeepHealthValue.Name", "EUpdateBoidDefaultMaxHealthMode::KeepHealthValue" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUpdateBoidDefaultMaxHealthMode::KeepHealthPercent", (int64)EUpdateBoidDefaultMaxHealthMode::KeepHealthPercent },
		{ "EUpdateBoidDefaultMaxHealthMode::KeepHealthValue", (int64)EUpdateBoidDefaultMaxHealthMode::KeepHealthValue },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"EUpdateBoidDefaultMaxHealthMode",
	"EUpdateBoidDefaultMaxHealthMode",
	Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode()
{
	if (!Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.InnerSingleton, Z_Construct_UEnum_Flocks_EUpdateBoidDefaultMaxHealthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode.InnerSingleton;
}
// End Enum EUpdateBoidDefaultMaxHealthMode

// Begin Enum ESpawnTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpawnTypes;
static UEnum* ESpawnTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpawnTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpawnTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_ESpawnTypes, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("ESpawnTypes"));
	}
	return Z_Registration_Info_UEnum_ESpawnTypes.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<ESpawnTypes>()
{
	return ESpawnTypes_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_ESpawnTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AtActor.Name", "ESpawnTypes::AtActor" },
		{ "AtLocation.Name", "ESpawnTypes::AtLocation" },
		{ "AtSpawnPoint.Name", "ESpawnTypes::AtSpawnPoint" },
		{ "AtWorld.Name", "ESpawnTypes::AtWorld" },
		{ "BlueprintType", "true" },
		{ "InsideRandomRestrictionVolume.Name", "ESpawnTypes::InsideRandomRestrictionVolume" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpawnTypes::AtWorld", (int64)ESpawnTypes::AtWorld },
		{ "ESpawnTypes::AtActor", (int64)ESpawnTypes::AtActor },
		{ "ESpawnTypes::AtLocation", (int64)ESpawnTypes::AtLocation },
		{ "ESpawnTypes::AtSpawnPoint", (int64)ESpawnTypes::AtSpawnPoint },
		{ "ESpawnTypes::InsideRandomRestrictionVolume", (int64)ESpawnTypes::InsideRandomRestrictionVolume },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"ESpawnTypes",
	"ESpawnTypes",
	Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_ESpawnTypes()
{
	if (!Z_Registration_Info_UEnum_ESpawnTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpawnTypes.InnerSingleton, Z_Construct_UEnum_Flocks_ESpawnTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpawnTypes.InnerSingleton;
}
// End Enum ESpawnTypes

// Begin Enum FlocksVolumeTypes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FlocksVolumeTypes;
static UEnum* FlocksVolumeTypes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FlocksVolumeTypes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FlocksVolumeTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_FlocksVolumeTypes, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksVolumeTypes"));
	}
	return Z_Registration_Info_UEnum_FlocksVolumeTypes.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<FlocksVolumeTypes>()
{
	return FlocksVolumeTypes_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flee.Name", "FlocksVolumeTypes::Flee" },
		{ "Goal.Name", "FlocksVolumeTypes::Goal" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
		{ "Other.Name", "FlocksVolumeTypes::Other" },
		{ "Restriction.Name", "FlocksVolumeTypes::Restriction" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FlocksVolumeTypes::Goal", (int64)FlocksVolumeTypes::Goal },
		{ "FlocksVolumeTypes::Flee", (int64)FlocksVolumeTypes::Flee },
		{ "FlocksVolumeTypes::Restriction", (int64)FlocksVolumeTypes::Restriction },
		{ "FlocksVolumeTypes::Other", (int64)FlocksVolumeTypes::Other },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"FlocksVolumeTypes",
	"FlocksVolumeTypes",
	Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_FlocksVolumeTypes()
{
	if (!Z_Registration_Info_UEnum_FlocksVolumeTypes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FlocksVolumeTypes.InnerSingleton, Z_Construct_UEnum_Flocks_FlocksVolumeTypes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FlocksVolumeTypes.InnerSingleton;
}
// End Enum FlocksVolumeTypes

// Begin Enum FlocksVolumeShapes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FlocksVolumeShapes;
static UEnum* FlocksVolumeShapes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FlocksVolumeShapes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FlocksVolumeShapes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_FlocksVolumeShapes, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksVolumeShapes"));
	}
	return Z_Registration_Info_UEnum_FlocksVolumeShapes.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<FlocksVolumeShapes>()
{
	return FlocksVolumeShapes_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Box.Name", "FlocksVolumeShapes::Box" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
		{ "Sphere.Name", "FlocksVolumeShapes::Sphere" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FlocksVolumeShapes::Sphere", (int64)FlocksVolumeShapes::Sphere },
		{ "FlocksVolumeShapes::Box", (int64)FlocksVolumeShapes::Box },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"FlocksVolumeShapes",
	"FlocksVolumeShapes",
	Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_FlocksVolumeShapes()
{
	if (!Z_Registration_Info_UEnum_FlocksVolumeShapes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FlocksVolumeShapes.InnerSingleton, Z_Construct_UEnum_Flocks_FlocksVolumeShapes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FlocksVolumeShapes.InnerSingleton;
}
// End Enum FlocksVolumeShapes

// Begin Enum EGroupResponses
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGroupResponses;
static UEnum* EGroupResponses_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGroupResponses.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGroupResponses.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_EGroupResponses, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("EGroupResponses"));
	}
	return Z_Registration_Info_UEnum_EGroupResponses.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<EGroupResponses>()
{
	return EGroupResponses_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_EGroupResponses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Flock.Name", "EGroupResponses::Flock" },
		{ "Ignore.Name", "EGroupResponses::Ignore" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGroupResponses::Ignore", (int64)EGroupResponses::Ignore },
		{ "EGroupResponses::Flock", (int64)EGroupResponses::Flock },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_EGroupResponses_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"EGroupResponses",
	"EGroupResponses",
	Z_Construct_UEnum_Flocks_EGroupResponses_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EGroupResponses_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EGroupResponses_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_EGroupResponses_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_EGroupResponses()
{
	if (!Z_Registration_Info_UEnum_EGroupResponses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGroupResponses.InnerSingleton, Z_Construct_UEnum_Flocks_EGroupResponses_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGroupResponses.InnerSingleton;
}
// End Enum EGroupResponses

// Begin Enum EFlocksAnimationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlocksAnimationMode;
static UEnum* EFlocksAnimationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlocksAnimationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlocksAnimationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Flocks_EFlocksAnimationMode, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("EFlocksAnimationMode"));
	}
	return Z_Registration_Info_UEnum_EFlocksAnimationMode.OuterSingleton;
}
template<> FLOCKS_API UEnum* StaticEnum<EFlocksAnimationMode>()
{
	return EFlocksAnimationMode_StaticEnum();
}
struct Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LoopSingle.Name", "EFlocksAnimationMode::LoopSingle" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
		{ "PlayVarious.Name", "EFlocksAnimationMode::PlayVarious" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlocksAnimationMode::LoopSingle", (int64)EFlocksAnimationMode::LoopSingle },
		{ "EFlocksAnimationMode::PlayVarious", (int64)EFlocksAnimationMode::PlayVarious },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	"EFlocksAnimationMode",
	"EFlocksAnimationMode",
	Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Flocks_EFlocksAnimationMode()
{
	if (!Z_Registration_Info_UEnum_EFlocksAnimationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlocksAnimationMode.InnerSingleton, Z_Construct_UEnum_Flocks_EFlocksAnimationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlocksAnimationMode.InnerSingleton;
}
// End Enum EFlocksAnimationMode

// Begin ScriptStruct FFlocksBoidBlueprintHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle;
class UScriptStruct* FFlocksBoidBlueprintHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksBoidBlueprintHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FFlocksBoidBlueprintHandle>()
{
	return FFlocksBoidBlueprintHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlocksBoidBlueprintHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"FlocksBoidBlueprintHandle",
	nullptr,
	0,
	sizeof(FFlocksBoidBlueprintHandle),
	alignof(FFlocksBoidBlueprintHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.InnerSingleton, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle.InnerSingleton;
}
// End ScriptStruct FFlocksBoidBlueprintHandle

// Begin ScriptStruct FFlocksVolumeBlueprintHandle
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle;
class UScriptStruct* FFlocksVolumeBlueprintHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksVolumeBlueprintHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FFlocksVolumeBlueprintHandle>()
{
	return FFlocksVolumeBlueprintHandle::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlocksVolumeBlueprintHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"FlocksVolumeBlueprintHandle",
	nullptr,
	0,
	sizeof(FFlocksVolumeBlueprintHandle),
	alignof(FFlocksVolumeBlueprintHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.InnerSingleton, Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle.InnerSingleton;
}
// End ScriptStruct FFlocksVolumeBlueprintHandle

// Begin ScriptStruct FFlocksAnimation
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlocksAnimation;
class UScriptStruct* FFlocksAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlocksAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlocksAnimation, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksAnimation"));
	}
	return Z_Registration_Info_UScriptStruct_FlocksAnimation.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FFlocksAnimation>()
{
	return FFlocksAnimation::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlocksAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RateScale_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartFrame_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfFrames_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RateScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfFrames;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlocksAnimation>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimation, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationName_MetaData), NewProp_AnimationName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_RateScale = { "RateScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimation, RateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RateScale_MetaData), NewProp_RateScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_StartFrame = { "StartFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimation, StartFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartFrame_MetaData), NewProp_StartFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_NumberOfFrames = { "NumberOfFrames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimation, NumberOfFrames), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumberOfFrames_MetaData), NewProp_NumberOfFrames_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlocksAnimation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_RateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_StartFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewProp_NumberOfFrames,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlocksAnimation_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"FlocksAnimation",
	Z_Construct_UScriptStruct_FFlocksAnimation_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimation_Statics::PropPointers),
	sizeof(FFlocksAnimation),
	alignof(FFlocksAnimation),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimation_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlocksAnimation_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlocksAnimation()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksAnimation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlocksAnimation.InnerSingleton, Z_Construct_UScriptStruct_FFlocksAnimation_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlocksAnimation.InnerSingleton;
}
// End ScriptStruct FFlocksAnimation

// Begin ScriptStruct FFlocksAnimationVariationData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData;
class UScriptStruct* FFlocksAnimationVariationData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFlocksAnimationVariationData, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("FlocksAnimationVariationData"));
	}
	return Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FFlocksAnimationVariationData>()
{
	return FFlocksAnimationVariationData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationName_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinLoops_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxLoops_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinLoops;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLoops;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFlocksAnimationVariationData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_AnimationName = { "AnimationName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimationVariationData, AnimationName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationName_MetaData), NewProp_AnimationName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_MinLoops = { "MinLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimationVariationData, MinLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinLoops_MetaData), NewProp_MinLoops_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_MaxLoops = { "MaxLoops", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFlocksAnimationVariationData, MaxLoops), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxLoops_MetaData), NewProp_MaxLoops_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_AnimationName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_MinLoops,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewProp_MaxLoops,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"FlocksAnimationVariationData",
	Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::PropPointers),
	sizeof(FFlocksAnimationVariationData),
	alignof(FFlocksAnimationVariationData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFlocksAnimationVariationData()
{
	if (!Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.InnerSingleton, Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData.InnerSingleton;
}
// End ScriptStruct FFlocksAnimationVariationData

// Begin Class UFlocksAnimationData
void UFlocksAnimationData::StaticRegisterNativesUFlocksAnimationData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlocksAnimationData);
UClass* Z_Construct_UClass_UFlocksAnimationData_NoRegister()
{
	return UFlocksAnimationData::StaticClass();
}
struct Z_Construct_UClass_UFlocksAnimationData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FlocksTypes.h" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionTexture_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalTexture_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomStartTime_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationMode_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAnimation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "AnimationMode == EFlocksAnimationMode::LoopSingle" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationVariations_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "AnimationMode == EFlocksAnimationMode::PlayVarious" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionTexture;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NormalTexture;
	static void NewProp_bUseRandomStartTime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomStartTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Animations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AnimationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AnimationMode;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultAnimation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationVariations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AnimationVariations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlocksAnimationData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_PositionTexture = { "PositionTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, PositionTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionTexture_MetaData), NewProp_PositionTexture_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_NormalTexture = { "NormalTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, NormalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalTexture_MetaData), NewProp_NormalTexture_MetaData) };
void Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_bUseRandomStartTime_SetBit(void* Obj)
{
	((UFlocksAnimationData*)Obj)->bUseRandomStartTime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_bUseRandomStartTime = { "bUseRandomStartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFlocksAnimationData), &Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_bUseRandomStartTime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomStartTime_MetaData), NewProp_bUseRandomStartTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksAnimation, METADATA_PARAMS(0, nullptr) }; // 2334030250
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Animations_MetaData), NewProp_Animations_MetaData) }; // 2334030250
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationMode = { "AnimationMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, AnimationMode), Z_Construct_UEnum_Flocks_EFlocksAnimationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationMode_MetaData), NewProp_AnimationMode_MetaData) }; // 3138345182
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_DefaultAnimation = { "DefaultAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, DefaultAnimation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultAnimation_MetaData), NewProp_DefaultAnimation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationVariations_Inner = { "AnimationVariations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksAnimationVariationData, METADATA_PARAMS(0, nullptr) }; // 2588025983
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationVariations = { "AnimationVariations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFlocksAnimationData, AnimationVariations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationVariations_MetaData), NewProp_AnimationVariations_MetaData) }; // 2588025983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFlocksAnimationData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_PositionTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_NormalTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_bUseRandomStartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_Animations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_Animations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_DefaultAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationVariations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFlocksAnimationData_Statics::NewProp_AnimationVariations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksAnimationData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFlocksAnimationData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksAnimationData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlocksAnimationData_Statics::ClassParams = {
	&UFlocksAnimationData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFlocksAnimationData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksAnimationData_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksAnimationData_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlocksAnimationData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlocksAnimationData()
{
	if (!Z_Registration_Info_UClass_UFlocksAnimationData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlocksAnimationData.OuterSingleton, Z_Construct_UClass_UFlocksAnimationData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlocksAnimationData.OuterSingleton;
}
template<> FLOCKS_API UClass* StaticClass<UFlocksAnimationData>()
{
	return UFlocksAnimationData::StaticClass();
}
UFlocksAnimationData::UFlocksAnimationData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlocksAnimationData);
UFlocksAnimationData::~UFlocksAnimationData() {}
// End Class UFlocksAnimationData

// Begin ScriptStruct FGroupResponseEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupResponseEntry;
class UScriptStruct* FGroupResponseEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupResponseEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupResponseEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupResponseEntry, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("GroupResponseEntry"));
	}
	return Z_Registration_Info_UScriptStruct_GroupResponseEntry.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FGroupResponseEntry>()
{
	return FGroupResponseEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroupResponseEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Response_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupResponseEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupResponseEntry, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupResponseEntry, Response), Z_Construct_UEnum_Flocks_EGroupResponses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Response_MetaData), NewProp_Response_MetaData) }; // 3307676068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Response_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"GroupResponseEntry",
	Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::PropPointers),
	sizeof(FGroupResponseEntry),
	alignof(FGroupResponseEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroupResponseEntry()
{
	if (!Z_Registration_Info_UScriptStruct_GroupResponseEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupResponseEntry.InnerSingleton, Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroupResponseEntry.InnerSingleton;
}
// End ScriptStruct FGroupResponseEntry

// Begin ScriptStruct FMaterialDataCustomValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialDataCustomValue;
class UScriptStruct* FMaterialDataCustomValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialDataCustomValue, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("MaterialDataCustomValue"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FMaterialDataCustomValue>()
{
	return FMaterialDataCustomValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRandomRange_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "bUseRandomRange" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseRandomRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRandomRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialDataCustomValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_bUseRandomRange_SetBit(void* Obj)
{
	((FMaterialDataCustomValue*)Obj)->bUseRandomRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_bUseRandomRange = { "bUseRandomRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMaterialDataCustomValue), &Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_bUseRandomRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRandomRange_MetaData), NewProp_bUseRandomRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDataCustomValue, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialDataCustomValue, MaxValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValue_MetaData), NewProp_MaxValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_bUseRandomRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewProp_MaxValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"MaterialDataCustomValue",
	Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::PropPointers),
	sizeof(FMaterialDataCustomValue),
	alignof(FMaterialDataCustomValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialDataCustomValue()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.InnerSingleton, Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialDataCustomValue.InnerSingleton;
}
// End ScriptStruct FMaterialDataCustomValue

// Begin ScriptStruct FMeshRendererData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MeshRendererData;
class UScriptStruct* FMeshRendererData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MeshRendererData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MeshRendererData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMeshRendererData, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("MeshRendererData"));
	}
	return Z_Registration_Info_UScriptStruct_MeshRendererData.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FMeshRendererData>()
{
	return FMeshRendererData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMeshRendererData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomDataValues_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultCustomDataValues_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadow_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomPivot_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinAnimRate_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAnimRate_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimationData_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomDataValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultCustomDataValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultCustomDataValues;
	static void NewProp_bCastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomPivot;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMeshRendererData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_NumCustomDataValues = { "NumCustomDataValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, NumCustomDataValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomDataValues_MetaData), NewProp_NumCustomDataValues_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_DefaultCustomDataValues_Inner = { "DefaultCustomDataValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMaterialDataCustomValue, METADATA_PARAMS(0, nullptr) }; // 89809300
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_DefaultCustomDataValues = { "DefaultCustomDataValues", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, DefaultCustomDataValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultCustomDataValues_MetaData), NewProp_DefaultCustomDataValues_MetaData) }; // 89809300
void Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_bCastShadow_SetBit(void* Obj)
{
	((FMeshRendererData*)Obj)->bCastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_bCastShadow = { "bCastShadow", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMeshRendererData), &Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_bCastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadow_MetaData), NewProp_bCastShadow_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_CustomPivot = { "CustomPivot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, CustomPivot), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomPivot_MetaData), NewProp_CustomPivot_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, MinAnimRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinAnimRate_MetaData), NewProp_MinAnimRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, MaxAnimRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAnimRate_MetaData), NewProp_MaxAnimRate_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_AnimationData = { "AnimationData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMeshRendererData, AnimationData), Z_Construct_UClass_UFlocksAnimationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimationData_MetaData), NewProp_AnimationData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMeshRendererData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_NumCustomDataValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_DefaultCustomDataValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_DefaultCustomDataValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_bCastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_CustomPivot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_MaxAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewProp_AnimationData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshRendererData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMeshRendererData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"MeshRendererData",
	Z_Construct_UScriptStruct_FMeshRendererData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshRendererData_Statics::PropPointers),
	sizeof(FMeshRendererData),
	alignof(FMeshRendererData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMeshRendererData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMeshRendererData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMeshRendererData()
{
	if (!Z_Registration_Info_UScriptStruct_MeshRendererData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MeshRendererData.InnerSingleton, Z_Construct_UScriptStruct_FMeshRendererData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MeshRendererData.InnerSingleton;
}
// End ScriptStruct FMeshRendererData

// Begin ScriptStruct FSpawnTypeSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnTypeSettings;
class UScriptStruct* FSpawnTypeSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTypeSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnTypeSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnTypeSettings, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("SpawnTypeSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnTypeSettings.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FSpawnTypeSettings>()
{
	return FSpawnTypeSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnType_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomRotation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "!bRandomRotation" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnActor_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "SpawnType == ESpawnTypes::AtActor" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "SpawnType == ESpawnTypes::AtLocation" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPointIndex_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "SpawnType == ESpawnTypes::AtSpawnPoint" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SpawnType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SpawnType;
	static void NewProp_bRandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnPointIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnTypeSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnRadius = { "SpawnRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRadius_MetaData), NewProp_SpawnRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnType = { "SpawnType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnType), Z_Construct_UEnum_Flocks_ESpawnTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnType_MetaData), NewProp_SpawnType_MetaData) }; // 2366438299
void Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
{
	((FSpawnTypeSettings*)Obj)->bRandomRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnTypeSettings), &Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomRotation_MetaData), NewProp_bRandomRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation_MetaData), NewProp_SpawnRotation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnActor = { "SpawnActor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnActor_MetaData), NewProp_SpawnActor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnPointIndex = { "SpawnPointIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnTypeSettings, SpawnPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPointIndex_MetaData), NewProp_SpawnPointIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_bRandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewProp_SpawnPointIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"SpawnTypeSettings",
	Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::PropPointers),
	sizeof(FSpawnTypeSettings),
	alignof(FSpawnTypeSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnTypeSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnTypeSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnTypeSettings.InnerSingleton, Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnTypeSettings.InnerSingleton;
}
// End ScriptStruct FSpawnTypeSettings

// Begin ScriptStruct FDefaultBoidSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DefaultBoidSettings;
class UScriptStruct* FDefaultBoidSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultBoidSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DefaultBoidSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDefaultBoidSettings, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("DefaultBoidSettings"));
	}
	return Z_Registration_Info_UScriptStruct_DefaultBoidSettings.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FDefaultBoidSettings>()
{
	return FDefaultBoidSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinSpeed_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinTurning_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTurning_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDefaultBoidSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinSpeed_MetaData), NewProp_MinSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MaxSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSpeed_MetaData), NewProp_MaxSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinTurning = { "MinTurning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MinTurning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinTurning_MetaData), NewProp_MinTurning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxTurning = { "MaxTurning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MaxTurning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTurning_MetaData), NewProp_MaxTurning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MinScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScale_MetaData), NewProp_MinScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MaxScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScale_MetaData), NewProp_MaxScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDefaultBoidSettings, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewProp_MaxHealth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"DefaultBoidSettings",
	Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::PropPointers),
	sizeof(FDefaultBoidSettings),
	alignof(FDefaultBoidSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDefaultBoidSettings()
{
	if (!Z_Registration_Info_UScriptStruct_DefaultBoidSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DefaultBoidSettings.InnerSingleton, Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DefaultBoidSettings.InnerSingleton;
}
// End ScriptStruct FDefaultBoidSettings

// Begin ScriptStruct FBoidSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BoidSettings;
class UScriptStruct* FBoidSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BoidSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BoidSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBoidSettings, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("BoidSettings"));
	}
	return Z_Registration_Info_UScriptStruct_BoidSettings.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FBoidSettings>()
{
	return FBoidSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBoidSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintID_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Turning_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AnimRateScale_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Group_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Turning;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AnimRateScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBoidSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Actions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BlueprintID = { "BlueprintID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, BlueprintID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintID_MetaData), NewProp_BlueprintID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Turning = { "Turning", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Turning), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Turning_MetaData), NewProp_Turning_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_AnimRateScale = { "AnimRateScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, AnimRateScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AnimRateScale_MetaData), NewProp_AnimRateScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, Group), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Group_MetaData), NewProp_Group_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBoidSettings, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndex_MetaData), NewProp_MeshIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Actions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_BlueprintID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Turning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_AnimRateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBoidSettings_Statics::NewProp_MeshIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBoidSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"BoidSettings",
	Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::PropPointers),
	sizeof(FBoidSettings),
	alignof(FBoidSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBoidSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBoidSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBoidSettings()
{
	if (!Z_Registration_Info_UScriptStruct_BoidSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BoidSettings.InnerSingleton, Z_Construct_UScriptStruct_FBoidSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BoidSettings.InnerSingleton;
}
// End ScriptStruct FBoidSettings

// Begin ScriptStruct FGroupSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GroupSettings;
class UScriptStruct* FGroupSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GroupSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GroupSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGroupSettings, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("GroupSettings"));
	}
	return Z_Registration_Info_UScriptStruct_GroupSettings.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FGroupSettings>()
{
	return FGroupSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGroupSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alignment_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cohesion_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Separation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Goal_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Flee_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Restriction_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeparationRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignmentRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CohesionRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPreferNonVerticalMovement_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupResponses_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cohesion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Separation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flee;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeparationRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CohesionRadius;
	static void NewProp_bPreferNonVerticalMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNonVerticalMovement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupResponses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GroupResponses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGroupSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Alignment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alignment_MetaData), NewProp_Alignment_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Cohesion = { "Cohesion", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Cohesion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cohesion_MetaData), NewProp_Cohesion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Separation = { "Separation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Separation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Separation_MetaData), NewProp_Separation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Goal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Goal_MetaData), NewProp_Goal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Flee = { "Flee", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Flee), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Flee_MetaData), NewProp_Flee_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Restriction = { "Restriction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, Restriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Restriction_MetaData), NewProp_Restriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_SeparationRadius = { "SeparationRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, SeparationRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeparationRadius_MetaData), NewProp_SeparationRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_AlignmentRadius = { "AlignmentRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, AlignmentRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignmentRadius_MetaData), NewProp_AlignmentRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_CohesionRadius = { "CohesionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, CohesionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CohesionRadius_MetaData), NewProp_CohesionRadius_MetaData) };
void Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_bPreferNonVerticalMovement_SetBit(void* Obj)
{
	((FGroupSettings*)Obj)->bPreferNonVerticalMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_bPreferNonVerticalMovement = { "bPreferNonVerticalMovement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FGroupSettings), &Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_bPreferNonVerticalMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPreferNonVerticalMovement_MetaData), NewProp_bPreferNonVerticalMovement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_GroupResponses_Inner = { "GroupResponses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGroupResponseEntry, METADATA_PARAMS(0, nullptr) }; // 3263359543
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_GroupResponses = { "GroupResponses", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGroupSettings, GroupResponses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupResponses_MetaData), NewProp_GroupResponses_MetaData) }; // 3263359543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGroupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Alignment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Cohesion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Separation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Flee,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_Restriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_SeparationRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_AlignmentRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_CohesionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_bPreferNonVerticalMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_GroupResponses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGroupSettings_Statics::NewProp_GroupResponses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGroupSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"GroupSettings",
	Z_Construct_UScriptStruct_FGroupSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupSettings_Statics::PropPointers),
	sizeof(FGroupSettings),
	alignof(FGroupSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGroupSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGroupSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGroupSettings()
{
	if (!Z_Registration_Info_UScriptStruct_GroupSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GroupSettings.InnerSingleton, Z_Construct_UScriptStruct_FGroupSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GroupSettings.InnerSingleton;
}
// End ScriptStruct FGroupSettings

// Begin ScriptStruct FVolumeInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VolumeInfo;
class UScriptStruct* FVolumeInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VolumeInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVolumeInfo, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("VolumeInfo"));
	}
	return Z_Registration_Info_UScriptStruct_VolumeInfo.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FVolumeInfo>()
{
	return FVolumeInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVolumeInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFalloff_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Falloff_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "bUseFalloff" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "Shape == FlocksVolumeShapes::Sphere && bUseFalloff" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRadius_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "Shape == FlocksVolumeShapes::Sphere" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerExtents_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "Shape == FlocksVolumeShapes::Box && bUseFalloff" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterExtents_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "Shape == FlocksVolumeShapes::Box" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllGroups_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InfluencesGroups_MetaData[] = {
		{ "Category", "Flocks" },
		{ "EditCondition", "!bAllGroups" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static void NewProp_bUseFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Falloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InnerRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OuterRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerExtents;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OuterExtents;
	static void NewProp_bAllGroups_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllGroups;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InfluencesGroups_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InfluencesGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVolumeInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, Type), Z_Construct_UEnum_Flocks_FlocksVolumeTypes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 2044232887
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, Shape), Z_Construct_UEnum_Flocks_FlocksVolumeShapes, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 292054770
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
void Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bUseFalloff_SetBit(void* Obj)
{
	((FVolumeInfo*)Obj)->bUseFalloff = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bUseFalloff = { "bUseFalloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVolumeInfo), &Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bUseFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFalloff_MetaData), NewProp_bUseFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Falloff = { "Falloff", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, Falloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Falloff_MetaData), NewProp_Falloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InnerRadius = { "InnerRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, InnerRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRadius_MetaData), NewProp_InnerRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_OuterRadius = { "OuterRadius", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, OuterRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRadius_MetaData), NewProp_OuterRadius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InnerExtents = { "InnerExtents", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, InnerExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerExtents_MetaData), NewProp_InnerExtents_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_OuterExtents = { "OuterExtents", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, OuterExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterExtents_MetaData), NewProp_OuterExtents_MetaData) };
void Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bAllGroups_SetBit(void* Obj)
{
	((FVolumeInfo*)Obj)->bAllGroups = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bAllGroups = { "bAllGroups", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FVolumeInfo), &Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bAllGroups_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllGroups_MetaData), NewProp_bAllGroups_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InfluencesGroups_Inner = { "InfluencesGroups", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InfluencesGroups = { "InfluencesGroups", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVolumeInfo, InfluencesGroups), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InfluencesGroups_MetaData), NewProp_InfluencesGroups_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVolumeInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Type_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bUseFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_Falloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InnerRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_OuterRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InnerExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_OuterExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_bAllGroups,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InfluencesGroups_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewProp_InfluencesGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVolumeInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"VolumeInfo",
	Z_Construct_UScriptStruct_FVolumeInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeInfo_Statics::PropPointers),
	sizeof(FVolumeInfo),
	alignof(FVolumeInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVolumeInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVolumeInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVolumeInfo()
{
	if (!Z_Registration_Info_UScriptStruct_VolumeInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VolumeInfo.InnerSingleton, Z_Construct_UScriptStruct_FVolumeInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VolumeInfo.InnerSingleton;
}
// End ScriptStruct FVolumeInfo

// Begin ScriptStruct FPerGroupDefaultSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings;
class UScriptStruct* FPerGroupDefaultSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerGroupDefaultSettings, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("PerGroupDefaultSettings"));
	}
	return Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FPerGroupDefaultSettings>()
{
	return FPerGroupDefaultSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNumBoids_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshIndex_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSpawnSettings_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoidDefaultSettings_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupDefaultSettings_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultNumBoids;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSpawnSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoidDefaultSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroupDefaultSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerGroupDefaultSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_DefaultNumBoids = { "DefaultNumBoids", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerGroupDefaultSettings, DefaultNumBoids), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNumBoids_MetaData), NewProp_DefaultNumBoids_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerGroupDefaultSettings, MeshIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshIndex_MetaData), NewProp_MeshIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_DefaultSpawnSettings = { "DefaultSpawnSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerGroupDefaultSettings, DefaultSpawnSettings), Z_Construct_UScriptStruct_FSpawnTypeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSpawnSettings_MetaData), NewProp_DefaultSpawnSettings_MetaData) }; // 862542696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_BoidDefaultSettings = { "BoidDefaultSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerGroupDefaultSettings, BoidDefaultSettings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoidDefaultSettings_MetaData), NewProp_BoidDefaultSettings_MetaData) }; // 3298287953
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_GroupDefaultSettings = { "GroupDefaultSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerGroupDefaultSettings, GroupDefaultSettings), Z_Construct_UScriptStruct_FGroupSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupDefaultSettings_MetaData), NewProp_GroupDefaultSettings_MetaData) }; // 1658348544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_DefaultNumBoids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_DefaultSpawnSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_BoidDefaultSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewProp_GroupDefaultSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"PerGroupDefaultSettings",
	Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::PropPointers),
	sizeof(FPerGroupDefaultSettings),
	alignof(FPerGroupDefaultSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerGroupDefaultSettings()
{
	if (!Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.InnerSingleton, Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings.InnerSingleton;
}
// End ScriptStruct FPerGroupDefaultSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUpdateBoidDefaultsMode_StaticEnum, TEXT("EUpdateBoidDefaultsMode"), &Z_Registration_Info_UEnum_EUpdateBoidDefaultsMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1669605684U) },
		{ EUpdateBoidDefaultHealthMode_StaticEnum, TEXT("EUpdateBoidDefaultHealthMode"), &Z_Registration_Info_UEnum_EUpdateBoidDefaultHealthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3621272372U) },
		{ EUpdateBoidDefaultMaxHealthMode_StaticEnum, TEXT("EUpdateBoidDefaultMaxHealthMode"), &Z_Registration_Info_UEnum_EUpdateBoidDefaultMaxHealthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2934278733U) },
		{ ESpawnTypes_StaticEnum, TEXT("ESpawnTypes"), &Z_Registration_Info_UEnum_ESpawnTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2366438299U) },
		{ FlocksVolumeTypes_StaticEnum, TEXT("FlocksVolumeTypes"), &Z_Registration_Info_UEnum_FlocksVolumeTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2044232887U) },
		{ FlocksVolumeShapes_StaticEnum, TEXT("FlocksVolumeShapes"), &Z_Registration_Info_UEnum_FlocksVolumeShapes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 292054770U) },
		{ EGroupResponses_StaticEnum, TEXT("EGroupResponses"), &Z_Registration_Info_UEnum_EGroupResponses, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3307676068U) },
		{ EFlocksAnimationMode_StaticEnum, TEXT("EFlocksAnimationMode"), &Z_Registration_Info_UEnum_EFlocksAnimationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3138345182U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFlocksBoidBlueprintHandle::StaticStruct, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle_Statics::NewStructOps, TEXT("FlocksBoidBlueprintHandle"), &Z_Registration_Info_UScriptStruct_FlocksBoidBlueprintHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlocksBoidBlueprintHandle), 100144147U) },
		{ FFlocksVolumeBlueprintHandle::StaticStruct, Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle_Statics::NewStructOps, TEXT("FlocksVolumeBlueprintHandle"), &Z_Registration_Info_UScriptStruct_FlocksVolumeBlueprintHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlocksVolumeBlueprintHandle), 373515902U) },
		{ FFlocksAnimation::StaticStruct, Z_Construct_UScriptStruct_FFlocksAnimation_Statics::NewStructOps, TEXT("FlocksAnimation"), &Z_Registration_Info_UScriptStruct_FlocksAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlocksAnimation), 2334030250U) },
		{ FFlocksAnimationVariationData::StaticStruct, Z_Construct_UScriptStruct_FFlocksAnimationVariationData_Statics::NewStructOps, TEXT("FlocksAnimationVariationData"), &Z_Registration_Info_UScriptStruct_FlocksAnimationVariationData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFlocksAnimationVariationData), 2588025983U) },
		{ FGroupResponseEntry::StaticStruct, Z_Construct_UScriptStruct_FGroupResponseEntry_Statics::NewStructOps, TEXT("GroupResponseEntry"), &Z_Registration_Info_UScriptStruct_GroupResponseEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupResponseEntry), 3263359543U) },
		{ FMaterialDataCustomValue::StaticStruct, Z_Construct_UScriptStruct_FMaterialDataCustomValue_Statics::NewStructOps, TEXT("MaterialDataCustomValue"), &Z_Registration_Info_UScriptStruct_MaterialDataCustomValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialDataCustomValue), 89809300U) },
		{ FMeshRendererData::StaticStruct, Z_Construct_UScriptStruct_FMeshRendererData_Statics::NewStructOps, TEXT("MeshRendererData"), &Z_Registration_Info_UScriptStruct_MeshRendererData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMeshRendererData), 2950786419U) },
		{ FSpawnTypeSettings::StaticStruct, Z_Construct_UScriptStruct_FSpawnTypeSettings_Statics::NewStructOps, TEXT("SpawnTypeSettings"), &Z_Registration_Info_UScriptStruct_SpawnTypeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnTypeSettings), 862542696U) },
		{ FDefaultBoidSettings::StaticStruct, Z_Construct_UScriptStruct_FDefaultBoidSettings_Statics::NewStructOps, TEXT("DefaultBoidSettings"), &Z_Registration_Info_UScriptStruct_DefaultBoidSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDefaultBoidSettings), 3298287953U) },
		{ FBoidSettings::StaticStruct, Z_Construct_UScriptStruct_FBoidSettings_Statics::NewStructOps, TEXT("BoidSettings"), &Z_Registration_Info_UScriptStruct_BoidSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBoidSettings), 4016894622U) },
		{ FGroupSettings::StaticStruct, Z_Construct_UScriptStruct_FGroupSettings_Statics::NewStructOps, TEXT("GroupSettings"), &Z_Registration_Info_UScriptStruct_GroupSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGroupSettings), 1658348544U) },
		{ FVolumeInfo::StaticStruct, Z_Construct_UScriptStruct_FVolumeInfo_Statics::NewStructOps, TEXT("VolumeInfo"), &Z_Registration_Info_UScriptStruct_VolumeInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVolumeInfo), 1849489545U) },
		{ FPerGroupDefaultSettings::StaticStruct, Z_Construct_UScriptStruct_FPerGroupDefaultSettings_Statics::NewStructOps, TEXT("PerGroupDefaultSettings"), &Z_Registration_Info_UScriptStruct_PerGroupDefaultSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerGroupDefaultSettings), 1850501982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlocksAnimationData, UFlocksAnimationData::StaticClass, TEXT("UFlocksAnimationData"), &Z_Registration_Info_UClass_UFlocksAnimationData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlocksAnimationData), 1767398976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_31535272(TEXT("/Script/Flocks"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
