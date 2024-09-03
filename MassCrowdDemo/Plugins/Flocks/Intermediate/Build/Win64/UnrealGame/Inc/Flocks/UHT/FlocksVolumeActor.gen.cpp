// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocks/Public/FlocksVolumeActor.h"
#include "Flocks/Public/FlocksTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlocksVolumeActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
FLOCKS_API UClass* Z_Construct_UClass_AFlocksVolumeActor();
FLOCKS_API UClass* Z_Construct_UClass_AFlocksVolumeActor_NoRegister();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FVolumeInfo();
UPackage* Z_Construct_UPackage__Script_Flocks();
// End Cross Module References

// Begin Class AFlocksVolumeActor Function DisableVolume
struct Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksVolumeActor, nullptr, "DisableVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlocksVolumeActor::execDisableVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableVolume();
	P_NATIVE_END;
}
// End Class AFlocksVolumeActor Function DisableVolume

// Begin Class AFlocksVolumeActor Function EnableVolume
struct Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksVolumeActor, nullptr, "EnableVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlocksVolumeActor::execEnableVolume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableVolume();
	P_NATIVE_END;
}
// End Class AFlocksVolumeActor Function EnableVolume

// Begin Class AFlocksVolumeActor Function GetVolumeHandle
struct Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics
{
	struct FlocksVolumeActor_eventGetVolumeHandle_Parms
	{
		FFlocksVolumeBlueprintHandle OutHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksVolumeActor_eventGetVolumeHandle_Parms, OutHandle), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 373515902
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::NewProp_OutHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksVolumeActor, nullptr, "GetVolumeHandle", nullptr, nullptr, Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::FlocksVolumeActor_eventGetVolumeHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::FlocksVolumeActor_eventGetVolumeHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFlocksVolumeActor::execGetVolumeHandle)
{
	P_GET_STRUCT_REF(FFlocksVolumeBlueprintHandle,Z_Param_Out_OutHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetVolumeHandle(Z_Param_Out_OutHandle);
	P_NATIVE_END;
}
// End Class AFlocksVolumeActor Function GetVolumeHandle

// Begin Class AFlocksVolumeActor Function OnDisableVolume
static FName NAME_AFlocksVolumeActor_OnDisableVolume = FName(TEXT("OnDisableVolume"));
void AFlocksVolumeActor::OnDisableVolume()
{
	ProcessEvent(FindFunctionChecked(NAME_AFlocksVolumeActor_OnDisableVolume),NULL);
}
struct Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksVolumeActor, nullptr, "OnDisableVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksVolumeActor Function OnDisableVolume

// Begin Class AFlocksVolumeActor Function OnEnableVolume
static FName NAME_AFlocksVolumeActor_OnEnableVolume = FName(TEXT("OnEnableVolume"));
void AFlocksVolumeActor::OnEnableVolume()
{
	ProcessEvent(FindFunctionChecked(NAME_AFlocksVolumeActor_OnEnableVolume),NULL);
}
struct Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFlocksVolumeActor, nullptr, "OnEnableVolume", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AFlocksVolumeActor Function OnEnableVolume

// Begin Class AFlocksVolumeActor
void AFlocksVolumeActor::StaticRegisterNativesAFlocksVolumeActor()
{
	UClass* Class = AFlocksVolumeActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableVolume", &AFlocksVolumeActor::execDisableVolume },
		{ "EnableVolume", &AFlocksVolumeActor::execEnableVolume },
		{ "GetVolumeHandle", &AFlocksVolumeActor::execGetVolumeHandle },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFlocksVolumeActor);
UClass* Z_Construct_UClass_AFlocksVolumeActor_NoRegister()
{
	return AFlocksVolumeActor::StaticClass();
}
struct Z_Construct_UClass_AFlocksVolumeActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FlocksVolumeActor.h" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartEnabled_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksVolumeActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_StartEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_StartEnabled;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFlocksVolumeActor_DisableVolume, "DisableVolume" }, // 718881107
		{ &Z_Construct_UFunction_AFlocksVolumeActor_EnableVolume, "EnableVolume" }, // 2208259402
		{ &Z_Construct_UFunction_AFlocksVolumeActor_GetVolumeHandle, "GetVolumeHandle" }, // 2218314640
		{ &Z_Construct_UFunction_AFlocksVolumeActor_OnDisableVolume, "OnDisableVolume" }, // 2124379548
		{ &Z_Construct_UFunction_AFlocksVolumeActor_OnEnableVolume, "OnEnableVolume" }, // 544533666
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFlocksVolumeActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_StartEnabled_SetBit(void* Obj)
{
	((AFlocksVolumeActor*)Obj)->StartEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_StartEnabled = { "StartEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AFlocksVolumeActor), &Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_StartEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartEnabled_MetaData), NewProp_StartEnabled_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFlocksVolumeActor, Info), Z_Construct_UScriptStruct_FVolumeInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Info_MetaData), NewProp_Info_MetaData) }; // 1849489545
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFlocksVolumeActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_StartEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFlocksVolumeActor_Statics::NewProp_Info,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksVolumeActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFlocksVolumeActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksVolumeActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFlocksVolumeActor_Statics::ClassParams = {
	&AFlocksVolumeActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFlocksVolumeActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksVolumeActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFlocksVolumeActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AFlocksVolumeActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFlocksVolumeActor()
{
	if (!Z_Registration_Info_UClass_AFlocksVolumeActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFlocksVolumeActor.OuterSingleton, Z_Construct_UClass_AFlocksVolumeActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFlocksVolumeActor.OuterSingleton;
}
template<> FLOCKS_API UClass* StaticClass<AFlocksVolumeActor>()
{
	return AFlocksVolumeActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFlocksVolumeActor);
// End Class AFlocksVolumeActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksVolumeActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFlocksVolumeActor, AFlocksVolumeActor::StaticClass, TEXT("AFlocksVolumeActor"), &Z_Registration_Info_UClass_AFlocksVolumeActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFlocksVolumeActor), 3465477171U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksVolumeActor_h_763970933(TEXT("/Script/Flocks"),
	Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksVolumeActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksVolumeActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
