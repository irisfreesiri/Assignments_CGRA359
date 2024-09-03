// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Flocks/Public/FlocksStatics.h"
#include "Flocks/Public/FlocksTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlocksStatics() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FLOCKS_API UClass* Z_Construct_UClass_AFlocksWorld_NoRegister();
FLOCKS_API UClass* Z_Construct_UClass_UFlocksStatics();
FLOCKS_API UClass* Z_Construct_UClass_UFlocksStatics_NoRegister();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EGroupResponses();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode();
FLOCKS_API UEnum* Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FBoidSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FDefaultBoidSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FGroupSettings();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FLineTraceForBoidsResult();
FLOCKS_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnTypeSettings();
UPackage* Z_Construct_UPackage__Script_Flocks();
// End Cross Module References

// Begin ScriptStruct FLineTraceForBoidsResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult;
class UScriptStruct* FLineTraceForBoidsResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLineTraceForBoidsResult, (UObject*)Z_Construct_UPackage__Script_Flocks(), TEXT("LineTraceForBoidsResult"));
	}
	return Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.OuterSingleton;
}
template<> FLOCKS_API UScriptStruct* StaticStruct<FLineTraceForBoidsResult>()
{
	return FLineTraceForBoidsResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitWorldPosition_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dist_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitBoid_MetaData[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitWorldPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Dist;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLineTraceForBoidsResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitWorldPosition = { "HitWorldPosition", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTraceForBoidsResult, HitWorldPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitWorldPosition_MetaData), NewProp_HitWorldPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitNormal = { "HitNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTraceForBoidsResult, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitNormal_MetaData), NewProp_HitNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_Dist = { "Dist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTraceForBoidsResult, Dist), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dist_MetaData), NewProp_Dist_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitBoid = { "HitBoid", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLineTraceForBoidsResult, HitBoid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitBoid_MetaData), NewProp_HitBoid_MetaData) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitWorldPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_Dist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewProp_HitBoid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
	nullptr,
	&NewStructOps,
	"LineTraceForBoidsResult",
	Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::PropPointers),
	sizeof(FLineTraceForBoidsResult),
	alignof(FLineTraceForBoidsResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLineTraceForBoidsResult()
{
	if (!Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.InnerSingleton, Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult.InnerSingleton;
}
// End ScriptStruct FLineTraceForBoidsResult

// Begin Class UFlocksStatics Function AddBoid
struct Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics
{
	struct FlocksStatics_eventAddBoid_Parms
	{
		int32 Group;
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoid_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "AddBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::FlocksStatics_eventAddBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::FlocksStatics_eventAddBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_AddBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_AddBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execAddBoid)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::AddBoid(Z_Param_Group,Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function AddBoid

// Begin Class UFlocksStatics Function AddBoidAdvanced
struct Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics
{
	struct FlocksStatics_eventAddBoidAdvanced_Parms
	{
		int32 Group;
		int32 MeshIndex;
		FSpawnTypeSettings Settings;
		FFlocksBoidBlueprintHandle OutBoid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group, using the specified mesh at the specified location/rotation\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group, using the specified mesh at the specified location/rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBoid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAdvanced_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAdvanced_Parms, MeshIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAdvanced_Parms, Settings), Z_Construct_UScriptStruct_FSpawnTypeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 862542696
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_OutBoid = { "OutBoid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAdvanced_Parms, OutBoid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAdvanced_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAdvanced_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_OutBoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "AddBoidAdvanced", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::FlocksStatics_eventAddBoidAdvanced_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::FlocksStatics_eventAddBoidAdvanced_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execAddBoidAdvanced)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
	P_GET_STRUCT_REF(FSpawnTypeSettings,Z_Param_Out_Settings);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_OutBoid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::AddBoidAdvanced(Z_Param_Group,Z_Param_MeshIndex,Z_Param_Out_Settings,Z_Param_Out_OutBoid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function AddBoidAdvanced

// Begin Class UFlocksStatics Function AddBoidAtActor
struct Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics
{
	struct FlocksStatics_eventAddBoidAtActor_Parms
	{
		int32 Group;
		AActor* Actor;
		bool bRandomRotation;
		FRotator Rotation;
		float RandomRadius;
		FFlocksBoidBlueprintHandle OutBoid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group at the specified actor\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group at the specified actor" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static void NewProp_bRandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBoid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtActor_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtActor_Parms*)Obj)->bRandomRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtActor_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtActor_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_RandomRadius = { "RandomRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtActor_Parms, RandomRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_OutBoid = { "OutBoid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtActor_Parms, OutBoid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtActor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtActor_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_bRandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_RandomRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_OutBoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "AddBoidAtActor", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::FlocksStatics_eventAddBoidAtActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::FlocksStatics_eventAddBoidAtActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execAddBoidAtActor)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_UBOOL(Z_Param_bRandomRotation);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RandomRadius);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_OutBoid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::AddBoidAtActor(Z_Param_Group,Z_Param_Actor,Z_Param_bRandomRotation,Z_Param_Rotation,Z_Param_RandomRadius,Z_Param_Out_OutBoid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function AddBoidAtActor

// Begin Class UFlocksStatics Function AddBoidAtLocation
struct Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics
{
	struct FlocksStatics_eventAddBoidAtLocation_Parms
	{
		int32 Group;
		FVector Location;
		bool bRandomRotation;
		FRotator Rotation;
		float RandomRadius;
		FFlocksBoidBlueprintHandle OutBoid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group at the specified location/rotation\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group at the specified location/rotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static void NewProp_bRandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBoid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtLocation_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtLocation_Parms*)Obj)->bRandomRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtLocation_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtLocation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_RandomRadius = { "RandomRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtLocation_Parms, RandomRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_OutBoid = { "OutBoid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtLocation_Parms, OutBoid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtLocation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtLocation_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_bRandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_RandomRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_OutBoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "AddBoidAtLocation", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::FlocksStatics_eventAddBoidAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::FlocksStatics_eventAddBoidAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execAddBoidAtLocation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_UBOOL(Z_Param_bRandomRotation);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RandomRadius);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_OutBoid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::AddBoidAtLocation(Z_Param_Group,Z_Param_Location,Z_Param_bRandomRotation,Z_Param_Rotation,Z_Param_RandomRadius,Z_Param_Out_OutBoid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function AddBoidAtLocation

// Begin Class UFlocksStatics Function AddBoidAtSpawnPoint
struct Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics
{
	struct FlocksStatics_eventAddBoidAtSpawnPoint_Parms
	{
		int32 Group;
		int32 SpawnPoint;
		bool bRandomRotation;
		FRotator Rotation;
		float RandomRadius;
		FFlocksBoidBlueprintHandle OutBoid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group at the specified spawn point (See world settings) with the specified rotation\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group at the specified spawn point (See world settings) with the specified rotation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SpawnPoint;
	static void NewProp_bRandomRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutBoid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtSpawnPoint_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_SpawnPoint = { "SpawnPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtSpawnPoint_Parms, SpawnPoint), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_bRandomRotation_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtSpawnPoint_Parms*)Obj)->bRandomRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_bRandomRotation = { "bRandomRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtSpawnPoint_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_bRandomRotation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtSpawnPoint_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_RandomRadius = { "RandomRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtSpawnPoint_Parms, RandomRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_OutBoid = { "OutBoid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventAddBoidAtSpawnPoint_Parms, OutBoid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventAddBoidAtSpawnPoint_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventAddBoidAtSpawnPoint_Parms), &Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_SpawnPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_bRandomRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_RandomRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_OutBoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "AddBoidAtSpawnPoint", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::FlocksStatics_eventAddBoidAtSpawnPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::FlocksStatics_eventAddBoidAtSpawnPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execAddBoidAtSpawnPoint)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FIntProperty,Z_Param_SpawnPoint);
	P_GET_UBOOL(Z_Param_bRandomRotation);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_RandomRadius);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_OutBoid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::AddBoidAtSpawnPoint(Z_Param_Group,Z_Param_SpawnPoint,Z_Param_bRandomRotation,Z_Param_Rotation,Z_Param_RandomRadius,Z_Param_Out_OutBoid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function AddBoidAtSpawnPoint

// Begin Class UFlocksStatics Function ApplyAllBoidMaterialCustomValues
struct Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Call to apply the MaterialCustomValue changes on all boids\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ApplyAllBoidMaterialCustomValues Is No Longer Needed, Remove this node." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Call to apply the MaterialCustomValue changes on all boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ApplyAllBoidMaterialCustomValues", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execApplyAllBoidMaterialCustomValues)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ApplyAllBoidMaterialCustomValues();
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ApplyAllBoidMaterialCustomValues

// Begin Class UFlocksStatics Function ApplyBoidMaterialCustomValues
struct Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics
{
	struct FlocksStatics_eventApplyBoidMaterialCustomValues_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Call to apply the MaterialCustomValue changes to the specified boid\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ApplyBoidMaterialCustomValues Is No Longer Needed, Remove this node." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Call to apply the MaterialCustomValue changes to the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventApplyBoidMaterialCustomValues_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::NewProp_Boid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ApplyBoidMaterialCustomValues", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::FlocksStatics_eventApplyBoidMaterialCustomValues_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::FlocksStatics_eventApplyBoidMaterialCustomValues_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execApplyBoidMaterialCustomValues)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ApplyBoidMaterialCustomValues(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ApplyBoidMaterialCustomValues

// Begin Class UFlocksStatics Function BatchAddBoids
struct Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics
{
	struct FlocksStatics_eventBatchAddBoids_Parms
	{
		int32 Amount;
		TArray<FFlocksBoidBlueprintHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventBatchAddBoids_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventBatchAddBoids_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "BatchAddBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::FlocksStatics_eventBatchAddBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::FlocksStatics_eventBatchAddBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_BatchAddBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_BatchAddBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execBatchAddBoids)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFlocksBoidBlueprintHandle>*)Z_Param__Result=UFlocksStatics::BatchAddBoids(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function BatchAddBoids

// Begin Class UFlocksStatics Function BatchRemoveBoids
struct Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics
{
	struct FlocksStatics_eventBatchRemoveBoids_Parms
	{
		int32 Amount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Adds a new boid to the given group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Adds a new boid to the given group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventBatchRemoveBoids_Parms, Amount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::NewProp_Amount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "BatchRemoveBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::FlocksStatics_eventBatchRemoveBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::FlocksStatics_eventBatchRemoveBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execBatchRemoveBoids)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Amount);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::BatchRemoveBoids(Z_Param_Amount);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function BatchRemoveBoids

// Begin Class UFlocksStatics Function ClampAnimRateForBoid
struct Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics
{
	struct FlocksStatics_eventClampAnimRateForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinAnimRate;
		float MaxAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new anim rate clamped between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new anim rate clamped between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampAnimRateForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampAnimRateForBoid_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampAnimRateForBoid_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::NewProp_MaxAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ClampAnimRateForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::FlocksStatics_eventClampAnimRateForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::FlocksStatics_eventClampAnimRateForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execClampAnimRateForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ClampAnimRateForBoid(Z_Param_Out_Boid,Z_Param_MinAnimRate,Z_Param_MaxAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ClampAnimRateForBoid

// Begin Class UFlocksStatics Function ClampScaleForBoid
struct Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics
{
	struct FlocksStatics_eventClampScaleForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinScale;
		float MaxScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new scale clamped between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new scale clamped between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampScaleForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampScaleForBoid_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampScaleForBoid_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::NewProp_MaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ClampScaleForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::FlocksStatics_eventClampScaleForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::FlocksStatics_eventClampScaleForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execClampScaleForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ClampScaleForBoid(Z_Param_Out_Boid,Z_Param_MinScale,Z_Param_MaxScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ClampScaleForBoid

// Begin Class UFlocksStatics Function ClampSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics
{
	struct FlocksStatics_eventClampSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinSpeed;
		float MaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new speed clamped between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new speed clamped between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampSpeedForBoid_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampSpeedForBoid_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ClampSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::FlocksStatics_eventClampSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::FlocksStatics_eventClampSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execClampSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ClampSpeedForBoid(Z_Param_Out_Boid,Z_Param_MinSpeed,Z_Param_MaxSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ClampSpeedForBoid

// Begin Class UFlocksStatics Function ClampTurningSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics
{
	struct FlocksStatics_eventClampTurningSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinTurningSpeed;
		float MaxTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new turning speed clamped between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new turning speed clamped between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampTurningSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampTurningSpeedForBoid_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventClampTurningSpeedForBoid_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::NewProp_MaxTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "ClampTurningSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::FlocksStatics_eventClampTurningSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::FlocksStatics_eventClampTurningSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execClampTurningSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::ClampTurningSpeedForBoid(Z_Param_Out_Boid,Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function ClampTurningSpeedForBoid

// Begin Class UFlocksStatics Function DamageBoid
struct Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics
{
	struct FlocksStatics_eventDamageBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float Damage;
		AController* Instigator;
		bool OutKilled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Applies damage to the specified boid - returns whether the boid was killed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Applies damage to the specified boid - returns whether the boid was killed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_OutKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutKilled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventDamageBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventDamageBoid_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventDamageBoid_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_OutKilled_SetBit(void* Obj)
{
	((FlocksStatics_eventDamageBoid_Parms*)Obj)->OutKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_OutKilled = { "OutKilled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventDamageBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_OutKilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::NewProp_OutKilled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "DamageBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::FlocksStatics_eventDamageBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::FlocksStatics_eventDamageBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_DamageBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_DamageBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execDamageBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_GET_OBJECT(AController,Z_Param_Instigator);
	P_GET_UBOOL_REF(Z_Param_Out_OutKilled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::DamageBoid(Z_Param_Out_Boid,Z_Param_Damage,Z_Param_Instigator,Z_Param_Out_OutKilled);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function DamageBoid

// Begin Class UFlocksStatics Function GetAllBoidLocations
struct Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics
{
	struct FlocksStatics_eventGetAllBoidLocations_Parms
	{
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the location of all boids in the sim\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the location of all boids in the sim" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetAllBoidLocations", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::FlocksStatics_eventGetAllBoidLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::FlocksStatics_eventGetAllBoidLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetAllBoidLocations)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UFlocksStatics::GetAllBoidLocations();
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetAllBoidLocations

// Begin Class UFlocksStatics Function GetAllBoidsAffectedByVolume
struct Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics
{
	struct FlocksStatics_eventGetAllBoidsAffectedByVolume_Parms
	{
		FFlocksVolumeBlueprintHandle Volume;
		TArray<FFlocksBoidBlueprintHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidsAffectedByVolume_Parms, Volume), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) }; // 373515902
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidsAffectedByVolume_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetAllBoidsAffectedByVolume", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::FlocksStatics_eventGetAllBoidsAffectedByVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::FlocksStatics_eventGetAllBoidsAffectedByVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetAllBoidsAffectedByVolume)
{
	P_GET_STRUCT_REF(FFlocksVolumeBlueprintHandle,Z_Param_Out_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFlocksBoidBlueprintHandle>*)Z_Param__Result=UFlocksStatics::GetAllBoidsAffectedByVolume(Z_Param_Out_Volume);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetAllBoidsAffectedByVolume

// Begin Class UFlocksStatics Function GetAllBoidsInSphere
struct Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics
{
	struct FlocksStatics_eventGetAllBoidsInSphere_Parms
	{
		FVector Origin;
		float Radius;
		TArray<FFlocksBoidBlueprintHandle> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidsInSphere_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidsInSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetAllBoidsInSphere_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetAllBoidsInSphere", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::FlocksStatics_eventGetAllBoidsInSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::FlocksStatics_eventGetAllBoidsInSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetAllBoidsInSphere)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFlocksBoidBlueprintHandle>*)Z_Param__Result=UFlocksStatics::GetAllBoidsInSphere(Z_Param_Out_Origin,Z_Param_Radius);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetAllBoidsInSphere

// Begin Class UFlocksStatics Function GetBoidAnimRate
struct Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics
{
	struct FlocksStatics_eventGetBoidAnimRate_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidAnimRate_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidAnimRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidAnimRate", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::FlocksStatics_eventGetBoidAnimRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::FlocksStatics_eventGetBoidAnimRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidAnimRate)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidAnimRate(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidAnimRate

// Begin Class UFlocksStatics Function GetBoidAtIndex
struct Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics
{
	struct FlocksStatics_eventGetBoidAtIndex_Parms
	{
		int32 Index;
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Given an index, returns the boid - this allows for loops to iterate over every boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Given an index, returns the boid - this allows for loops to iterate over every boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidAtIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidAtIndex_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventGetBoidAtIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventGetBoidAtIndex_Parms), &Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidAtIndex", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::FlocksStatics_eventGetBoidAtIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::FlocksStatics_eventGetBoidAtIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidAtIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::GetBoidAtIndex(Z_Param_Index,Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidAtIndex

// Begin Class UFlocksStatics Function GetBoidBlueprintID
struct Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics
{
	struct FlocksStatics_eventGetBoidBlueprintID_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		int32 BlueprintID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidBlueprintID_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_BlueprintID = { "BlueprintID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidBlueprintID_Parms, BlueprintID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventGetBoidBlueprintID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventGetBoidBlueprintID_Parms), &Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_BlueprintID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidBlueprintID", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::FlocksStatics_eventGetBoidBlueprintID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::FlocksStatics_eventGetBoidBlueprintID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidBlueprintID)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_BlueprintID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::GetBoidBlueprintID(Z_Param_Out_Boid,Z_Param_Out_BlueprintID);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidBlueprintID

// Begin Class UFlocksStatics Function GetBoidFromBlueprintID
struct Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics
{
	struct FlocksStatics_eventGetBoidFromBlueprintID_Parms
	{
		int32 BlueprintID;
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlueprintID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_BlueprintID = { "BlueprintID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidFromBlueprintID_Parms, BlueprintID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidFromBlueprintID_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventGetBoidFromBlueprintID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventGetBoidFromBlueprintID_Parms), &Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_BlueprintID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidFromBlueprintID", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::FlocksStatics_eventGetBoidFromBlueprintID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::FlocksStatics_eventGetBoidFromBlueprintID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidFromBlueprintID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BlueprintID);
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::GetBoidFromBlueprintID(Z_Param_BlueprintID,Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidFromBlueprintID

// Begin Class UFlocksStatics Function GetBoidGroup
struct Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics
{
	struct FlocksStatics_eventGetBoidGroup_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidGroup_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidGroup_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::FlocksStatics_eventGetBoidGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::FlocksStatics_eventGetBoidGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidGroup)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFlocksStatics::GetBoidGroup(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidGroup

// Begin Class UFlocksStatics Function GetBoidHeading
struct Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics
{
	struct FlocksStatics_eventGetBoidHeading_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the rotation of the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the rotation of the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHeading_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHeading_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidHeading", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::FlocksStatics_eventGetBoidHeading_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::FlocksStatics_eventGetBoidHeading_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidHeading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidHeading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidHeading)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=UFlocksStatics::GetBoidHeading(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidHeading

// Begin Class UFlocksStatics Function GetBoidHealth
struct Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics
{
	struct FlocksStatics_eventGetBoidHealth_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the health of the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the health of the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHealth_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidHealth", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::FlocksStatics_eventGetBoidHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::FlocksStatics_eventGetBoidHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidHealth)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidHealth(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidHealth

// Begin Class UFlocksStatics Function GetBoidHealthPercent
struct Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics
{
	struct FlocksStatics_eventGetBoidHealthPercent_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the percentage of health of the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the percentage of health of the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHealthPercent_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidHealthPercent_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidHealthPercent", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::FlocksStatics_eventGetBoidHealthPercent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::FlocksStatics_eventGetBoidHealthPercent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidHealthPercent)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidHealthPercent(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidHealthPercent

// Begin Class UFlocksStatics Function GetBoidLocation
struct Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics
{
	struct FlocksStatics_eventGetBoidLocation_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the location of the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the location of the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidLocation_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidLocation", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::FlocksStatics_eventGetBoidLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::FlocksStatics_eventGetBoidLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidLocation)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UFlocksStatics::GetBoidLocation(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidLocation

// Begin Class UFlocksStatics Function GetBoidLocations
struct Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics
{
	struct FlocksStatics_eventGetBoidLocations_Parms
	{
		TArray<FFlocksBoidBlueprintHandle> Boids;
		TArray<FVector> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the location of all boids of the passed in handles\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the location of all boids of the passed in handles" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Boids;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_Boids_Inner = { "Boids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_Boids = { "Boids", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidLocations_Parms, Boids), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 100144147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidLocations_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_Boids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_Boids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidLocations", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::FlocksStatics_eventGetBoidLocations_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::FlocksStatics_eventGetBoidLocations_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidLocations()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidLocations_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidLocations)
{
	P_GET_TARRAY(FFlocksBoidBlueprintHandle,Z_Param_Boids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FVector>*)Z_Param__Result=UFlocksStatics::GetBoidLocations(Z_Param_Boids);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidLocations

// Begin Class UFlocksStatics Function GetBoidMaxHealth
struct Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics
{
	struct FlocksStatics_eventGetBoidMaxHealth_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the Max Health of the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the Max Health of the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidMaxHealth_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidMaxHealth_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidMaxHealth", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::FlocksStatics_eventGetBoidMaxHealth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::FlocksStatics_eventGetBoidMaxHealth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidMaxHealth)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidMaxHealth(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidMaxHealth

// Begin Class UFlocksStatics Function GetBoidRadiusAndCenter
struct Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics
{
	struct FlocksStatics_eventGetBoidRadiusAndCenter_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float OutRadius;
		FVector OutCenter;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the radius and center of the boid's bounds (this is used for line trace checks)\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the radius and center of the boid's bounds (this is used for line trace checks)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutRadius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutCenter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidRadiusAndCenter_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_OutRadius = { "OutRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidRadiusAndCenter_Parms, OutRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_OutCenter = { "OutCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidRadiusAndCenter_Parms, OutCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_OutRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::NewProp_OutCenter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidRadiusAndCenter", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::FlocksStatics_eventGetBoidRadiusAndCenter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::FlocksStatics_eventGetBoidRadiusAndCenter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidRadiusAndCenter)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutRadius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutCenter);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::GetBoidRadiusAndCenter(Z_Param_Out_Boid,Z_Param_Out_OutRadius,Z_Param_Out_OutCenter);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidRadiusAndCenter

// Begin Class UFlocksStatics Function GetBoidScale
struct Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics
{
	struct FlocksStatics_eventGetBoidScale_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidScale_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidScale", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::FlocksStatics_eventGetBoidScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::FlocksStatics_eventGetBoidScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidScale)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidScale(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidScale

// Begin Class UFlocksStatics Function GetBoidSettings
struct Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics
{
	struct FlocksStatics_eventGetBoidSettings_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		FBoidSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidSettings_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoidSettings, METADATA_PARAMS(0, nullptr) }; // 4016894622
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidSettings", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::FlocksStatics_eventGetBoidSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::FlocksStatics_eventGetBoidSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidSettings)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoidSettings*)Z_Param__Result=UFlocksStatics::GetBoidSettings(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidSettings

// Begin Class UFlocksStatics Function GetBoidSpeed
struct Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics
{
	struct FlocksStatics_eventGetBoidSpeed_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidSpeed_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidSpeed", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::FlocksStatics_eventGetBoidSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::FlocksStatics_eventGetBoidSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidSpeed)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidSpeed(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidSpeed

// Begin Class UFlocksStatics Function GetBoidTurningSpeed
struct Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics
{
	struct FlocksStatics_eventGetBoidTurningSpeed_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidTurningSpeed_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetBoidTurningSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetBoidTurningSpeed", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::FlocksStatics_eventGetBoidTurningSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::FlocksStatics_eventGetBoidTurningSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetBoidTurningSpeed)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UFlocksStatics::GetBoidTurningSpeed(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetBoidTurningSpeed

// Begin Class UFlocksStatics Function GetFlocksWorld
struct Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics
{
	struct FlocksStatics_eventGetFlocksWorld_Parms
	{
		AFlocksWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetFlocksWorld_Parms, ReturnValue), Z_Construct_UClass_AFlocksWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetFlocksWorld", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::FlocksStatics_eventGetFlocksWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::FlocksStatics_eventGetFlocksWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetFlocksWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AFlocksWorld**)Z_Param__Result=UFlocksStatics::GetFlocksWorld();
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetFlocksWorld

// Begin Class UFlocksStatics Function GetGroupSettings
struct Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics
{
	struct FlocksStatics_eventGetGroupSettings_Parms
	{
		int32 Group;
		FGroupSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetGroupSettings_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetGroupSettings_Parms, Settings), Z_Construct_UScriptStruct_FGroupSettings, METADATA_PARAMS(0, nullptr) }; // 1658348544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetGroupSettings", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::FlocksStatics_eventGetGroupSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::FlocksStatics_eventGetGroupSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetGroupSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetGroupSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetGroupSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT_REF(FGroupSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::GetGroupSettings(Z_Param_Group,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetGroupSettings

// Begin Class UFlocksStatics Function GetMaterialInstances
struct Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics
{
	struct FlocksStatics_eventGetMaterialInstances_Parms
	{
		int32 MeshIndex;
		TArray<UMaterialInstanceDynamic*> OutMaterials;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the material instances for the given mesh index\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the material instances for the given mesh index" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMaterials;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetMaterialInstances_Parms, MeshIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_OutMaterials_Inner = { "OutMaterials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_OutMaterials = { "OutMaterials", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetMaterialInstances_Parms, OutMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_OutMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::NewProp_OutMaterials,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetMaterialInstances", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::FlocksStatics_eventGetMaterialInstances_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::FlocksStatics_eventGetMaterialInstances_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetMaterialInstances)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
	P_GET_TARRAY_REF(UMaterialInstanceDynamic*,Z_Param_Out_OutMaterials);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::GetMaterialInstances(Z_Param_MeshIndex,Z_Param_Out_OutMaterials);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetMaterialInstances

// Begin Class UFlocksStatics Function GetMaxGroups
struct Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics
{
	struct FlocksStatics_eventGetMaxGroups_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the maximum number of supported groups\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the maximum number of supported groups" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetMaxGroups_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetMaxGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::FlocksStatics_eventGetMaxGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::FlocksStatics_eventGetMaxGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetMaxGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetMaxGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetMaxGroups)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFlocksStatics::GetMaxGroups();
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetMaxGroups

// Begin Class UFlocksStatics Function GetMeshForBoid
struct Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics
{
	struct FlocksStatics_eventGetMeshForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		UStaticMesh* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the static mesh the boid is using, or null if its an invalid boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the static mesh the boid is using, or null if its an invalid boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetMeshForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetMeshForBoid_Parms, ReturnValue), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetMeshForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::FlocksStatics_eventGetMeshForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::FlocksStatics_eventGetMeshForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetMeshForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UStaticMesh**)Z_Param__Result=UFlocksStatics::GetMeshForBoid(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetMeshForBoid

// Begin Class UFlocksStatics Function GetNumBoids
struct Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics
{
	struct FlocksStatics_eventGetNumBoids_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns the number of boids in the simulation\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns the number of boids in the simulation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetNumBoids_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetNumBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::FlocksStatics_eventGetNumBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::FlocksStatics_eventGetNumBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetNumBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetNumBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetNumBoids)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFlocksStatics::GetNumBoids();
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetNumBoids

// Begin Class UFlocksStatics Function GetNumBoidsAffectedByVolume
struct Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics
{
	struct FlocksStatics_eventGetNumBoidsAffectedByVolume_Parms
	{
		FFlocksVolumeBlueprintHandle Volume;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetNumBoidsAffectedByVolume_Parms, Volume), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) }; // 373515902
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetNumBoidsAffectedByVolume_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetNumBoidsAffectedByVolume", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::FlocksStatics_eventGetNumBoidsAffectedByVolume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::FlocksStatics_eventGetNumBoidsAffectedByVolume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetNumBoidsAffectedByVolume)
{
	P_GET_STRUCT_REF(FFlocksVolumeBlueprintHandle,Z_Param_Out_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFlocksStatics::GetNumBoidsAffectedByVolume(Z_Param_Out_Volume);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetNumBoidsAffectedByVolume

// Begin Class UFlocksStatics Function GetVolumeBounds
struct Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics
{
	struct FlocksStatics_eventGetVolumeBounds_Parms
	{
		FFlocksVolumeBlueprintHandle Volume;
		FVector BoundsCenter;
		FVector BoundsExtents;
		float BoundsRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsCenter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoundsExtents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BoundsRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetVolumeBounds_Parms, Volume), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) }; // 373515902
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsCenter = { "BoundsCenter", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetVolumeBounds_Parms, BoundsCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsExtents = { "BoundsExtents", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetVolumeBounds_Parms, BoundsExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsRadius = { "BoundsRadius", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventGetVolumeBounds_Parms, BoundsRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::NewProp_BoundsRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "GetVolumeBounds", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::FlocksStatics_eventGetVolumeBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::FlocksStatics_eventGetVolumeBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execGetVolumeBounds)
{
	P_GET_STRUCT_REF(FFlocksVolumeBlueprintHandle,Z_Param_Out_Volume);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsCenter);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_BoundsExtents);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_BoundsRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::GetVolumeBounds(Z_Param_Out_Volume,Z_Param_Out_BoundsCenter,Z_Param_Out_BoundsExtents,Z_Param_Out_BoundsRadius);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function GetVolumeBounds

// Begin Class UFlocksStatics Function HealBoid
struct Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics
{
	struct FlocksStatics_eventHealBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float Heal;
		AController* Instigator;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Restores health on the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Restores health on the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Heal;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventHealBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Heal = { "Heal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventHealBoid_Parms, Heal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventHealBoid_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Heal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::NewProp_Instigator,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "HealBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::FlocksStatics_eventHealBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::FlocksStatics_eventHealBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_HealBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_HealBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execHealBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Heal);
	P_GET_OBJECT(AController,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::HealBoid(Z_Param_Out_Boid,Z_Param_Heal,Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function HealBoid

// Begin Class UFlocksStatics Function IsBoidFleeing
struct Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics
{
	struct FlocksStatics_eventIsBoidFleeing_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventIsBoidFleeing_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventIsBoidFleeing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventIsBoidFleeing_Parms), &Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "IsBoidFleeing", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::FlocksStatics_eventIsBoidFleeing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::FlocksStatics_eventIsBoidFleeing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execIsBoidFleeing)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::IsBoidFleeing(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function IsBoidFleeing

// Begin Class UFlocksStatics Function IsBoidGoaling
struct Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics
{
	struct FlocksStatics_eventIsBoidGoaling_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventIsBoidGoaling_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventIsBoidGoaling_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventIsBoidGoaling_Parms), &Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "IsBoidGoaling", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::FlocksStatics_eventIsBoidGoaling_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::FlocksStatics_eventIsBoidGoaling_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execIsBoidGoaling)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::IsBoidGoaling(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function IsBoidGoaling

// Begin Class UFlocksStatics Function IsValidBoidHandle
struct Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics
{
	struct FlocksStatics_eventIsValidBoidHandle_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns whether the specified boid handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns whether the specified boid handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventIsValidBoidHandle_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
void Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventIsValidBoidHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventIsValidBoidHandle_Parms), &Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "IsValidBoidHandle", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::FlocksStatics_eventIsValidBoidHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::FlocksStatics_eventIsValidBoidHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execIsValidBoidHandle)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::IsValidBoidHandle(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function IsValidBoidHandle

// Begin Class UFlocksStatics Function IsValidVolumeHandle
struct Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics
{
	struct FlocksStatics_eventIsValidVolumeHandle_Parms
	{
		FFlocksVolumeBlueprintHandle Volume;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Returns whether the specified volume handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Returns whether the specified volume handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Volume_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Volume;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventIsValidVolumeHandle_Parms, Volume), Z_Construct_UScriptStruct_FFlocksVolumeBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Volume_MetaData), NewProp_Volume_MetaData) }; // 373515902
void Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventIsValidVolumeHandle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventIsValidVolumeHandle_Parms), &Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_Volume,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "IsValidVolumeHandle", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::FlocksStatics_eventIsValidVolumeHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::FlocksStatics_eventIsValidVolumeHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execIsValidVolumeHandle)
{
	P_GET_STRUCT_REF(FFlocksVolumeBlueprintHandle,Z_Param_Out_Volume);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::IsValidVolumeHandle(Z_Param_Out_Volume);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function IsValidVolumeHandle

// Begin Class UFlocksStatics Function LineTraceForBoid
struct Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics
{
	struct FlocksStatics_eventLineTraceForBoid_Parms
	{
		FVector Start;
		FVector End;
		FLineTraceForBoidsResult Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Traces a line between the start and end and returns info about the boid that was hit\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Traces a line between the start and end and returns info about the boid that was hit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoid_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoid_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoid_Parms, Result), Z_Construct_UScriptStruct_FLineTraceForBoidsResult, METADATA_PARAMS(0, nullptr) }; // 3301355469
void Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventLineTraceForBoid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventLineTraceForBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "LineTraceForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::FlocksStatics_eventLineTraceForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::FlocksStatics_eventLineTraceForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execLineTraceForBoid)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_STRUCT_REF(FLineTraceForBoidsResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::LineTraceForBoid(Z_Param_Start,Z_Param_End,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function LineTraceForBoid

// Begin Class UFlocksStatics Function LineTraceForBoids
struct Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics
{
	struct FlocksStatics_eventLineTraceForBoids_Parms
	{
		FVector Start;
		FVector End;
		TArray<FLineTraceForBoidsResult> Result;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Traces a line between the start and end and returns info about the boids that were hit\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Traces a line between the start and end and returns info about the boids that were hit" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Result;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoids_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoids_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Result_Inner = { "Result", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLineTraceForBoidsResult, METADATA_PARAMS(0, nullptr) }; // 3301355469
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventLineTraceForBoids_Parms, Result), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3301355469
void Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FlocksStatics_eventLineTraceForBoids_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventLineTraceForBoids_Parms), &Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Result_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "LineTraceForBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::FlocksStatics_eventLineTraceForBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::FlocksStatics_eventLineTraceForBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execLineTraceForBoids)
{
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_TARRAY_REF(FLineTraceForBoidsResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFlocksStatics::LineTraceForBoids(Z_Param_Start,Z_Param_End,Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function LineTraceForBoids

// Begin Class UFlocksStatics Function RandomizeAnimRateForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics
{
	struct FlocksStatics_eventRandomizeAnimRateForAllBoids_Parms
	{
		float MinAnimRate;
		float MaxAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new anim rate randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new anim rate randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForAllBoids_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForAllBoids_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::NewProp_MaxAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeAnimRateForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::FlocksStatics_eventRandomizeAnimRateForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::FlocksStatics_eventRandomizeAnimRateForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeAnimRateForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeAnimRateForAllBoids(Z_Param_MinAnimRate,Z_Param_MaxAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeAnimRateForAllBoids

// Begin Class UFlocksStatics Function RandomizeAnimRateForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms
	{
		int32 Group;
		float MinAnimRate;
		float MaxAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new anim rate randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new anim rate randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::NewProp_MaxAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeAnimRateForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeAnimRateForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeAnimRateForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeAnimRateForAllBoidsInGroup(Z_Param_Group,Z_Param_MinAnimRate,Z_Param_MaxAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeAnimRateForAllBoidsInGroup

// Begin Class UFlocksStatics Function RandomizeAnimRateForBoid
struct Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics
{
	struct FlocksStatics_eventRandomizeAnimRateForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinAnimRate;
		float MaxAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new anim rate randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new anim rate randomly between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForBoid_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeAnimRateForBoid_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::NewProp_MaxAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeAnimRateForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::FlocksStatics_eventRandomizeAnimRateForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::FlocksStatics_eventRandomizeAnimRateForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeAnimRateForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeAnimRateForBoid(Z_Param_Out_Boid,Z_Param_MinAnimRate,Z_Param_MaxAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeAnimRateForBoid

// Begin Class UFlocksStatics Function RandomizeScaleForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics
{
	struct FlocksStatics_eventRandomizeScaleForAllBoids_Parms
	{
		float MinScale;
		float MaxScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new scale randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new scale randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForAllBoids_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForAllBoids_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::NewProp_MaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeScaleForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::FlocksStatics_eventRandomizeScaleForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::FlocksStatics_eventRandomizeScaleForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeScaleForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeScaleForAllBoids(Z_Param_MinScale,Z_Param_MaxScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeScaleForAllBoids

// Begin Class UFlocksStatics Function RandomizeScaleForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms
	{
		int32 Group;
		float MinScale;
		float MaxScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new scale randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new scale randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::NewProp_MaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeScaleForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeScaleForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeScaleForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeScaleForAllBoidsInGroup(Z_Param_Group,Z_Param_MinScale,Z_Param_MaxScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeScaleForAllBoidsInGroup

// Begin Class UFlocksStatics Function RandomizeScaleForBoid
struct Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics
{
	struct FlocksStatics_eventRandomizeScaleForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinScale;
		float MaxScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new scale randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new scale randomly between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForBoid_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeScaleForBoid_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::NewProp_MaxScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeScaleForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::FlocksStatics_eventRandomizeScaleForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::FlocksStatics_eventRandomizeScaleForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeScaleForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeScaleForBoid(Z_Param_Out_Boid,Z_Param_MinScale,Z_Param_MaxScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeScaleForBoid

// Begin Class UFlocksStatics Function RandomizeSpeedForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics
{
	struct FlocksStatics_eventRandomizeSpeedForAllBoids_Parms
	{
		float MinSpeed;
		float MaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new speed randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForAllBoids_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForAllBoids_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeSpeedForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::FlocksStatics_eventRandomizeSpeedForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::FlocksStatics_eventRandomizeSpeedForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeSpeedForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeSpeedForAllBoids(Z_Param_MinSpeed,Z_Param_MaxSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeSpeedForAllBoids

// Begin Class UFlocksStatics Function RandomizeSpeedForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms
	{
		int32 Group;
		float MinSpeed;
		float MaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new speed randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeSpeedForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeSpeedForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeSpeedForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeSpeedForAllBoidsInGroup(Z_Param_Group,Z_Param_MinSpeed,Z_Param_MaxSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeSpeedForAllBoidsInGroup

// Begin Class UFlocksStatics Function RandomizeSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics
{
	struct FlocksStatics_eventRandomizeSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinSpeed;
		float MaxSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new speed randomly between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForBoid_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeSpeedForBoid_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::NewProp_MaxSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::FlocksStatics_eventRandomizeSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::FlocksStatics_eventRandomizeSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeSpeedForBoid(Z_Param_Out_Boid,Z_Param_MinSpeed,Z_Param_MaxSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeSpeedForBoid

// Begin Class UFlocksStatics Function RandomizeTurningSpeedForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics
{
	struct FlocksStatics_eventRandomizeTurningSpeedForAllBoids_Parms
	{
		float MinTurningSpeed;
		float MaxTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new turning speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new turning speed randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForAllBoids_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForAllBoids_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::NewProp_MaxTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeTurningSpeedForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::FlocksStatics_eventRandomizeTurningSpeedForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::FlocksStatics_eventRandomizeTurningSpeedForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeTurningSpeedForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeTurningSpeedForAllBoids(Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeTurningSpeedForAllBoids

// Begin Class UFlocksStatics Function RandomizeTurningSpeedForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms
	{
		int32 Group;
		float MinTurningSpeed;
		float MaxTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new turning speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new turning speed randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::NewProp_MaxTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeTurningSpeedForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeTurningSpeedForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeTurningSpeedForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeTurningSpeedForAllBoidsInGroup(Z_Param_Group,Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeTurningSpeedForAllBoidsInGroup

// Begin Class UFlocksStatics Function RandomizeTurningSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics
{
	struct FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinTurningSpeed;
		float MaxTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new turning speed randomly between the given range\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new turning speed randomly between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::NewProp_MaxTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeTurningSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::FlocksStatics_eventRandomizeTurningSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeTurningSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeTurningSpeedForBoid(Z_Param_Out_Boid,Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeTurningSpeedForBoid

// Begin Class UFlocksStatics Function RandomizeVelocityForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics
{
	struct FlocksStatics_eventRandomizeVelocityForAllBoids_Parms
	{
		float MinVelocity;
		float MaxVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new velocity randomly between the given range\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use RandomizeVelocityForAllBoids Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new velocity randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForAllBoids_Parms, MinVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForAllBoids_Parms, MaxVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::NewProp_MaxVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeVelocityForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::FlocksStatics_eventRandomizeVelocityForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::FlocksStatics_eventRandomizeVelocityForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeVelocityForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeVelocityForAllBoids(Z_Param_MinVelocity,Z_Param_MaxVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeVelocityForAllBoids

// Begin Class UFlocksStatics Function RandomizeVelocityForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms
	{
		int32 Group;
		float MinVelocity;
		float MaxVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new velocity randomly between the given range\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use RandomizeVelocityForAllBoidsInGroup Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new velocity randomly between the given range" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms, MinVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms, MaxVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::NewProp_MaxVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeVelocityForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::FlocksStatics_eventRandomizeVelocityForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeVelocityForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeVelocityForAllBoidsInGroup(Z_Param_Group,Z_Param_MinVelocity,Z_Param_MaxVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeVelocityForAllBoidsInGroup

// Begin Class UFlocksStatics Function RandomizeVelocityForBoid
struct Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics
{
	struct FlocksStatics_eventRandomizeVelocityForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float MinVelocity;
		float MaxVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new velocity randomly between the given range\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use RandomizeVelocityForBoid Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new velocity randomly between the given range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForBoid_Parms, MinVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRandomizeVelocityForBoid_Parms, MaxVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::NewProp_MaxVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RandomizeVelocityForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::FlocksStatics_eventRandomizeVelocityForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::FlocksStatics_eventRandomizeVelocityForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRandomizeVelocityForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RandomizeVelocityForBoid(Z_Param_Out_Boid,Z_Param_MinVelocity,Z_Param_MaxVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RandomizeVelocityForBoid

// Begin Class UFlocksStatics Function RemoveBoid
struct Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics
{
	struct FlocksStatics_eventRemoveBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Removes a boid given a boid handle\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Removes a boid given a boid handle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventRemoveBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::NewProp_Boid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "RemoveBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::FlocksStatics_eventRemoveBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::FlocksStatics_eventRemoveBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_RemoveBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_RemoveBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execRemoveBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::RemoveBoid(Z_Param_Out_Boid);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function RemoveBoid

// Begin Class UFlocksStatics Function SetAnimRateForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics
{
	struct FlocksStatics_eventSetAnimRateForAllBoids_Parms
	{
		float NewAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new anim rate\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new anim rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::NewProp_NewAnimRate = { "NewAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetAnimRateForAllBoids_Parms, NewAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::NewProp_NewAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetAnimRateForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::FlocksStatics_eventSetAnimRateForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::FlocksStatics_eventSetAnimRateForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetAnimRateForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetAnimRateForAllBoids(Z_Param_NewAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetAnimRateForAllBoids

// Begin Class UFlocksStatics Function SetAnimRateForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics
{
	struct FlocksStatics_eventSetAnimRateForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new animation rate\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new animation rate" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetAnimRateForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::NewProp_NewAnimRate = { "NewAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetAnimRateForBoid_Parms, NewAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::NewProp_NewAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetAnimRateForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::FlocksStatics_eventSetAnimRateForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::FlocksStatics_eventSetAnimRateForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetAnimRateForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetAnimRateForBoid(Z_Param_Out_Boid,Z_Param_NewAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetAnimRateForBoid

// Begin Class UFlocksStatics Function SetAnimRateForBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetAnimRateForBoidsInGroup_Parms
	{
		int32 Group;
		float NewAnimRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new anim rate\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new anim rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAnimRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetAnimRateForBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::NewProp_NewAnimRate = { "NewAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetAnimRateForBoidsInGroup_Parms, NewAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::NewProp_NewAnimRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetAnimRateForBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::FlocksStatics_eventSetAnimRateForBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::FlocksStatics_eventSetAnimRateForBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetAnimRateForBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAnimRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetAnimRateForBoidsInGroup(Z_Param_Group,Z_Param_NewAnimRate);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetAnimRateForBoidsInGroup

// Begin Class UFlocksStatics Function SetBoidMaterialCustomValue
struct Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics
{
	struct FlocksStatics_eventSetBoidMaterialCustomValue_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		int32 ValueIndex;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Sets a custom material float on the specified boid. This relates to the PerInstanceCustomData in the material.\n/// If applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Sets a custom material float on the specified boid. This relates to the PerInstanceCustomData in the material.\nIf applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetBoidMaterialCustomValue_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_ValueIndex = { "ValueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetBoidMaterialCustomValue_Parms, ValueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueIndex_MetaData), NewProp_ValueIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetBoidMaterialCustomValue_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_ValueIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetBoidMaterialCustomValue", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::FlocksStatics_eventSetBoidMaterialCustomValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::FlocksStatics_eventSetBoidMaterialCustomValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetBoidMaterialCustomValue)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetBoidMaterialCustomValue(Z_Param_Out_Boid,Z_Param_ValueIndex,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetBoidMaterialCustomValue

// Begin Class UFlocksStatics Function SetBoidMaterialCustomValueOnAll
struct Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics
{
	struct FlocksStatics_eventSetBoidMaterialCustomValueOnAll_Parms
	{
		int32 ValueIndex;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Sets a custom material float on all boids. This relates to the PerInstanceCustomData in the material.\n/// If applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Sets a custom material float on all boids. This relates to the PerInstanceCustomData in the material.\nIf applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValueIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ValueIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::NewProp_ValueIndex = { "ValueIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetBoidMaterialCustomValueOnAll_Parms, ValueIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValueIndex_MetaData), NewProp_ValueIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetBoidMaterialCustomValueOnAll_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::NewProp_ValueIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetBoidMaterialCustomValueOnAll", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::FlocksStatics_eventSetBoidMaterialCustomValueOnAll_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::FlocksStatics_eventSetBoidMaterialCustomValueOnAll_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetBoidMaterialCustomValueOnAll)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ValueIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetBoidMaterialCustomValueOnAll(Z_Param_ValueIndex,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetBoidMaterialCustomValueOnAll

// Begin Class UFlocksStatics Function SetGroupAlignment
struct Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics
{
	struct FlocksStatics_eventSetGroupAlignment_Parms
	{
		int32 Group;
		float Alignment;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the alignment weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the alignment weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alignment;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupAlignment_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::NewProp_Alignment = { "Alignment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupAlignment_Parms, Alignment), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::NewProp_Alignment,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupAlignment", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::FlocksStatics_eventSetGroupAlignment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::FlocksStatics_eventSetGroupAlignment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupAlignment)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alignment);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupAlignment(Z_Param_Group,Z_Param_Alignment);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupAlignment

// Begin Class UFlocksStatics Function SetGroupAlignmentRadius
struct Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics
{
	struct FlocksStatics_eventSetGroupAlignmentRadius_Parms
	{
		int32 Group;
		float AlignmentRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the alignment radius for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the alignment radius for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignmentRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupAlignmentRadius_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::NewProp_AlignmentRadius = { "AlignmentRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupAlignmentRadius_Parms, AlignmentRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::NewProp_AlignmentRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupAlignmentRadius", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::FlocksStatics_eventSetGroupAlignmentRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::FlocksStatics_eventSetGroupAlignmentRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupAlignmentRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AlignmentRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupAlignmentRadius(Z_Param_Group,Z_Param_AlignmentRadius);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupAlignmentRadius

// Begin Class UFlocksStatics Function SetGroupCohesion
struct Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics
{
	struct FlocksStatics_eventSetGroupCohesion_Parms
	{
		int32 Group;
		float Cohesion;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the cohesion weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the cohesion weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Cohesion;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupCohesion_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::NewProp_Cohesion = { "Cohesion", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupCohesion_Parms, Cohesion), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::NewProp_Cohesion,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupCohesion", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::FlocksStatics_eventSetGroupCohesion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::FlocksStatics_eventSetGroupCohesion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupCohesion)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Cohesion);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupCohesion(Z_Param_Group,Z_Param_Cohesion);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupCohesion

// Begin Class UFlocksStatics Function SetGroupCohesionRadius
struct Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics
{
	struct FlocksStatics_eventSetGroupCohesionRadius_Parms
	{
		int32 Group;
		float CohesionRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the cohesion radius for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the cohesion radius for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CohesionRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupCohesionRadius_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::NewProp_CohesionRadius = { "CohesionRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupCohesionRadius_Parms, CohesionRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::NewProp_CohesionRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupCohesionRadius", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::FlocksStatics_eventSetGroupCohesionRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::FlocksStatics_eventSetGroupCohesionRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupCohesionRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_CohesionRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupCohesionRadius(Z_Param_Group,Z_Param_CohesionRadius);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupCohesionRadius

// Begin Class UFlocksStatics Function SetGroupFlee
struct Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics
{
	struct FlocksStatics_eventSetGroupFlee_Parms
	{
		int32 Group;
		float Flee;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the flee weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the flee weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Flee;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupFlee_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::NewProp_Flee = { "Flee", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupFlee_Parms, Flee), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::NewProp_Flee,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupFlee", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::FlocksStatics_eventSetGroupFlee_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::FlocksStatics_eventSetGroupFlee_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupFlee()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupFlee_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupFlee)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Flee);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupFlee(Z_Param_Group,Z_Param_Flee);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupFlee

// Begin Class UFlocksStatics Function SetGroupGoal
struct Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics
{
	struct FlocksStatics_eventSetGroupGoal_Parms
	{
		int32 Group;
		float Goal;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the goal weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the goal weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupGoal_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupGoal_Parms, Goal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::NewProp_Goal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupGoal", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::FlocksStatics_eventSetGroupGoal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::FlocksStatics_eventSetGroupGoal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupGoal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupGoal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupGoal)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Goal);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupGoal(Z_Param_Group,Z_Param_Goal);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupGoal

// Begin Class UFlocksStatics Function SetGroupPreferNonVerticalMovement
struct Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics
{
	struct FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms
	{
		int32 Group;
		bool bPreferNonVerticalMovement;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the Prefer Non Vertical Movement Value for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the Prefer Non Vertical Movement Value for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static void NewProp_bPreferNonVerticalMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreferNonVerticalMovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms, Group), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_bPreferNonVerticalMovement_SetBit(void* Obj)
{
	((FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms*)Obj)->bPreferNonVerticalMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_bPreferNonVerticalMovement = { "bPreferNonVerticalMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms), &Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_bPreferNonVerticalMovement_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::NewProp_bPreferNonVerticalMovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupPreferNonVerticalMovement", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::FlocksStatics_eventSetGroupPreferNonVerticalMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupPreferNonVerticalMovement)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_UBOOL(Z_Param_bPreferNonVerticalMovement);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupPreferNonVerticalMovement(Z_Param_Group,Z_Param_bPreferNonVerticalMovement);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupPreferNonVerticalMovement

// Begin Class UFlocksStatics Function SetGroupResponseToGroup
struct Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics
{
	struct FlocksStatics_eventSetGroupResponseToGroup_Parms
	{
		int32 Group;
		int32 OtherGroup;
		EGroupResponses Response;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Changes how the specified group will react with the other group. NOTE: This is a one way relationship - call this on both groups to affect them both.\n/// Response options are Flock or Ignore\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Changes how the specified group will react with the other group. NOTE: This is a one way relationship - call this on both groups to affect them both.\nResponse options are Flock or Ignore" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherGroup;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Response_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Response;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupResponseToGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_OtherGroup = { "OtherGroup", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupResponseToGroup_Parms, OtherGroup), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Response_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Response = { "Response", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupResponseToGroup_Parms, Response), Z_Construct_UEnum_Flocks_EGroupResponses, METADATA_PARAMS(0, nullptr) }; // 3307676068
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_OtherGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Response_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::NewProp_Response,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupResponseToGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::FlocksStatics_eventSetGroupResponseToGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::FlocksStatics_eventSetGroupResponseToGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupResponseToGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherGroup);
	P_GET_ENUM(EGroupResponses,Z_Param_Response);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupResponseToGroup(Z_Param_Group,Z_Param_OtherGroup,EGroupResponses(Z_Param_Response));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupResponseToGroup

// Begin Class UFlocksStatics Function SetGroupRestriction
struct Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics
{
	struct FlocksStatics_eventSetGroupRestriction_Parms
	{
		int32 Group;
		float Restriction;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the restriction weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the restriction weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restriction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupRestriction_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::NewProp_Restriction = { "Restriction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupRestriction_Parms, Restriction), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::NewProp_Restriction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupRestriction", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::FlocksStatics_eventSetGroupRestriction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::FlocksStatics_eventSetGroupRestriction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupRestriction)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Restriction);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupRestriction(Z_Param_Group,Z_Param_Restriction);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupRestriction

// Begin Class UFlocksStatics Function SetGroupSeparation
struct Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics
{
	struct FlocksStatics_eventSetGroupSeparation_Parms
	{
		int32 Group;
		float Separation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the separation weighting for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the separation weighting for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Separation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSeparation_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::NewProp_Separation = { "Separation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSeparation_Parms, Separation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::NewProp_Separation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupSeparation", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::FlocksStatics_eventSetGroupSeparation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::FlocksStatics_eventSetGroupSeparation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupSeparation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Separation);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupSeparation(Z_Param_Group,Z_Param_Separation);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupSeparation

// Begin Class UFlocksStatics Function SetGroupSeparationRadius
struct Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics
{
	struct FlocksStatics_eventSetGroupSeparationRadius_Parms
	{
		int32 Group;
		float SeparationRadius;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the separation radius for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the separation radius for the specified group" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SeparationRadius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSeparationRadius_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::NewProp_SeparationRadius = { "SeparationRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSeparationRadius_Parms, SeparationRadius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::NewProp_SeparationRadius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupSeparationRadius", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::FlocksStatics_eventSetGroupSeparationRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::FlocksStatics_eventSetGroupSeparationRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupSeparationRadius)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SeparationRadius);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupSeparationRadius(Z_Param_Group,Z_Param_SeparationRadius);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupSeparationRadius

// Begin Class UFlocksStatics Function SetGroupSettings
struct Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics
{
	struct FlocksStatics_eventSetGroupSettings_Parms
	{
		int32 Group;
		FGroupSettings Settings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the flocking values for the specified group\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the flocking values for the specified group" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSettings_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetGroupSettings_Parms, Settings), Z_Construct_UScriptStruct_FGroupSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 1658348544
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::NewProp_Settings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetGroupSettings", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::FlocksStatics_eventSetGroupSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::FlocksStatics_eventSetGroupSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetGroupSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetGroupSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetGroupSettings)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT_REF(FGroupSettings,Z_Param_Out_Settings);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetGroupSettings(Z_Param_Group,Z_Param_Out_Settings);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetGroupSettings

// Begin Class UFlocksStatics Function SetHealthForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics
{
	struct FlocksStatics_eventSetHealthForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float Health;
		AController* Instigator;
		bool OutKilled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Sets the health for the specified boid\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Sets the health for the specified boid" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_OutKilled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutKilled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetHealthForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetHealthForBoid_Parms, Health), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetHealthForBoid_Parms, Instigator), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_OutKilled_SetBit(void* Obj)
{
	((FlocksStatics_eventSetHealthForBoid_Parms*)Obj)->OutKilled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_OutKilled = { "OutKilled", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventSetHealthForBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_OutKilled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::NewProp_OutKilled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetHealthForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::FlocksStatics_eventSetHealthForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::FlocksStatics_eventSetHealthForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetHealthForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
	P_GET_OBJECT(AController,Z_Param_Instigator);
	P_GET_UBOOL_REF(Z_Param_Out_OutKilled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetHealthForBoid(Z_Param_Out_Boid,Z_Param_Health,Z_Param_Instigator,Z_Param_Out_OutKilled);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetHealthForBoid

// Begin Class UFlocksStatics Function SetMaxHealthForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics
{
	struct FlocksStatics_eventSetMaxHealthForAllBoids_Parms
	{
		float NewMaxHealth;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new Max Health\n/// If bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new Max Health\nIf bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetMaxHealthForAllBoids_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventSetMaxHealthForAllBoids_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventSetMaxHealthForAllBoids_Parms), &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_NewMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetMaxHealthForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::FlocksStatics_eventSetMaxHealthForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::FlocksStatics_eventSetMaxHealthForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetMaxHealthForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetMaxHealthForAllBoids(Z_Param_NewMaxHealth,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetMaxHealthForAllBoids

// Begin Class UFlocksStatics Function SetMaxHealthForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms
	{
		int32 Group;
		float NewMaxHealth;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new Max Health\n/// If bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new Max Health\nIf bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms), &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_NewMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetMaxHealthForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::FlocksStatics_eventSetMaxHealthForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetMaxHealthForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetMaxHealthForAllBoidsInGroup(Z_Param_Group,Z_Param_NewMaxHealth,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetMaxHealthForAllBoidsInGroup

// Begin Class UFlocksStatics Function SetMaxHealthForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics
{
	struct FlocksStatics_eventSetMaxHealthForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewMaxHealth;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new Max Health\n/// If bKeepHealthPercent is checked, the boid will maintain the same percentage of health that they used to have\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new Max Health\nIf bKeepHealthPercent is checked, the boid will maintain the same percentage of health that they used to have" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetMaxHealthForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetMaxHealthForBoid_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventSetMaxHealthForBoid_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventSetMaxHealthForBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_NewMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetMaxHealthForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::FlocksStatics_eventSetMaxHealthForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::FlocksStatics_eventSetMaxHealthForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetMaxHealthForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetMaxHealthForBoid(Z_Param_Out_Boid,Z_Param_NewMaxHealth,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetMaxHealthForBoid

// Begin Class UFlocksStatics Function SetScaleForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics
{
	struct FlocksStatics_eventSetScaleForAllBoids_Parms
	{
		float NewScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new scale\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new scale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetScaleForAllBoids_Parms, NewScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::NewProp_NewScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetScaleForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::FlocksStatics_eventSetScaleForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::FlocksStatics_eventSetScaleForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetScaleForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetScaleForAllBoids(Z_Param_NewScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetScaleForAllBoids

// Begin Class UFlocksStatics Function SetScaleForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics
{
	struct FlocksStatics_eventSetScaleForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new scale\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new scale" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetScaleForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetScaleForBoid_Parms, NewScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::NewProp_NewScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetScaleForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::FlocksStatics_eventSetScaleForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::FlocksStatics_eventSetScaleForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetScaleForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetScaleForBoid(Z_Param_Out_Boid,Z_Param_NewScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetScaleForBoid

// Begin Class UFlocksStatics Function SetScaleForBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetScaleForBoidsInGroup_Parms
	{
		int32 Group;
		float NewScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new scale\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new scale" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetScaleForBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetScaleForBoidsInGroup_Parms, NewScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::NewProp_NewScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetScaleForBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::FlocksStatics_eventSetScaleForBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::FlocksStatics_eventSetScaleForBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetScaleForBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetScaleForBoidsInGroup(Z_Param_Group,Z_Param_NewScale);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetScaleForBoidsInGroup

// Begin Class UFlocksStatics Function SetSpeedForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics
{
	struct FlocksStatics_eventSetSpeedForAllBoids_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetSpeedForAllBoids_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetSpeedForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::FlocksStatics_eventSetSpeedForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::FlocksStatics_eventSetSpeedForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetSpeedForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetSpeedForAllBoids(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetSpeedForAllBoids

// Begin Class UFlocksStatics Function SetSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics
{
	struct FlocksStatics_eventSetSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new speed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetSpeedForBoid_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::FlocksStatics_eventSetSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::FlocksStatics_eventSetSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetSpeedForBoid(Z_Param_Out_Boid,Z_Param_NewSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetSpeedForBoid

// Begin Class UFlocksStatics Function SetSpeedForBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetSpeedForBoidsInGroup_Parms
	{
		int32 Group;
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetSpeedForBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetSpeedForBoidsInGroup_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetSpeedForBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::FlocksStatics_eventSetSpeedForBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::FlocksStatics_eventSetSpeedForBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetSpeedForBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetSpeedForBoidsInGroup(Z_Param_Group,Z_Param_NewSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetSpeedForBoidsInGroup

// Begin Class UFlocksStatics Function SetTurningSpeedForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics
{
	struct FlocksStatics_eventSetTurningSpeedForAllBoids_Parms
	{
		float NewTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new turning speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new turning speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::NewProp_NewTurningSpeed = { "NewTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetTurningSpeedForAllBoids_Parms, NewTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::NewProp_NewTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetTurningSpeedForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::FlocksStatics_eventSetTurningSpeedForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::FlocksStatics_eventSetTurningSpeedForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetTurningSpeedForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetTurningSpeedForAllBoids(Z_Param_NewTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetTurningSpeedForAllBoids

// Begin Class UFlocksStatics Function SetTurningSpeedForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics
{
	struct FlocksStatics_eventSetTurningSpeedForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new turning speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new turning speed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetTurningSpeedForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::NewProp_NewTurningSpeed = { "NewTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetTurningSpeedForBoid_Parms, NewTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::NewProp_NewTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetTurningSpeedForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::FlocksStatics_eventSetTurningSpeedForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::FlocksStatics_eventSetTurningSpeedForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetTurningSpeedForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetTurningSpeedForBoid(Z_Param_Out_Boid,Z_Param_NewTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetTurningSpeedForBoid

// Begin Class UFlocksStatics Function SetTurningSpeedForBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetTurningSpeedForBoidsInGroup_Parms
	{
		int32 Group;
		float NewTurningSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new turning speed\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new turning speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTurningSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetTurningSpeedForBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::NewProp_NewTurningSpeed = { "NewTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetTurningSpeedForBoidsInGroup_Parms, NewTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::NewProp_NewTurningSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetTurningSpeedForBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::FlocksStatics_eventSetTurningSpeedForBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::FlocksStatics_eventSetTurningSpeedForBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetTurningSpeedForBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTurningSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetTurningSpeedForBoidsInGroup(Z_Param_Group,Z_Param_NewTurningSpeed);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetTurningSpeedForBoidsInGroup

// Begin Class UFlocksStatics Function SetVelocityForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics
{
	struct FlocksStatics_eventSetVelocityForAllBoids_Parms
	{
		float NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids to have the new speed\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetVelocityForAllBoids Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids to have the new speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetVelocityForAllBoids_Parms, NewVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetVelocityForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::FlocksStatics_eventSetVelocityForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::FlocksStatics_eventSetVelocityForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetVelocityForAllBoids)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetVelocityForAllBoids(Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetVelocityForAllBoids

// Begin Class UFlocksStatics Function SetVelocityForBoid
struct Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics
{
	struct FlocksStatics_eventSetVelocityForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		float NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid to have the new speed\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use Set Speed For Boid Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid to have the new speed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetVelocityForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetVelocityForBoid_Parms, NewVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetVelocityForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::FlocksStatics_eventSetVelocityForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::FlocksStatics_eventSetVelocityForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetVelocityForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetVelocityForBoid(Z_Param_Out_Boid,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetVelocityForBoid

// Begin Class UFlocksStatics Function SetVelocityForBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics
{
	struct FlocksStatics_eventSetVelocityForBoidsInGroup_Parms
	{
		int32 Group;
		float NewVelocity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group to have the new speed\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use SetVelocityForBoidsInGroup Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group to have the new speed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewVelocity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetVelocityForBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::NewProp_NewVelocity = { "NewVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventSetVelocityForBoidsInGroup_Parms, NewVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::NewProp_NewVelocity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "SetVelocityForBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::FlocksStatics_eventSetVelocityForBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::FlocksStatics_eventSetVelocityForBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execSetVelocityForBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewVelocity);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::SetVelocityForBoidsInGroup(Z_Param_Group,Z_Param_NewVelocity);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function SetVelocityForBoidsInGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultAnimRateForAllMeshes
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms
	{
		float MinAnimRate;
		float MaxAnimRate;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default anim rate for newly spawned boids in all gropus to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default anim rate for newly spawned boids in all gropus to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_MaxAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultAnimRateForAllMeshes", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::FlocksStatics_eventUpdateBoidDefaultAnimRateForAllMeshes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultAnimRateForAllMeshes)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultAnimRateForAllMeshes(Z_Param_MinAnimRate,Z_Param_MaxAnimRate,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultAnimRateForAllMeshes

// Begin Class UFlocksStatics Function UpdateBoidDefaultAnimRateForMesh
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms
	{
		int32 MeshIndex;
		float MinAnimRate;
		float MaxAnimRate;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default anim rate for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default anim rate for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MeshIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAnimRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAnimRate;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MeshIndex = { "MeshIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms, MeshIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MinAnimRate = { "MinAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms, MinAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MaxAnimRate = { "MaxAnimRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms, MaxAnimRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MeshIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MinAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_MaxAnimRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultAnimRateForMesh", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::FlocksStatics_eventUpdateBoidDefaultAnimRateForMesh_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultAnimRateForMesh)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MeshIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinAnimRate);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxAnimRate);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultAnimRateForMesh(Z_Param_MeshIndex,Z_Param_MinAnimRate,Z_Param_MaxAnimRate,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultAnimRateForMesh

// Begin Class UFlocksStatics Function UpdateBoidDefaultMaxHealthForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultMaxHealthForAllGroups_Parms
	{
		float NewMaxHealth;
		EUpdateBoidDefaultHealthMode UpdateHealthMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default Max Health for newly spawned boids to have the new value.\n/// Update Health Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default Max Health for newly spawned boids to have the new value.\nUpdate Health Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateHealthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateHealthMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultMaxHealthForAllGroups_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_UpdateHealthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_UpdateHealthMode = { "UpdateHealthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultMaxHealthForAllGroups_Parms, UpdateHealthMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode, METADATA_PARAMS(0, nullptr) }; // 3621272372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_NewMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_UpdateHealthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::NewProp_UpdateHealthMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultMaxHealthForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultMaxHealthForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultMaxHealthForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultMaxHealthForAllGroups)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_GET_ENUM(EUpdateBoidDefaultHealthMode,Z_Param_UpdateHealthMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultMaxHealthForAllGroups(Z_Param_NewMaxHealth,EUpdateBoidDefaultHealthMode(Z_Param_UpdateHealthMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultMaxHealthForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultMaxHealthForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms
	{
		int32 Group;
		float NewMaxHealth;
		EUpdateBoidDefaultHealthMode UpdateHealthMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default Max Health for newly spawned boids in the specified group to have the new value.\n/// Update Health Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default Max Health for newly spawned boids in the specified group to have the new value.\nUpdate Health Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMaxHealth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateHealthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateHealthMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_NewMaxHealth = { "NewMaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms, NewMaxHealth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_UpdateHealthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_UpdateHealthMode = { "UpdateHealthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms, UpdateHealthMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode, METADATA_PARAMS(0, nullptr) }; // 3621272372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_NewMaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_UpdateHealthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::NewProp_UpdateHealthMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultMaxHealthForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultMaxHealthForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultMaxHealthForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewMaxHealth);
	P_GET_ENUM(EUpdateBoidDefaultHealthMode,Z_Param_UpdateHealthMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultMaxHealthForGroup(Z_Param_Group,Z_Param_NewMaxHealth,EUpdateBoidDefaultHealthMode(Z_Param_UpdateHealthMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultMaxHealthForGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultScaleForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms
	{
		float MinScale;
		float MaxScale;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default scale for newly spawned boids in all gropus to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default scale for newly spawned boids in all gropus to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_MaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultScaleForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultScaleForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultScaleForAllGroups)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultScaleForAllGroups(Z_Param_MinScale,Z_Param_MaxScale,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultScaleForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultScaleForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms
	{
		int32 Group;
		float MinScale;
		float MaxScale;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default scale for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default scale for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms, MinScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms, MaxScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_MaxScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultScaleForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultScaleForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultScaleForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinScale);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxScale);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultScaleForGroup(Z_Param_Group,Z_Param_MinScale,Z_Param_MaxScale,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultScaleForGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultSettingsForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms
	{
		FDefaultBoidSettings Settings;
		EUpdateBoidDefaultsMode UpdateMode;
		EUpdateBoidDefaultHealthMode UpdateHealthMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default speed/turning speed/scale for newly spawned boids in all groups to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default speed/turning speed/scale for newly spawned boids in all groups to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateHealthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateHealthMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms, Settings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3298287953
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateHealthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateHealthMode = { "UpdateHealthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms, UpdateHealthMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode, METADATA_PARAMS(0, nullptr) }; // 3621272372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateHealthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::NewProp_UpdateHealthMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultSettingsForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultSettingsForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultSettingsForAllGroups)
{
	P_GET_STRUCT_REF(FDefaultBoidSettings,Z_Param_Out_Settings);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_GET_ENUM(EUpdateBoidDefaultHealthMode,Z_Param_UpdateHealthMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultSettingsForAllGroups(Z_Param_Out_Settings,EUpdateBoidDefaultsMode(Z_Param_UpdateMode),EUpdateBoidDefaultHealthMode(Z_Param_UpdateHealthMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultSettingsForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultSettingsForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms
	{
		int32 Group;
		FDefaultBoidSettings Settings;
		EUpdateBoidDefaultsMode UpdateMode;
		EUpdateBoidDefaultHealthMode UpdateHealthMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default speed/turning speed/scale for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default speed/turning speed/scale for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateHealthMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateHealthMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms, Settings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3298287953
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateHealthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateHealthMode = { "UpdateHealthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms, UpdateHealthMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultHealthMode, METADATA_PARAMS(0, nullptr) }; // 3621272372
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateHealthMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::NewProp_UpdateHealthMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultSettingsForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultSettingsForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultSettingsForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT_REF(FDefaultBoidSettings,Z_Param_Out_Settings);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_GET_ENUM(EUpdateBoidDefaultHealthMode,Z_Param_UpdateHealthMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultSettingsForGroup(Z_Param_Group,Z_Param_Out_Settings,EUpdateBoidDefaultsMode(Z_Param_UpdateMode),EUpdateBoidDefaultHealthMode(Z_Param_UpdateHealthMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultSettingsForGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultSpeedForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms
	{
		float MinSpeed;
		float MaxSpeed;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default speed for newly spawned boids in all gropus to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default speed for newly spawned boids in all gropus to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultSpeedForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultSpeedForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultSpeedForAllGroups)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultSpeedForAllGroups(Z_Param_MinSpeed,Z_Param_MaxSpeed,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultSpeedForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultSpeedForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms
	{
		int32 Group;
		float MinSpeed;
		float MaxSpeed;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default speed for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default speed for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_MinSpeed = { "MinSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms, MinSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms, MaxSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_MinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_MaxSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultSpeedForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultSpeedForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultSpeedForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultSpeedForGroup(Z_Param_Group,Z_Param_MinSpeed,Z_Param_MaxSpeed,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultSpeedForGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultTurningSpeedForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms
	{
		float MinTurningSpeed;
		float MaxTurningSpeed;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default turning speed for newly spawned boids in all gropus to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default turning speed for newly spawned boids in all gropus to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_MaxTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultTurningSpeedForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultTurningSpeedForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultTurningSpeedForAllGroups)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultTurningSpeedForAllGroups(Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultTurningSpeedForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultTurningSpeedForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms
	{
		int32 Group;
		float MinTurningSpeed;
		float MaxTurningSpeed;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default turning speed for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default turning speed for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinTurningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxTurningSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_MinTurningSpeed = { "MinTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms, MinTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_MaxTurningSpeed = { "MaxTurningSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms, MaxTurningSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_MinTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_MaxTurningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultTurningSpeedForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultTurningSpeedForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultTurningSpeedForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinTurningSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxTurningSpeed);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultTurningSpeedForGroup(Z_Param_Group,Z_Param_MinTurningSpeed,Z_Param_MaxTurningSpeed,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultTurningSpeedForGroup

// Begin Class UFlocksStatics Function UpdateBoidDefaultVelocityForAllGroups
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms
	{
		float MinVelocity;
		float MaxVelocity;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default velocity for newly spawned boids in all gropus to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UpdateBoidDefaultVelocityForAllGroups Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default velocity for newly spawned boids in all gropus to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms, MinVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms, MaxVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_MaxVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultVelocityForAllGroups", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::FlocksStatics_eventUpdateBoidDefaultVelocityForAllGroups_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultVelocityForAllGroups)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocity);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultVelocityForAllGroups(Z_Param_MinVelocity,Z_Param_MaxVelocity,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultVelocityForAllGroups

// Begin Class UFlocksStatics Function UpdateBoidDefaultVelocityForGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics
{
	struct FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms
	{
		int32 Group;
		float MinVelocity;
		float MaxVelocity;
		EUpdateBoidDefaultsMode UpdateMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates the default velocity for newly spawned boids in the specified group to have the new range.\n/// Update Mode specifies what happens to the values of the existing boids\n" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use UpdateBoidDefaultVelocityForGroup Instead." },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates the default velocity for newly spawned boids in the specified group to have the new range.\nUpdate Mode specifies what happens to the values of the existing boids" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxVelocity;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_MinVelocity = { "MinVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms, MinVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_MaxVelocity = { "MaxVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms, MaxVelocity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_UpdateMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_UpdateMode = { "UpdateMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms, UpdateMode), Z_Construct_UEnum_Flocks_EUpdateBoidDefaultsMode, METADATA_PARAMS(0, nullptr) }; // 1669605684
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_MinVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_MaxVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_UpdateMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::NewProp_UpdateMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateBoidDefaultVelocityForGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::FlocksStatics_eventUpdateBoidDefaultVelocityForGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateBoidDefaultVelocityForGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MinVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxVelocity);
	P_GET_ENUM(EUpdateBoidDefaultsMode,Z_Param_UpdateMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateBoidDefaultVelocityForGroup(Z_Param_Group,Z_Param_MinVelocity,Z_Param_MaxVelocity,EUpdateBoidDefaultsMode(Z_Param_UpdateMode));
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateBoidDefaultVelocityForGroup

// Begin Class UFlocksStatics Function UpdateSettingsForAllBoids
struct Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics
{
	struct FlocksStatics_eventUpdateSettingsForAllBoids_Parms
	{
		FDefaultBoidSettings Settings;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids speed/turning speed/scale to the specified values\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids speed/turning speed/scale to the specified values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateSettingsForAllBoids_Parms, Settings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3298287953
void Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventUpdateSettingsForAllBoids_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventUpdateSettingsForAllBoids_Parms), &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateSettingsForAllBoids", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::FlocksStatics_eventUpdateSettingsForAllBoids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::FlocksStatics_eventUpdateSettingsForAllBoids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateSettingsForAllBoids)
{
	P_GET_STRUCT_REF(FDefaultBoidSettings,Z_Param_Out_Settings);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateSettingsForAllBoids(Z_Param_Out_Settings,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateSettingsForAllBoids

// Begin Class UFlocksStatics Function UpdateSettingsForAllBoidsInGroup
struct Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics
{
	struct FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms
	{
		int32 Group;
		FDefaultBoidSettings Settings;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates all boids in the specified group speed/turning speed/scale to the specified values\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates all boids in the specified group speed/turning speed/scale to the specified values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Group;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_Group = { "Group", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms, Group), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms, Settings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3298287953
void Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms), &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_Group,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateSettingsForAllBoidsInGroup", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::FlocksStatics_eventUpdateSettingsForAllBoidsInGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateSettingsForAllBoidsInGroup)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Group);
	P_GET_STRUCT_REF(FDefaultBoidSettings,Z_Param_Out_Settings);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateSettingsForAllBoidsInGroup(Z_Param_Group,Z_Param_Out_Settings,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateSettingsForAllBoidsInGroup

// Begin Class UFlocksStatics Function UpdateSettingsForBoid
struct Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics
{
	struct FlocksStatics_eventUpdateSettingsForBoid_Parms
	{
		FFlocksBoidBlueprintHandle Boid;
		FDefaultBoidSettings Settings;
		bool bKeepHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Flocks" },
		{ "Comment", "/// Updates a boid speed/turning speed/scale to the specified values\n" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
		{ "ToolTip", "Updates a boid speed/turning speed/scale to the specified values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Boid_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Boid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
	static void NewProp_bKeepHealthPercent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_Boid = { "Boid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateSettingsForBoid_Parms, Boid), Z_Construct_UScriptStruct_FFlocksBoidBlueprintHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Boid_MetaData), NewProp_Boid_MetaData) }; // 100144147
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FlocksStatics_eventUpdateSettingsForBoid_Parms, Settings), Z_Construct_UScriptStruct_FDefaultBoidSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) }; // 3298287953
void Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_bKeepHealthPercent_SetBit(void* Obj)
{
	((FlocksStatics_eventUpdateSettingsForBoid_Parms*)Obj)->bKeepHealthPercent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_bKeepHealthPercent = { "bKeepHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FlocksStatics_eventUpdateSettingsForBoid_Parms), &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_bKeepHealthPercent_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_Boid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::NewProp_bKeepHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFlocksStatics, nullptr, "UpdateSettingsForBoid", nullptr, nullptr, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::FlocksStatics_eventUpdateSettingsForBoid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::FlocksStatics_eventUpdateSettingsForBoid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFlocksStatics::execUpdateSettingsForBoid)
{
	P_GET_STRUCT_REF(FFlocksBoidBlueprintHandle,Z_Param_Out_Boid);
	P_GET_STRUCT_REF(FDefaultBoidSettings,Z_Param_Out_Settings);
	P_GET_UBOOL(Z_Param_bKeepHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UFlocksStatics::UpdateSettingsForBoid(Z_Param_Out_Boid,Z_Param_Out_Settings,Z_Param_bKeepHealthPercent);
	P_NATIVE_END;
}
// End Class UFlocksStatics Function UpdateSettingsForBoid

// Begin Class UFlocksStatics
void UFlocksStatics::StaticRegisterNativesUFlocksStatics()
{
	UClass* Class = UFlocksStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddBoid", &UFlocksStatics::execAddBoid },
		{ "AddBoidAdvanced", &UFlocksStatics::execAddBoidAdvanced },
		{ "AddBoidAtActor", &UFlocksStatics::execAddBoidAtActor },
		{ "AddBoidAtLocation", &UFlocksStatics::execAddBoidAtLocation },
		{ "AddBoidAtSpawnPoint", &UFlocksStatics::execAddBoidAtSpawnPoint },
		{ "ApplyAllBoidMaterialCustomValues", &UFlocksStatics::execApplyAllBoidMaterialCustomValues },
		{ "ApplyBoidMaterialCustomValues", &UFlocksStatics::execApplyBoidMaterialCustomValues },
		{ "BatchAddBoids", &UFlocksStatics::execBatchAddBoids },
		{ "BatchRemoveBoids", &UFlocksStatics::execBatchRemoveBoids },
		{ "ClampAnimRateForBoid", &UFlocksStatics::execClampAnimRateForBoid },
		{ "ClampScaleForBoid", &UFlocksStatics::execClampScaleForBoid },
		{ "ClampSpeedForBoid", &UFlocksStatics::execClampSpeedForBoid },
		{ "ClampTurningSpeedForBoid", &UFlocksStatics::execClampTurningSpeedForBoid },
		{ "DamageBoid", &UFlocksStatics::execDamageBoid },
		{ "GetAllBoidLocations", &UFlocksStatics::execGetAllBoidLocations },
		{ "GetAllBoidsAffectedByVolume", &UFlocksStatics::execGetAllBoidsAffectedByVolume },
		{ "GetAllBoidsInSphere", &UFlocksStatics::execGetAllBoidsInSphere },
		{ "GetBoidAnimRate", &UFlocksStatics::execGetBoidAnimRate },
		{ "GetBoidAtIndex", &UFlocksStatics::execGetBoidAtIndex },
		{ "GetBoidBlueprintID", &UFlocksStatics::execGetBoidBlueprintID },
		{ "GetBoidFromBlueprintID", &UFlocksStatics::execGetBoidFromBlueprintID },
		{ "GetBoidGroup", &UFlocksStatics::execGetBoidGroup },
		{ "GetBoidHeading", &UFlocksStatics::execGetBoidHeading },
		{ "GetBoidHealth", &UFlocksStatics::execGetBoidHealth },
		{ "GetBoidHealthPercent", &UFlocksStatics::execGetBoidHealthPercent },
		{ "GetBoidLocation", &UFlocksStatics::execGetBoidLocation },
		{ "GetBoidLocations", &UFlocksStatics::execGetBoidLocations },
		{ "GetBoidMaxHealth", &UFlocksStatics::execGetBoidMaxHealth },
		{ "GetBoidRadiusAndCenter", &UFlocksStatics::execGetBoidRadiusAndCenter },
		{ "GetBoidScale", &UFlocksStatics::execGetBoidScale },
		{ "GetBoidSettings", &UFlocksStatics::execGetBoidSettings },
		{ "GetBoidSpeed", &UFlocksStatics::execGetBoidSpeed },
		{ "GetBoidTurningSpeed", &UFlocksStatics::execGetBoidTurningSpeed },
		{ "GetFlocksWorld", &UFlocksStatics::execGetFlocksWorld },
		{ "GetGroupSettings", &UFlocksStatics::execGetGroupSettings },
		{ "GetMaterialInstances", &UFlocksStatics::execGetMaterialInstances },
		{ "GetMaxGroups", &UFlocksStatics::execGetMaxGroups },
		{ "GetMeshForBoid", &UFlocksStatics::execGetMeshForBoid },
		{ "GetNumBoids", &UFlocksStatics::execGetNumBoids },
		{ "GetNumBoidsAffectedByVolume", &UFlocksStatics::execGetNumBoidsAffectedByVolume },
		{ "GetVolumeBounds", &UFlocksStatics::execGetVolumeBounds },
		{ "HealBoid", &UFlocksStatics::execHealBoid },
		{ "IsBoidFleeing", &UFlocksStatics::execIsBoidFleeing },
		{ "IsBoidGoaling", &UFlocksStatics::execIsBoidGoaling },
		{ "IsValidBoidHandle", &UFlocksStatics::execIsValidBoidHandle },
		{ "IsValidVolumeHandle", &UFlocksStatics::execIsValidVolumeHandle },
		{ "LineTraceForBoid", &UFlocksStatics::execLineTraceForBoid },
		{ "LineTraceForBoids", &UFlocksStatics::execLineTraceForBoids },
		{ "RandomizeAnimRateForAllBoids", &UFlocksStatics::execRandomizeAnimRateForAllBoids },
		{ "RandomizeAnimRateForAllBoidsInGroup", &UFlocksStatics::execRandomizeAnimRateForAllBoidsInGroup },
		{ "RandomizeAnimRateForBoid", &UFlocksStatics::execRandomizeAnimRateForBoid },
		{ "RandomizeScaleForAllBoids", &UFlocksStatics::execRandomizeScaleForAllBoids },
		{ "RandomizeScaleForAllBoidsInGroup", &UFlocksStatics::execRandomizeScaleForAllBoidsInGroup },
		{ "RandomizeScaleForBoid", &UFlocksStatics::execRandomizeScaleForBoid },
		{ "RandomizeSpeedForAllBoids", &UFlocksStatics::execRandomizeSpeedForAllBoids },
		{ "RandomizeSpeedForAllBoidsInGroup", &UFlocksStatics::execRandomizeSpeedForAllBoidsInGroup },
		{ "RandomizeSpeedForBoid", &UFlocksStatics::execRandomizeSpeedForBoid },
		{ "RandomizeTurningSpeedForAllBoids", &UFlocksStatics::execRandomizeTurningSpeedForAllBoids },
		{ "RandomizeTurningSpeedForAllBoidsInGroup", &UFlocksStatics::execRandomizeTurningSpeedForAllBoidsInGroup },
		{ "RandomizeTurningSpeedForBoid", &UFlocksStatics::execRandomizeTurningSpeedForBoid },
		{ "RandomizeVelocityForAllBoids", &UFlocksStatics::execRandomizeVelocityForAllBoids },
		{ "RandomizeVelocityForAllBoidsInGroup", &UFlocksStatics::execRandomizeVelocityForAllBoidsInGroup },
		{ "RandomizeVelocityForBoid", &UFlocksStatics::execRandomizeVelocityForBoid },
		{ "RemoveBoid", &UFlocksStatics::execRemoveBoid },
		{ "SetAnimRateForAllBoids", &UFlocksStatics::execSetAnimRateForAllBoids },
		{ "SetAnimRateForBoid", &UFlocksStatics::execSetAnimRateForBoid },
		{ "SetAnimRateForBoidsInGroup", &UFlocksStatics::execSetAnimRateForBoidsInGroup },
		{ "SetBoidMaterialCustomValue", &UFlocksStatics::execSetBoidMaterialCustomValue },
		{ "SetBoidMaterialCustomValueOnAll", &UFlocksStatics::execSetBoidMaterialCustomValueOnAll },
		{ "SetGroupAlignment", &UFlocksStatics::execSetGroupAlignment },
		{ "SetGroupAlignmentRadius", &UFlocksStatics::execSetGroupAlignmentRadius },
		{ "SetGroupCohesion", &UFlocksStatics::execSetGroupCohesion },
		{ "SetGroupCohesionRadius", &UFlocksStatics::execSetGroupCohesionRadius },
		{ "SetGroupFlee", &UFlocksStatics::execSetGroupFlee },
		{ "SetGroupGoal", &UFlocksStatics::execSetGroupGoal },
		{ "SetGroupPreferNonVerticalMovement", &UFlocksStatics::execSetGroupPreferNonVerticalMovement },
		{ "SetGroupResponseToGroup", &UFlocksStatics::execSetGroupResponseToGroup },
		{ "SetGroupRestriction", &UFlocksStatics::execSetGroupRestriction },
		{ "SetGroupSeparation", &UFlocksStatics::execSetGroupSeparation },
		{ "SetGroupSeparationRadius", &UFlocksStatics::execSetGroupSeparationRadius },
		{ "SetGroupSettings", &UFlocksStatics::execSetGroupSettings },
		{ "SetHealthForBoid", &UFlocksStatics::execSetHealthForBoid },
		{ "SetMaxHealthForAllBoids", &UFlocksStatics::execSetMaxHealthForAllBoids },
		{ "SetMaxHealthForAllBoidsInGroup", &UFlocksStatics::execSetMaxHealthForAllBoidsInGroup },
		{ "SetMaxHealthForBoid", &UFlocksStatics::execSetMaxHealthForBoid },
		{ "SetScaleForAllBoids", &UFlocksStatics::execSetScaleForAllBoids },
		{ "SetScaleForBoid", &UFlocksStatics::execSetScaleForBoid },
		{ "SetScaleForBoidsInGroup", &UFlocksStatics::execSetScaleForBoidsInGroup },
		{ "SetSpeedForAllBoids", &UFlocksStatics::execSetSpeedForAllBoids },
		{ "SetSpeedForBoid", &UFlocksStatics::execSetSpeedForBoid },
		{ "SetSpeedForBoidsInGroup", &UFlocksStatics::execSetSpeedForBoidsInGroup },
		{ "SetTurningSpeedForAllBoids", &UFlocksStatics::execSetTurningSpeedForAllBoids },
		{ "SetTurningSpeedForBoid", &UFlocksStatics::execSetTurningSpeedForBoid },
		{ "SetTurningSpeedForBoidsInGroup", &UFlocksStatics::execSetTurningSpeedForBoidsInGroup },
		{ "SetVelocityForAllBoids", &UFlocksStatics::execSetVelocityForAllBoids },
		{ "SetVelocityForBoid", &UFlocksStatics::execSetVelocityForBoid },
		{ "SetVelocityForBoidsInGroup", &UFlocksStatics::execSetVelocityForBoidsInGroup },
		{ "UpdateBoidDefaultAnimRateForAllMeshes", &UFlocksStatics::execUpdateBoidDefaultAnimRateForAllMeshes },
		{ "UpdateBoidDefaultAnimRateForMesh", &UFlocksStatics::execUpdateBoidDefaultAnimRateForMesh },
		{ "UpdateBoidDefaultMaxHealthForAllGroups", &UFlocksStatics::execUpdateBoidDefaultMaxHealthForAllGroups },
		{ "UpdateBoidDefaultMaxHealthForGroup", &UFlocksStatics::execUpdateBoidDefaultMaxHealthForGroup },
		{ "UpdateBoidDefaultScaleForAllGroups", &UFlocksStatics::execUpdateBoidDefaultScaleForAllGroups },
		{ "UpdateBoidDefaultScaleForGroup", &UFlocksStatics::execUpdateBoidDefaultScaleForGroup },
		{ "UpdateBoidDefaultSettingsForAllGroups", &UFlocksStatics::execUpdateBoidDefaultSettingsForAllGroups },
		{ "UpdateBoidDefaultSettingsForGroup", &UFlocksStatics::execUpdateBoidDefaultSettingsForGroup },
		{ "UpdateBoidDefaultSpeedForAllGroups", &UFlocksStatics::execUpdateBoidDefaultSpeedForAllGroups },
		{ "UpdateBoidDefaultSpeedForGroup", &UFlocksStatics::execUpdateBoidDefaultSpeedForGroup },
		{ "UpdateBoidDefaultTurningSpeedForAllGroups", &UFlocksStatics::execUpdateBoidDefaultTurningSpeedForAllGroups },
		{ "UpdateBoidDefaultTurningSpeedForGroup", &UFlocksStatics::execUpdateBoidDefaultTurningSpeedForGroup },
		{ "UpdateBoidDefaultVelocityForAllGroups", &UFlocksStatics::execUpdateBoidDefaultVelocityForAllGroups },
		{ "UpdateBoidDefaultVelocityForGroup", &UFlocksStatics::execUpdateBoidDefaultVelocityForGroup },
		{ "UpdateSettingsForAllBoids", &UFlocksStatics::execUpdateSettingsForAllBoids },
		{ "UpdateSettingsForAllBoidsInGroup", &UFlocksStatics::execUpdateSettingsForAllBoidsInGroup },
		{ "UpdateSettingsForBoid", &UFlocksStatics::execUpdateSettingsForBoid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlocksStatics);
UClass* Z_Construct_UClass_UFlocksStatics_NoRegister()
{
	return UFlocksStatics::StaticClass();
}
struct Z_Construct_UClass_UFlocksStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "FlocksStatics.h" },
		{ "ModuleRelativePath", "Public/FlocksStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFlocksStatics_AddBoid, "AddBoid" }, // 2321552800
		{ &Z_Construct_UFunction_UFlocksStatics_AddBoidAdvanced, "AddBoidAdvanced" }, // 3124331955
		{ &Z_Construct_UFunction_UFlocksStatics_AddBoidAtActor, "AddBoidAtActor" }, // 2058284724
		{ &Z_Construct_UFunction_UFlocksStatics_AddBoidAtLocation, "AddBoidAtLocation" }, // 1909661745
		{ &Z_Construct_UFunction_UFlocksStatics_AddBoidAtSpawnPoint, "AddBoidAtSpawnPoint" }, // 1240062889
		{ &Z_Construct_UFunction_UFlocksStatics_ApplyAllBoidMaterialCustomValues, "ApplyAllBoidMaterialCustomValues" }, // 3017364540
		{ &Z_Construct_UFunction_UFlocksStatics_ApplyBoidMaterialCustomValues, "ApplyBoidMaterialCustomValues" }, // 4276929740
		{ &Z_Construct_UFunction_UFlocksStatics_BatchAddBoids, "BatchAddBoids" }, // 1005724236
		{ &Z_Construct_UFunction_UFlocksStatics_BatchRemoveBoids, "BatchRemoveBoids" }, // 530570679
		{ &Z_Construct_UFunction_UFlocksStatics_ClampAnimRateForBoid, "ClampAnimRateForBoid" }, // 1809722492
		{ &Z_Construct_UFunction_UFlocksStatics_ClampScaleForBoid, "ClampScaleForBoid" }, // 459611984
		{ &Z_Construct_UFunction_UFlocksStatics_ClampSpeedForBoid, "ClampSpeedForBoid" }, // 4140126936
		{ &Z_Construct_UFunction_UFlocksStatics_ClampTurningSpeedForBoid, "ClampTurningSpeedForBoid" }, // 3679331046
		{ &Z_Construct_UFunction_UFlocksStatics_DamageBoid, "DamageBoid" }, // 3076054430
		{ &Z_Construct_UFunction_UFlocksStatics_GetAllBoidLocations, "GetAllBoidLocations" }, // 1680322200
		{ &Z_Construct_UFunction_UFlocksStatics_GetAllBoidsAffectedByVolume, "GetAllBoidsAffectedByVolume" }, // 2097995102
		{ &Z_Construct_UFunction_UFlocksStatics_GetAllBoidsInSphere, "GetAllBoidsInSphere" }, // 12599433
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidAnimRate, "GetBoidAnimRate" }, // 5758943
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidAtIndex, "GetBoidAtIndex" }, // 646820148
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidBlueprintID, "GetBoidBlueprintID" }, // 3496987652
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidFromBlueprintID, "GetBoidFromBlueprintID" }, // 2838759663
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidGroup, "GetBoidGroup" }, // 3811058896
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidHeading, "GetBoidHeading" }, // 4008960042
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidHealth, "GetBoidHealth" }, // 3386411278
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidHealthPercent, "GetBoidHealthPercent" }, // 2467781098
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidLocation, "GetBoidLocation" }, // 2406466601
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidLocations, "GetBoidLocations" }, // 2649076805
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidMaxHealth, "GetBoidMaxHealth" }, // 4074197321
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidRadiusAndCenter, "GetBoidRadiusAndCenter" }, // 1757649072
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidScale, "GetBoidScale" }, // 390942208
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidSettings, "GetBoidSettings" }, // 705581359
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidSpeed, "GetBoidSpeed" }, // 1813279130
		{ &Z_Construct_UFunction_UFlocksStatics_GetBoidTurningSpeed, "GetBoidTurningSpeed" }, // 1893639181
		{ &Z_Construct_UFunction_UFlocksStatics_GetFlocksWorld, "GetFlocksWorld" }, // 3497925211
		{ &Z_Construct_UFunction_UFlocksStatics_GetGroupSettings, "GetGroupSettings" }, // 75229153
		{ &Z_Construct_UFunction_UFlocksStatics_GetMaterialInstances, "GetMaterialInstances" }, // 262411063
		{ &Z_Construct_UFunction_UFlocksStatics_GetMaxGroups, "GetMaxGroups" }, // 2290159989
		{ &Z_Construct_UFunction_UFlocksStatics_GetMeshForBoid, "GetMeshForBoid" }, // 3479113494
		{ &Z_Construct_UFunction_UFlocksStatics_GetNumBoids, "GetNumBoids" }, // 506164255
		{ &Z_Construct_UFunction_UFlocksStatics_GetNumBoidsAffectedByVolume, "GetNumBoidsAffectedByVolume" }, // 439180087
		{ &Z_Construct_UFunction_UFlocksStatics_GetVolumeBounds, "GetVolumeBounds" }, // 955687556
		{ &Z_Construct_UFunction_UFlocksStatics_HealBoid, "HealBoid" }, // 2869614261
		{ &Z_Construct_UFunction_UFlocksStatics_IsBoidFleeing, "IsBoidFleeing" }, // 141277565
		{ &Z_Construct_UFunction_UFlocksStatics_IsBoidGoaling, "IsBoidGoaling" }, // 2754614709
		{ &Z_Construct_UFunction_UFlocksStatics_IsValidBoidHandle, "IsValidBoidHandle" }, // 2317265456
		{ &Z_Construct_UFunction_UFlocksStatics_IsValidVolumeHandle, "IsValidVolumeHandle" }, // 1656871745
		{ &Z_Construct_UFunction_UFlocksStatics_LineTraceForBoid, "LineTraceForBoid" }, // 3307803333
		{ &Z_Construct_UFunction_UFlocksStatics_LineTraceForBoids, "LineTraceForBoids" }, // 2092005474
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoids, "RandomizeAnimRateForAllBoids" }, // 2505670281
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForAllBoidsInGroup, "RandomizeAnimRateForAllBoidsInGroup" }, // 1922997748
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeAnimRateForBoid, "RandomizeAnimRateForBoid" }, // 1551166035
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoids, "RandomizeScaleForAllBoids" }, // 162838042
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForAllBoidsInGroup, "RandomizeScaleForAllBoidsInGroup" }, // 3514831944
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeScaleForBoid, "RandomizeScaleForBoid" }, // 1675091742
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoids, "RandomizeSpeedForAllBoids" }, // 2665734468
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForAllBoidsInGroup, "RandomizeSpeedForAllBoidsInGroup" }, // 4005860661
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeSpeedForBoid, "RandomizeSpeedForBoid" }, // 1899012797
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoids, "RandomizeTurningSpeedForAllBoids" }, // 4045577171
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForAllBoidsInGroup, "RandomizeTurningSpeedForAllBoidsInGroup" }, // 3395110017
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeTurningSpeedForBoid, "RandomizeTurningSpeedForBoid" }, // 1725594123
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoids, "RandomizeVelocityForAllBoids" }, // 1557578121
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForAllBoidsInGroup, "RandomizeVelocityForAllBoidsInGroup" }, // 320245096
		{ &Z_Construct_UFunction_UFlocksStatics_RandomizeVelocityForBoid, "RandomizeVelocityForBoid" }, // 1738492293
		{ &Z_Construct_UFunction_UFlocksStatics_RemoveBoid, "RemoveBoid" }, // 45118873
		{ &Z_Construct_UFunction_UFlocksStatics_SetAnimRateForAllBoids, "SetAnimRateForAllBoids" }, // 3860623844
		{ &Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoid, "SetAnimRateForBoid" }, // 3070003357
		{ &Z_Construct_UFunction_UFlocksStatics_SetAnimRateForBoidsInGroup, "SetAnimRateForBoidsInGroup" }, // 4094765924
		{ &Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValue, "SetBoidMaterialCustomValue" }, // 2769329549
		{ &Z_Construct_UFunction_UFlocksStatics_SetBoidMaterialCustomValueOnAll, "SetBoidMaterialCustomValueOnAll" }, // 1186963702
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupAlignment, "SetGroupAlignment" }, // 1251258013
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupAlignmentRadius, "SetGroupAlignmentRadius" }, // 2095354652
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupCohesion, "SetGroupCohesion" }, // 298455641
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupCohesionRadius, "SetGroupCohesionRadius" }, // 2522998197
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupFlee, "SetGroupFlee" }, // 2019705440
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupGoal, "SetGroupGoal" }, // 17876407
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupPreferNonVerticalMovement, "SetGroupPreferNonVerticalMovement" }, // 1516190288
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupResponseToGroup, "SetGroupResponseToGroup" }, // 1703233704
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupRestriction, "SetGroupRestriction" }, // 4068890552
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupSeparation, "SetGroupSeparation" }, // 1776115379
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupSeparationRadius, "SetGroupSeparationRadius" }, // 1355479845
		{ &Z_Construct_UFunction_UFlocksStatics_SetGroupSettings, "SetGroupSettings" }, // 3194019260
		{ &Z_Construct_UFunction_UFlocksStatics_SetHealthForBoid, "SetHealthForBoid" }, // 1761364791
		{ &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoids, "SetMaxHealthForAllBoids" }, // 1172148622
		{ &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForAllBoidsInGroup, "SetMaxHealthForAllBoidsInGroup" }, // 2892570139
		{ &Z_Construct_UFunction_UFlocksStatics_SetMaxHealthForBoid, "SetMaxHealthForBoid" }, // 2332322732
		{ &Z_Construct_UFunction_UFlocksStatics_SetScaleForAllBoids, "SetScaleForAllBoids" }, // 1108617164
		{ &Z_Construct_UFunction_UFlocksStatics_SetScaleForBoid, "SetScaleForBoid" }, // 1658854250
		{ &Z_Construct_UFunction_UFlocksStatics_SetScaleForBoidsInGroup, "SetScaleForBoidsInGroup" }, // 2247670249
		{ &Z_Construct_UFunction_UFlocksStatics_SetSpeedForAllBoids, "SetSpeedForAllBoids" }, // 211017108
		{ &Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoid, "SetSpeedForBoid" }, // 916380075
		{ &Z_Construct_UFunction_UFlocksStatics_SetSpeedForBoidsInGroup, "SetSpeedForBoidsInGroup" }, // 293782838
		{ &Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForAllBoids, "SetTurningSpeedForAllBoids" }, // 1349969284
		{ &Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoid, "SetTurningSpeedForBoid" }, // 3026180434
		{ &Z_Construct_UFunction_UFlocksStatics_SetTurningSpeedForBoidsInGroup, "SetTurningSpeedForBoidsInGroup" }, // 3816692093
		{ &Z_Construct_UFunction_UFlocksStatics_SetVelocityForAllBoids, "SetVelocityForAllBoids" }, // 1593299582
		{ &Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoid, "SetVelocityForBoid" }, // 3091269109
		{ &Z_Construct_UFunction_UFlocksStatics_SetVelocityForBoidsInGroup, "SetVelocityForBoidsInGroup" }, // 2130721872
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForAllMeshes, "UpdateBoidDefaultAnimRateForAllMeshes" }, // 3050851084
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultAnimRateForMesh, "UpdateBoidDefaultAnimRateForMesh" }, // 287186058
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForAllGroups, "UpdateBoidDefaultMaxHealthForAllGroups" }, // 865976067
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultMaxHealthForGroup, "UpdateBoidDefaultMaxHealthForGroup" }, // 4013244284
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForAllGroups, "UpdateBoidDefaultScaleForAllGroups" }, // 4106350407
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultScaleForGroup, "UpdateBoidDefaultScaleForGroup" }, // 4095971711
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForAllGroups, "UpdateBoidDefaultSettingsForAllGroups" }, // 1521633188
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSettingsForGroup, "UpdateBoidDefaultSettingsForGroup" }, // 3064874271
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForAllGroups, "UpdateBoidDefaultSpeedForAllGroups" }, // 3569082920
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultSpeedForGroup, "UpdateBoidDefaultSpeedForGroup" }, // 4186009937
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForAllGroups, "UpdateBoidDefaultTurningSpeedForAllGroups" }, // 2170634219
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultTurningSpeedForGroup, "UpdateBoidDefaultTurningSpeedForGroup" }, // 3450399453
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForAllGroups, "UpdateBoidDefaultVelocityForAllGroups" }, // 1968113764
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateBoidDefaultVelocityForGroup, "UpdateBoidDefaultVelocityForGroup" }, // 4039684904
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoids, "UpdateSettingsForAllBoids" }, // 1528224442
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForAllBoidsInGroup, "UpdateSettingsForAllBoidsInGroup" }, // 2393007552
		{ &Z_Construct_UFunction_UFlocksStatics_UpdateSettingsForBoid, "UpdateSettingsForBoid" }, // 2027671934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlocksStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UFlocksStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Flocks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlocksStatics_Statics::ClassParams = {
	&UFlocksStatics::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFlocksStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UFlocksStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFlocksStatics()
{
	if (!Z_Registration_Info_UClass_UFlocksStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlocksStatics.OuterSingleton, Z_Construct_UClass_UFlocksStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFlocksStatics.OuterSingleton;
}
template<> FLOCKS_API UClass* StaticClass<UFlocksStatics>()
{
	return UFlocksStatics::StaticClass();
}
UFlocksStatics::UFlocksStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFlocksStatics);
UFlocksStatics::~UFlocksStatics() {}
// End Class UFlocksStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLineTraceForBoidsResult::StaticStruct, Z_Construct_UScriptStruct_FLineTraceForBoidsResult_Statics::NewStructOps, TEXT("LineTraceForBoidsResult"), &Z_Registration_Info_UScriptStruct_LineTraceForBoidsResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLineTraceForBoidsResult), 3301355469U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFlocksStatics, UFlocksStatics::StaticClass, TEXT("UFlocksStatics"), &Z_Registration_Info_UClass_UFlocksStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlocksStatics), 1366956561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_160698443(TEXT("/Script/Flocks"),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Marketplace_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_Flocks_Source_Flocks_Public_FlocksStatics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
