// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlocks_init() {}
	FLOCKS_API UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature();
	FLOCKS_API UFunction* Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Flocks;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Flocks()
	{
		if (!Z_Registration_Info_UPackage__Script_Flocks.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Flocks_OnBoidHealthChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Flocks_OnBoidKilledDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Flocks",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD1890934,
				0x5445D1F5,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Flocks.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Flocks.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Flocks(Z_Construct_UPackage__Script_Flocks, TEXT("/Script/Flocks"), Z_Registration_Info_UPackage__Script_Flocks, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD1890934, 0x5445D1F5));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
