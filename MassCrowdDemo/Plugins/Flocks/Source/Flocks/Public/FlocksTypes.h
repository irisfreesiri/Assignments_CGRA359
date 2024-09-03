// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Async/ParallelFor.h"
#include "Misc/EngineVersionComparison.h"
#include "Engine/DataAsset.h"
#include "GenericPlatform/GenericPlatform.h"
#include "FlocksTypes.generated.h"

#if UE_VERSION_OLDER_THAN(5, 0, 0)
typedef FVector2D FVector2f;
typedef FVector FVector3f;
typedef FVector4 FVector4f;
typedef FRotator FRotator3f;
typedef FMatrix FMatrix44f;
typedef FTransform FTransform3f;
#endif

class UTexture2D;

typedef unsigned int BOID_HANDLE;
static constexpr unsigned int INVALID_BOID_HANDLE = UINT32_MAX;
static constexpr unsigned short INVALID_BOID_HANDLE_INDEX = UINT16_MAX;
static constexpr unsigned short MAX_BOIDS = UINT16_MAX;
static constexpr unsigned short TOTAL_CELLS = 5000;

typedef unsigned int VOLUME_HANDLE;
static constexpr unsigned int INVALID_VOLUME_HANDLE = UINT32_MAX;
static constexpr unsigned short INVALID_VOLUME_HANDLE_INDEX = UINT16_MAX;
static constexpr unsigned short MAX_VOLUMES = 20;

static constexpr int32 MAX_GROUPS = 16;
static constexpr int32 MAX_MESHES = 16;
static constexpr int32 MAX_FLOCKS_CUSTOM_DATA_VALUES = 12;

BOID_HANDLE MakeBoidHandle(uint8 GenerationNumber, unsigned short Index);
unsigned short BoidHandleExtractIndex(BOID_HANDLE Handle);

VOLUME_HANDLE MakeVolumeHandle(uint8 GenerationNumber, unsigned short Index);
unsigned short VolumeHandleExtractIndex(VOLUME_HANDLE Handle);

UENUM(BlueprintType)
enum class EUpdateBoidDefaultsMode : uint8
{
	LeaveExistingBoidValues,
	RandomizeExistingBoidValues,
	ClampExistingBoidValues
};

UENUM(BlueprintType)
enum class EUpdateBoidDefaultHealthMode : uint8
{
	LeaveExistingMaxHealth,
	KeepHealthPercent,
	KeepHealthValue
};

UENUM(BlueprintType)
enum class EUpdateBoidDefaultMaxHealthMode : uint8
{
	KeepHealthPercent,
	KeepHealthValue
};

UENUM(BlueprintType)
enum class ESpawnTypes : uint8
{
	AtWorld,
	AtActor,
	AtLocation,
	AtSpawnPoint,
	InsideRandomRestrictionVolume
};

UENUM(BlueprintType)
enum class FlocksVolumeTypes : uint8
{
	Goal,
	Flee,
	Restriction,
	Other
};

UENUM(BlueprintType)
enum class FlocksVolumeShapes : uint8
{
	Sphere,
	Box
};

UENUM(BlueprintType)
enum class EGroupResponses : uint8
{
	Ignore,
	Flock
};

UENUM(BlueprintType)
enum class EFlocksAnimationMode : uint8
{
	LoopSingle,
	PlayVarious
};

USTRUCT(BlueprintType)
struct FFlocksBoidBlueprintHandle
{
	GENERATED_USTRUCT_BODY()

public:
	FFlocksBoidBlueprintHandle()
	{

	}

	FFlocksBoidBlueprintHandle(unsigned int InHandle) : Handle(InHandle)
	{

	}

	unsigned int Handle = INVALID_BOID_HANDLE;
};

USTRUCT(BlueprintType)
struct FFlocksVolumeBlueprintHandle
{
	GENERATED_USTRUCT_BODY()

public:
	unsigned int Handle = INVALID_VOLUME_HANDLE;
};

USTRUCT(BlueprintType)
struct FFlocksAnimation
{
	GENERATED_USTRUCT_BODY()

public: 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	FName AnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float RateScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	int32 StartFrame;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	int32 NumberOfFrames;
};

USTRUCT(BlueprintType)
struct FFlocksAnimationVariationData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	FName AnimationName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	int32 MinLoops = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	int32 MaxLoops = 1;
};

UCLASS(BlueprintType)
class FLOCKS_API UFlocksAnimationData : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	UTexture2D* PositionTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	UTexture2D* NormalTexture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	bool bUseRandomStartTime = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	TArray<FFlocksAnimation> Animations;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	EFlocksAnimationMode AnimationMode;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "AnimationMode == EFlocksAnimationMode::LoopSingle", EditConditionHides))
	FName DefaultAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "AnimationMode == EFlocksAnimationMode::PlayVarious", EditConditionHides))
	TArray<FFlocksAnimationVariationData> AnimationVariations;
};

USTRUCT(BlueprintType)
struct FGroupResponseEntry
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 Group = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		EGroupResponses Response;
};

USTRUCT(BlueprintType)
struct FMaterialDataCustomValue
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bUseRandomRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Value;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "bUseRandomRange"))
		float MaxValue;

	float GetValue() const
	{
		return bUseRandomRange ? FMath::RandRange(Value, MaxValue) : Value;
	}
};

USTRUCT(BlueprintType)
struct FMeshRendererData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		class UStaticMesh* Mesh = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		TArray<class UMaterialInterface*> Materials;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 NumCustomDataValues = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		TArray<FMaterialDataCustomValue> DefaultCustomDataValues;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bCastShadow;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FTransform CustomPivot;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float MinAnimRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float MaxAnimRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		UFlocksAnimationData* AnimationData = nullptr;
};

USTRUCT(BlueprintType)
struct FSpawnTypeSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float SpawnRadius = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		ESpawnTypes SpawnType =	ESpawnTypes::AtWorld;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bRandomRotation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "!bRandomRotation"))
		FRotator SpawnRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "SpawnType == ESpawnTypes::AtActor"))
		class AActor* SpawnActor = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "SpawnType == ESpawnTypes::AtLocation"))
		FVector SpawnLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "SpawnType == ESpawnTypes::AtSpawnPoint"))
		int32 SpawnPointIndex;

	void GetLocationAndRotation(int32 Group, FVector& OutLocation, FRotator& OutRotation) const;
};

USTRUCT(BlueprintType)
struct FDefaultBoidSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MinSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MaxSpeed = 300.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MinTurning = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MaxTurning = 600.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MinScale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MaxScale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
	float MaxHealth = 100.0f;
};

USTRUCT(BlueprintType)
struct FBoidSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FVector Position;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FRotator Rotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 Actions;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 BlueprintID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Turning = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Speed = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Scale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Health = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float MaxHealth = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float AnimRateScale = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 Group = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		int32 MeshIndex = 0;
};

USTRUCT(BlueprintType)
struct FGroupSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Alignment = 1.2f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Cohesion = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Separation = 3.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Goal = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Flee = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float Restriction = 5.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float SeparationRadius = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float AlignmentRadius = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		float CohesionRadius = 500.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bPreferNonVerticalMovement = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		TArray<FGroupResponseEntry> GroupResponses;
};

USTRUCT(BlueprintType)
struct FVolumeInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FlocksVolumeTypes Type;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FlocksVolumeShapes Shape;

	UPROPERTY(BlueprintReadWrite, Category = "Flocks")
		FVector Position;

	UPROPERTY(BlueprintReadWrite, Category = "Flocks")
		FRotator Rotation;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bUseFalloff = false;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "bUseFalloff"))
		float Falloff = 1.0f;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "Shape == FlocksVolumeShapes::Sphere && bUseFalloff"))
		float InnerRadius = 100.0f;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "Shape == FlocksVolumeShapes::Sphere"))
		float OuterRadius = 500.0f;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "Shape == FlocksVolumeShapes::Box && bUseFalloff"))
		FVector InnerExtents = FVector(500.0f, 500.0f, 500.0f);

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "Shape == FlocksVolumeShapes::Box"))
		FVector OuterExtents = FVector(500.0f, 500.0f, 500.0f);

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		bool bAllGroups = true;

	UPROPERTY(Interp, EditAnywhere, BlueprintReadWrite, Category = "Flocks", Meta = (EditCondition = "!bAllGroups"))
		TArray<int32> InfluencesGroups;
};

USTRUCT(BlueprintType)
struct FPerGroupDefaultSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") int32 DefaultNumBoids = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") int32 MeshIndex = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FSpawnTypeSettings DefaultSpawnSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FDefaultBoidSettings BoidDefaultSettings;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FGroupSettings GroupDefaultSettings;
};