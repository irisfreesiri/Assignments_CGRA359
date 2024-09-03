// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "CoreMinimal.h"
#include "FlocksStateTable.h"
#include "FlocksVolumeInfoTable.h"
#include "FlocksVolumeOverlapsTable.h"
#include "FlocksVisualsTable.h"
#include "GameFramework/Actor.h"
#include "FlocksWorld.generated.h"

struct FlocksMeshRenderer;
struct IndexArray;
struct FlocksTable;
struct FlocksStateTable;
struct FlocksVisualsTable;
struct FlocksLookUpTable;
struct FlocksDatabaseHeader;
struct FlocksBoidMap;
struct FlocksVolumeInfoTable;

class AController;
class AActor;
class USkeletalMesh;
class UAnimSequence;
class USplineComponent;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnBoidKilledDelegate, const FFlocksBoidBlueprintHandle&, Boid, const AController*, CausedBy);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnBoidHealthChangedDelegate, const FFlocksBoidBlueprintHandle&, Boid, float, OldHealth, float, NewHealth, const AController*, CausedBy);

UCLASS()
class FLOCKS_API AFlocksWorld : public AActor
{
	GENERATED_BODY()

public:
	struct FAddBoidData
	{
		FlocksStateTable::FAddBoidData StateData;
		FlocksVisualsTable::FAddBoidData VisualsData;
	};

	struct FAddVolumeData
	{
		FlocksVolumeInfoTable::FAddVolumeData InfoData;
		FlocksVolumeOverlapsTable::FAddVolumeData OverlapsData;
	};

	struct FFlocksGroupData
	{
		float GroupAlignment;
		float GroupCohesion;
		float GroupSeparation;
		float GroupGoal;
		float GroupFlee;
		float GroupRestriction;
		float GroupSeparationRadius;
		float GroupCohesionRadius;
		float GroupAlignmentRadius;
		float GroupNonVerticalMovementFactor;
		FVector2f Padding;
		int32 GroupResponseToGroups[MAX_GROUPS];
	};

	struct FDefaultBoidSettingsData
	{
		float MinSpeed;
		float MaxSpeed;
		float MinTurningSpeed;
		float MaxTurningSpeed;
		float MinScale;
		float MaxScale;
		float MaxHealth;
		int32 MeshIndex;
		FSpawnTypeSettings SpawnSettings;
	};

	struct FDefaultMeshSettingsData
	{
		float MinAnimRateScale;
		float MaxAnimRateScale;
		TArray<FMaterialDataCustomValue> DefaultCustomDataValues;
	};

public:
	AFlocksWorld();
	~AFlocksWorld();

public:

	/// <summary>
	/// If true the simulation will run on the GPU - otherwise it'll execute in parallel on the CPU
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		uint8 bGPUSim:1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		uint8 bTrackVolumeOverlaps:1;

	/// <summary>
	/// The maximum number of neighbours per cell each boid will consider. Lower to increase framerate - raise to increase flocks accuracy
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		int32 MaxNeighbourChecks = 3;

	/// <summary>
	/// Spawn points to use as spawn locations
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		TArray<AActor*> SpawnPoints;

	/// <summary>
	/// When performing flocking behaviour, the boids are first split up into cells. 
	/// They will only perform neighbour checks on boids in their immediately surrounding cells. This is the unit size for those cells.
	/// Increasing this will further the neighbour check range but could also lower framerate.
	/// Ideally set to 0.75x the largest flocking influence range.
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		float CellSize = 200.0f;

	/// <summary>
	/// These Custom data values are reserved for plugin use. Please start your index in materials after this value.
	/// </summary>
	UPROPERTY(VisibleAnywhere, Category = "Flocks")
		int32 PluginReservedCustomDataValues = 3;

	UPROPERTY(BlueprintAssignable, Category = "Flocks")
		FOnBoidHealthChangedDelegate BoidHealthChangedDelegate;

	UPROPERTY(BlueprintAssignable, Category = "Flocks")
		FOnBoidKilledDelegate BoidKilledDelegate;

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnBoidAdded(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnBoidRemoved(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnBoidKilled(const FFlocksBoidBlueprintHandle& Boid, AController* CausedBy);

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnBoidHealthChanged(const FFlocksBoidBlueprintHandle& Boid, float OldHealth, float NewHealth, AController* CausedBy);

public:
	virtual void BeginPlay() override;
	virtual void PreInitializeComponents() override;
	virtual void PostInitializeComponents() override;
	virtual void Tick(float DeltaTime) override;
	virtual void EndPlay(const EEndPlayReason::Type Reason) override;

	FFlocksGroupData* LockGroupData();
	void UnlockGroupData();

	virtual void NativeBoidKilled(BOID_HANDLE Boid, AController* CausedBy);
	virtual void NativeBoidHealthChanged(BOID_HANDLE Boid, float OldHealth, float NewHealth, AController* CausedBy);

	BOID_HANDLE AddBoid(int32 Group);
	BOID_HANDLE AddBoid(int32 Group, int32 MeshIndex);
	BOID_HANDLE AddBoid(int32 Group, const FSpawnTypeSettings& SpawnSettings);
	BOID_HANDLE AddBoid(int32 Group, int32 MeshIndex, const FSpawnTypeSettings& SpawnSettings);

	TArray<BOID_HANDLE> BatchAddBoids(int32 Amount, int32 Group = -1);
	void BatchRemoveBoids(int32 Amount);

	void RemoveBoid(BOID_HANDLE Boid);
	void RemoveBoidNextFrame(BOID_HANDLE Boid);

	VOLUME_HANDLE AddVolume(const FVolumeInfo& Info);
	bool RemoveVolume(VOLUME_HANDLE Volume);

public:
	static TWeakObjectPtr<AFlocksWorld> WorldInst;

	FlocksDatabaseHeader* DatabaseHeader;

	FlocksBoidMap* BoidMap;
	FlocksStateTable* StateTable;
	FlocksVisualsTable* VisualsTable[MAX_MESHES];
	FlocksVolumeInfoTable* VolumeInfoTable;
	FlocksVolumeOverlapsTable* VolumeOverlapsTable;
	UInstancedStaticMeshComponent* ISMComponents[MAX_MESHES];

	// Default Boid Settings
	FDefaultBoidSettingsData DefaultBoidSettings[MAX_GROUPS];

	// Default Boid Settings
	FDefaultMeshSettingsData DefaultMeshSettings[MAX_MESHES];

public:
	class FlocksShaderManager* FlockShader;
	FCriticalSection GroupDataLock;

private:
	/// <summary>
	/// The meshes that each boid can select from
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks", Meta = (AllowPrivateAccess = "True"))
		TArray<FMeshRendererData> Meshes;

	/// <summary>
	/// Settings array containing all group information about the boids
	/// </summary>
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks", Meta = (AllowPrivateAccess = "True"))
		TArray<FPerGroupDefaultSettings> Settings;

	TArray<BOID_HANDLE> AddBoid_Internal(int32 Amount, const FAddBoidData* AddBoidData);
	void RemoveBoid_Internal(int32 Amount, BOID_HANDLE* Handles);

	VOLUME_HANDLE AddVolume_Internal(const FAddVolumeData& AddVolumeData);
	void FlushBoidsPendingDelete();

	void UpdateVolumes(float DeltaTime);
	void UpdateBoids(float DeltaTime);

	int32 NumBoidsPendingDelete = 0;
	BOID_HANDLE* BoidsPendingDelete;

	// Group Settings
	FFlocksGroupData GroupData[MAX_GROUPS];

	uint8 bCachedExecuteGPU;
};
