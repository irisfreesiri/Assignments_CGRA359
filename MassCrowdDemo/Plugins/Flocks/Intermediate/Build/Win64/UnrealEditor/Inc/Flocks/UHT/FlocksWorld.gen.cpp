// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocks/Public/FlocksWorld.h"
#include "Flocks/Public/FlocksTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlocksWorld() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
FLOCKS_API UClass* Z_Construct_UClass_AFlocksWorld();
FLOCKS_API UClass* Z_Construct_UClass_AFlocksWorld_NoRegister();
FLOCKS_API UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature();
FLOCKS_API UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FMeshRendererData();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FPerGroupDefaultSettings();
UPackage* Z_Construct_UPackage__Script_Flocks();
// End Cross Module References

// Begin Delegate FOnBoidKilledDelegate
struct Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics
{
	struct _Script_Flocks_eventOnBoidKilledDelegate_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		const AController* CausedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidKilledDelegate_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::NewProp_CausedBy = { "CausedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidKilledDelegate_Parms, CausedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausedBy_MetaData), NewProp_CausedBy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::NewProp_CausedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Flocks, nullptr, "OnBoidKilledDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::_Script_Flocks_eventOnBoidKilledDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::_Script_Flocks_eventOnBoidKilledDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBoidKilledDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBoidKilledDelegate, FFlocksBoidBlueprintHandle const& Boid, const AController* CausedBy)
{
	struct _Script_Flocks_eventOnBoidKilledDelegate_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		const AController* CausedBy;
	};
	_Script_Flocks_eventOnBoidKilledDelegate_Parms Parms;
	Parms.Boid=Boid;
	Parms.CausedBy=CausedBy;
	OnBoidKilledDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBoidKilledDelegate

// Begin Delegate FOnBoidHealthChangedDelegate
struct Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics
{
	struct _Script_Flocks_eventOnBoidHealthChangedDelegate_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float OldHealth;
		float NewHealth;
		const AController* CausedBy;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CausedBy_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_CausedBy = { "CausedBy", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms, CausedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CausedBy_MetaData), NewProp_CausedBy_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::NewProp_CausedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Flocks, nullptr, "OnBoidHealthChangedDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnBoidHealthChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnBoidHealthChangedDelegate, FFlocksBoidBlueprintHandle const& Boid, float OldHealth, float NewHealth, const AController* CausedBy)
{
	struct _Script_Flocks_eventOnBoidHealthChangedDelegate_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float OldHealth;
		float NewHealth;
		const AController* CausedBy;
	};
	_Script_Flocks_eventOnBoidHealthChangedDelegate_Parms Parms;
	Parms.Boid=Boid;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	Parms.CausedBy=CausedBy;
	OnBoidHealthChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnBoidHealthChangedDelegate

// Begin Class AFlocksWorld Function OnBoidAdded
struct FlocksWorld_eventOnBoidAdded_Parms
{
	FFlocksBoidBlueprintHandle Boid;
};
static FName NAME_AFlocksWorld_OnBoidAdded = FName(TEXT("OnBoidAdded"));
void AFlocksWorld::OnBoidAdded(FFlocksBoidBlueprintHandle const& Boid)
{
	FlocksWorld_eventOnBoidAdded_Parms Parms;
	Parms.Boid=Boid;
	ProcessEvent(FindFunctionChecked(NAME_AFlocksWorld_OnBoidAdded),&Parms);
}
struct Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidAdded_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::NewProp_Boid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksWorld, nullptr, "OnBoidAdded", nullptr, nullptr, Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::PropPointers), sizeof(FlocksWorld_eventOnBoidAdded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::Function_MetaDataParams) };
static_assert(sizeof(FlocksWorld_eventOnBoidAdded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlocksWorld_OnBoidAdded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksWorld_OnBoidAdded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksWorld Function OnBoidAdded

// Begin Class AFlocksWorld Function OnBoidHealthChanged
struct FlocksWorld_eventOnBoidHealthChanged_Parms
{
	FFlocksBoidBlueprintHandle Boid;
	float OldHealth;
	float NewHealth;
	AController* CausedBy;
};
static FName NAME_AFlocksWorld_OnBoidHealthChanged = FName(TEXT("OnBoidHealthChanged"));
void AFlocksWorld::OnBoidHealthChanged(FFlocksBoidBlueprintHandle const& Boid, float OldHealth, float NewHealth, AController* CausedBy)
{
	FlocksWorld_eventOnBoidHealthChanged_Parms Parms;
	Parms.Boid=Boid;
	Parms.OldHealth=OldHealth;
	Parms.NewHealth=NewHealth;
	Parms.CausedBy=CausedBy;
	ProcessEvent(FindFunctionChecked(NAME_AFlocksWorld_OnBoidHealthChanged),&Parms);
}
struct Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OldHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidHealthChanged_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_OldHealth = { "OldHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidHealthChanged_Parms, OldHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_NewHealth = { "NewHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidHealthChanged_Parms, NewHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_CausedBy = { "CausedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidHealthChanged_Parms, CausedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_OldHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_NewHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::NewProp_CausedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksWorld, nullptr, "OnBoidHealthChanged", nullptr, nullptr, Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::PropPointers), sizeof(FlocksWorld_eventOnBoidHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(FlocksWorld_eventOnBoidHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksWorld Function OnBoidHealthChanged

// Begin Class AFlocksWorld Function OnBoidKilled
struct FlocksWorld_eventOnBoidKilled_Parms
{
	FFlocksBoidBlueprintHandle Boid;
	AController* CausedBy;
};
static FName NAME_AFlocksWorld_OnBoidKilled = FName(TEXT("OnBoidKilled"));
void AFlocksWorld::OnBoidKilled(FFlocksBoidBlueprintHandle const& Boid, AController* CausedBy)
{
	FlocksWorld_eventOnBoidKilled_Parms Parms;
	Parms.Boid=Boid;
	Parms.CausedBy=CausedBy;
	ProcessEvent(FindFunctionChecked(NAME_AFlocksWorld_OnBoidKilled),&Parms);
}
struct Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CausedBy;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidKilled_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::NewProp_CausedBy = { "CausedBy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidKilled_Parms, CausedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::NewProp_CausedBy,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksWorld, nullptr, "OnBoidKilled", nullptr, nullptr, Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::PropPointers), sizeof(FlocksWorld_eventOnBoidKilled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::Function_MetaDataParams) };
static_assert(sizeof(FlocksWorld_eventOnBoidKilled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlocksWorld_OnBoidKilled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksWorld_OnBoidKilled_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksWorld Function OnBoidKilled

// Begin Class AFlocksWorld Function OnBoidRemoved
struct FlocksWorld_eventOnBoidRemoved_Parms
{
	FFlocksBoidBlueprintHandle Boid;
};
static FName NAME_AFlocksWorld_OnBoidRemoved = FName(TEXT("OnBoidRemoved"));
void AFlocksWorld::OnBoidRemoved(FFlocksBoidBlueprintHandle const& Boid)
{
	FlocksWorld_eventOnBoidRemoved_Parms Parms;
	Parms.Boid=Boid;
	ProcessEvent(FindFunctionChecked(NAME_AFlocksWorld_OnBoidRemoved),&Parms);
}
struct Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksWorld_eventOnBoidRemoved_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::NewProp_Boid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksWorld, nullptr, "OnBoidRemoved", nullptr, nullptr, Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::PropPointers), sizeof(FlocksWorld_eventOnBoidRemoved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::Function_MetaDataParams) };
static_assert(sizeof(FlocksWorld_eventOnBoidRemoved_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksWorld Function OnBoidRemoved

// Begin Class AFlocksWorld
void AFlocksWorld::StaticRegisterNativesAFlocksWorld()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlocksWorld);
UClass* Z_Construct_UClass_AFlocksWorld_NoRegister()
{
	return AFlocksWorld::StaticClass();
}
struct Z_Construct_UClass_AFlocksWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlocksWorld.h" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGPUSim_MetaData[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// If true the simulation will run on the GPU - otherwise it'll execute in parallel on the CPU\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nIf true the simulation will run on the GPU - otherwise it'll execute in parallel on the CPU\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTrackVolumeOverlaps_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNeighbourChecks_MetaData[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// The maximum number of neighbours per cell each boid will consider. Lower to increase framerate - raise to increase flocks accuracy\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nThe maximum number of neighbours per cell each boid will consider. Lower to increase framerate - raise to increase flocks accuracy\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// Spawn points to use as spawn locations\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nSpawn points to use as spawn locations\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// When performing flocking behaviour, the boids are first split up into cells. \n/// They will only perform neighbour checks on boids in their immediately surrounding cells. This is the unit size for those cells.\n/// Increasing this will further the neighbour check range but could also lower framerate.\n/// Ideally set to 0.75x the largest flocking influence range.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nWhen performing flocking behaviour, the boids are first split up into cells.\nThey will only perform neighbour checks on boids in their immediately surrounding cells. This is the unit size for those cells.\nIncreasing this will further the neighbour check range but could also lower framerate.\nIdeally set to 0.75x the largest flocking influence range.\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginReservedCustomDataValues_MetaData[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// These Custom data values are reserved for plugin use. Please start your index in materials after this value.\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nThese Custom data values are reserved for plugin use. Please start your index in materials after this value.\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoidHealthChangedDelegate_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoidKilledDelegate_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Meshes_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// The meshes that each boid can select from\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nThe meshes that each boid can select from\n</summary>" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "AllowPrivateAccess", "True" },
		{ "Category", "Flocks" },
		{ "Comment", "/// <summary>\n/// Settings array containing all group information about the boids\n/// </summary>\n" },
		{ "ModuleRelativePath", "Public/FlocksWorld.h" },
		{ "ToolTip", "<summary>\nSettings array containing all group information about the boids\n</summary>" },
	};
#endif // WITH_METADATA
	static void NewProp_bGPUSim_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGPUSim;
	static void NewProp_bTrackVolumeOverlaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTrackVolumeOverlaps;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNeighbourChecks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PluginReservedCustomDataValues;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BoidHealthChangedDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BoidKilledDelegate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Meshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Meshes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlocksWorld_OnBoidAdded, "OnBoidAdded" }, // 1355736194
		{ &Z_Construct_UFunction_AFlocksWorld_OnBoidHealthChanged, "OnBoidHealthChanged" }, // 2530281649
		{ &Z_Construct_UFunction_AFlocksWorld_OnBoidKilled, "OnBoidKilled" }, // 1060769366
		{ &Z_Construct_UFunction_AFlocksWorld_OnBoidRemoved, "OnBoidRemoved" }, // 903244409
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlocksWorld>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bGPUSim_SetBit(void* Obj)
{
	((AFlocksWorld*)Obj)->bGPUSim = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bGPUSim = { "bGPUSim", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFlocksWorld), &Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bGPUSim_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGPUSim_MetaData), NewProp_bGPUSim_MetaData) };
void Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bTrackVolumeOverlaps_SetBit(void* Obj)
{
	((AFlocksWorld*)Obj)->bTrackVolumeOverlaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bTrackVolumeOverlaps = { "bTrackVolumeOverlaps", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AFlocksWorld), &Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bTrackVolumeOverlaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTrackVolumeOverlaps_MetaData), NewProp_bTrackVolumeOverlaps_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_MaxNeighbourChecks = { "MaxNeighbourChecks", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, MaxNeighbourChecks), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNeighbourChecks_MetaData), NewProp_MaxNeighbourChecks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_SpawnPoints_Inner = { "SpawnPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_SpawnPoints = { "SpawnPoints", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, SpawnPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnPoints_MetaData), NewProp_SpawnPoints_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_PluginReservedCustomDataValues = { "PluginReservedCustomDataValues", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, PluginReservedCustomDataValues), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginReservedCustomDataValues_MetaData), NewProp_PluginReservedCustomDataValues_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_BoidHealthChangedDelegate = { "BoidHealthChangedDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, BoidHealthChangedDelegate), Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoidHealthChangedDelegate_MetaData), NewProp_BoidHealthChangedDelegate_MetaData) }; // 2796949612
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_BoidKilledDelegate = { "BoidKilledDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, BoidKilledDelegate), Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoidKilledDelegate_MetaData), NewProp_BoidKilledDelegate_MetaData) }; // 3131269388
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Meshes_Inner = { "Meshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMeshRendererData, METADATA_PARAMS(0, nullptr) }; // 2950786419
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Meshes = { "Meshes", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, Meshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Meshes_MetaData), NewProp_Meshes_MetaData) }; // 2950786419
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Settings_Inner = { "Settings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerGroupDefaultSettings, METADATA_PARAMS(0, nullptr) }; // 1850501982
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksWorld, Settings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1850501982
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlocksWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bGPUSim,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_bTrackVolumeOverlaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_MaxNeighbourChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_SpawnPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_SpawnPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_PluginReservedCustomDataValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_BoidHealthChangedDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_BoidKilledDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Meshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Meshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Settings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksWorld_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksWorld_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlocksWorld_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksWorld_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlocksWorld_Statics::ClassParams = {
	&AFlocksWorld::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlocksWorld_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksWorld_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksWorld_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlocksWorld_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlocksWorld()
{
	if (!Z_Registration_Info_UClass_AFlocksWorld.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlocksWorld.OuterSingleton, Z_Construct_UClass_AFlocksWorld_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlocksWorld.OuterSingleton;
}
template<> FLOCKS_API UClass* StaticClass<AFlocksWorld>()
{
	return AFlocksWorld::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlocksWorld);
// End Class AFlocksWorld

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlocksWorld, AFlocksWorld::StaticClass, TEXT("AFlocksWorld"), &Z_Registration_Info_UClass_AFlocksWorld, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlocksWorld), 1674970836U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_3466923026(TEXT("/Script/Flocks"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksWorld_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
