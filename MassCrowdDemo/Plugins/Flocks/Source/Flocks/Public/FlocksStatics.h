// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FlocksStatics.generated.h"

class AFlocksWorld;
class USplineComponent;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FLineTraceForBoidsResult
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FVector HitWorldPosition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FVector HitNormal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") float Dist;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks") FFlocksBoidBlueprintHandle HitBoid;
};

/**
 *
 */
UCLASS()
class FLOCKS_API UFlocksStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
#pragma region Boids
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static AFlocksWorld* GetFlocksWorld();

	/// Adds a new boid to the given group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool AddBoid(int32 Group, FFlocksBoidBlueprintHandle& Boid);

	/// Adds a new boid to the given group at the specified location/rotation
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool AddBoidAtLocation(int32 Group, FVector Location, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid);

	/// Adds a new boid to the given group at the specified actor
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool AddBoidAtActor(int32 Group, AActor* Actor, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid);

	/// Adds a new boid to the given group at the specified spawn point (See world settings) with the specified rotation
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool AddBoidAtSpawnPoint(int32 Group, int32 SpawnPoint, bool bRandomRotation, FRotator Rotation, float RandomRadius, FFlocksBoidBlueprintHandle& OutBoid);

	/// Adds a new boid to the given group, using the specified mesh at the specified location/rotation
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool AddBoidAdvanced(int32 Group, int32 MeshIndex, const FSpawnTypeSettings& Settings, FFlocksBoidBlueprintHandle& OutBoid);

	/// Adds a new boid to the given group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static TArray<FFlocksBoidBlueprintHandle> BatchAddBoids(int32 Amount);

	/// Adds a new boid to the given group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void BatchRemoveBoids(int32 Amount);

	/// Removes a boid given a boid handle
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RemoveBoid(const FFlocksBoidBlueprintHandle& Boid);

	/// Updates a boid to have the new Max Health
	/// If bKeepHealthPercent is checked, the boid will maintain the same percentage of health that they used to have
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetMaxHealthForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewMaxHealth, bool bKeepHealthPercent);

	/// Updates a boid to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewSpeed);

	/// Updates a boid to have the new turning speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewTurningSpeed);

	/// Updates a boid to have the new scale
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewScale);

	/// Updates a boid to have the new animation rate
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewAnimRate);

	/// Updates a boid to have the new speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed);

	/// Updates a boid to have the new turning speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed);

	/// Updates a boid to have the new scale randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale);

	/// Updates a boid to have the new anim rate randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate);

	/// Updates a boid to have the new speed clamped between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void ClampSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinSpeed, float MaxSpeed);

	/// Updates a boid to have the new turning speed clamped between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void ClampTurningSpeedForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinTurningSpeed, float MaxTurningSpeed);

	/// Updates a boid to have the new scale clamped between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void ClampScaleForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinScale, float MaxScale);

	/// Updates a boid to have the new anim rate clamped between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void ClampAnimRateForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinAnimRate, float MaxAnimRate);

	/// Updates a boid speed/turning speed/scale to the specified values
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateSettingsForBoid(const FFlocksBoidBlueprintHandle& Boid, const FDefaultBoidSettings& Settings, bool bKeepHealthPercent);

	/// Updates all boids to have the new Max Health
	/// If bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetMaxHealthForAllBoids(float NewMaxHealth, bool bKeepHealthPercent);

	/// Updates all boids to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetSpeedForAllBoids(float NewSpeed);

	/// Updates all boids to have the new turning speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetTurningSpeedForAllBoids(float NewTurningSpeed);

	/// Updates all boids to have the new scale
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetScaleForAllBoids(float NewScale);

	/// Updates all boids to have the new anim rate
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetAnimRateForAllBoids(float NewAnimRate);

	/// Updates all boids to have the new speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeSpeedForAllBoids(float MinSpeed, float MaxSpeed);

	/// Updates all boids to have the new turning speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeTurningSpeedForAllBoids(float MinTurningSpeed, float MaxTurningSpeed);

	/// Updates all boids to have the new scale randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeScaleForAllBoids(float MinScale, float MaxScale);

	/// Updates all boids to have the new anim rate randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeAnimRateForAllBoids(float MinAnimRate, float MaxAnimRate);

	/// Updates all boids speed/turning speed/scale to the specified values
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateSettingsForAllBoids(const FDefaultBoidSettings& Settings, bool bKeepHealthPercent);

	/// Updates all boids in the specified group to have the new Max Health
	/// If bKeepHealthPercent is checked, the boids will maintain the same percentage of health that they used to have
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetMaxHealthForAllBoidsInGroup(int32 Group, float NewMaxHealth, bool bKeepHealthPercent);

	/// Updates all boids in the specified group to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetSpeedForBoidsInGroup(int32 Group, float NewSpeed);

	/// Updates all boids in the specified group to have the new turning speed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetTurningSpeedForBoidsInGroup(int32 Group, float NewTurningSpeed);

	/// Updates all boids in the specified group to have the new scale
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetScaleForBoidsInGroup(int32 Group, float NewScale);

	/// Updates all boids in the specified group to have the new anim rate
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetAnimRateForBoidsInGroup(int32 Group, float NewAnimRate);

	/// Updates all boids in the specified group to have the new speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeSpeedForAllBoidsInGroup(int32 Group, float MinSpeed, float MaxSpeed);

	/// Updates all boids in the specified group to have the new turning speed randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeTurningSpeedForAllBoidsInGroup(int32 Group, float MinTurningSpeed, float MaxTurningSpeed);

	/// Updates all boids in the specified group to have the new scale randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeScaleForAllBoidsInGroup(int32 Group, float MinScale, float MaxScale);

	/// Updates all boids in the specified group to have the new anim rate randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void RandomizeAnimRateForAllBoidsInGroup(int32 Group, float MinAnimRate, float MaxAnimRate);

	/// Updates all boids in the specified group speed/turning speed/scale to the specified values
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateSettingsForAllBoidsInGroup(int32 Group, const FDefaultBoidSettings& Settings, bool bKeepHealthPercent);

	/// Updates the default Max Health for newly spawned boids in the specified group to have the new value.
	/// Update Health Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultMaxHealthForGroup(int32 Group, float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode);

	/// Updates the default speed for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultSpeedForGroup(int32 Group, float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default turning speed for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultTurningSpeedForGroup(int32 Group, float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default scale for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultScaleForGroup(int32 Group, float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default anim rate for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultAnimRateForMesh(int32 MeshIndex, float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default speed/turning speed/scale for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultSettingsForGroup(int32 Group, const FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode);

	/// Updates the default Max Health for newly spawned boids to have the new value.
	/// Update Health Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultMaxHealthForAllGroups(float NewMaxHealth, EUpdateBoidDefaultHealthMode UpdateHealthMode);

	/// Updates the default speed for newly spawned boids in all gropus to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultSpeedForAllGroups(float MinSpeed, float MaxSpeed, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default turning speed for newly spawned boids in all gropus to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultTurningSpeedForAllGroups(float MinTurningSpeed, float MaxTurningSpeed, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default scale for newly spawned boids in all gropus to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultScaleForAllGroups(float MinScale, float MaxScale, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default anim rate for newly spawned boids in all gropus to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultAnimRateForAllMeshes(float MinAnimRate, float MaxAnimRate, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default speed/turning speed/scale for newly spawned boids in all groups to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void UpdateBoidDefaultSettingsForAllGroups(const FDefaultBoidSettings& Settings, EUpdateBoidDefaultsMode UpdateMode, EUpdateBoidDefaultHealthMode UpdateHealthMode);
#pragma endregion
	
#pragma region Groups
	/// Updates the cohesion weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupCohesion(int32 Group, float Cohesion);

	/// Updates the separation weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupSeparation(int32 Group, float Separation);

	/// Updates the alignment weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupAlignment(int32 Group, float Alignment);

	/// Updates the goal weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupGoal(int32 Group, float Goal);

	/// Updates the flee weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupFlee(int32 Group, float Flee);

	/// Updates the restriction weighting for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupRestriction(int32 Group, float Restriction);

	/// Updates the Prefer Non Vertical Movement Value for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupPreferNonVerticalMovement(int32 Group, bool bPreferNonVerticalMovement);

	/// Updates the cohesion radius for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupCohesionRadius(int32 Group, float CohesionRadius);

	/// Updates the separation radius for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupSeparationRadius(int32 Group, float SeparationRadius);

	/// Updates the alignment radius for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupAlignmentRadius(int32 Group, float AlignmentRadius);

	/// Changes how the specified group will react with the other group. NOTE: This is a one way relationship - call this on both groups to affect them both.
	/// Response options are Flock or Ignore
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupResponseToGroup(int32 Group, int32 OtherGroup, EGroupResponses Response);

	/// Updates the flocking values for the specified group
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetGroupSettings(int32 Group, const FGroupSettings& Settings);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static void GetGroupSettings(int32 Group, FGroupSettings& Settings);
#pragma endregion

#pragma region Material Values
	/// Sets a custom material float on the specified boid. This relates to the PerInstanceCustomData in the material.
	/// If applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetBoidMaterialCustomValue(const FFlocksBoidBlueprintHandle& Boid, const int32 ValueIndex, const float Value);

	/// Sets a custom material float on all boids. This relates to the PerInstanceCustomData in the material.
	/// If applying a large selection of values - uncheck ApplyImmediate and call ApplyBoidMaterialCustomValues when complete
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetBoidMaterialCustomValueOnAll(const int32 ValueIndex, const float Value);
#pragma endregion

#pragma region Getters
	/// Returns the location of all boids in the sim
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static TArray<FVector> GetAllBoidLocations();

	/// Returns the location of all boids of the passed in handles
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static TArray<FVector> GetBoidLocations(TArray<FFlocksBoidBlueprintHandle> Boids);

	/// Returns whether the specified boid handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool IsValidBoidHandle(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns whether the specified volume handle is valid. Invalid handles may not have been set - or they could have been deleted elsewhere
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool IsValidVolumeHandle(const FFlocksVolumeBlueprintHandle& Volume);

	/// Returns the location of the specified boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static FVector GetBoidLocation(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the rotation of the specified boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static FRotator GetBoidHeading(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static int32 GetBoidGroup(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidSpeed(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidTurningSpeed(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidScale(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidAnimRate(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the health of the specified boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidHealth(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the Max Health of the specified boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidMaxHealth(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the percentage of health of the specified boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static float GetBoidHealthPercent(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the radius and center of the boid's bounds (this is used for line trace checks)
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static void GetBoidRadiusAndCenter(const FFlocksBoidBlueprintHandle& Boid, float& OutRadius, FVector& OutCenter);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static FBoidSettings GetBoidSettings(const FFlocksBoidBlueprintHandle& Boid);

	/// Returns the material instances for the given mesh index
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static void GetMaterialInstances(int32 MeshIndex, TArray<UMaterialInstanceDynamic*>& OutMaterials);

	/// Returns the static mesh the boid is using, or null if its an invalid boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static UStaticMesh* GetMeshForBoid(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool GetBoidFromBlueprintID(int32 BlueprintID, FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool GetBoidBlueprintID(const FFlocksBoidBlueprintHandle& Boid, int32& BlueprintID);

	/// Given an index, returns the boid - this allows for loops to iterate over every boid
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool GetBoidAtIndex(const int32 Index, FFlocksBoidBlueprintHandle& Boid);

	/// Returns the number of boids in the simulation
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static int32 GetNumBoids();

	/// Returns the maximum number of supported groups
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static int32 GetMaxGroups();
#pragma endregion

#pragma region Utilities
	/// Traces a line between the start and end and returns info about the boid that was hit
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool LineTraceForBoid(FVector Start, FVector End, FLineTraceForBoidsResult& Result);

	/// Traces a line between the start and end and returns info about the boids that were hit
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static bool LineTraceForBoids(FVector Start, FVector End, TArray<FLineTraceForBoidsResult>& Result);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static TArray<FFlocksBoidBlueprintHandle> GetAllBoidsInSphere(const FVector& Origin, float Radius);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool IsBoidFleeing(const FFlocksBoidBlueprintHandle& Boid);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static bool IsBoidGoaling(const FFlocksBoidBlueprintHandle& Boid);
#pragma	endregion

#pragma region Volumes
	UFUNCTION(BlueprintPure, Category = "Flocks")
		static void GetVolumeBounds(const FFlocksVolumeBlueprintHandle& Volume, FVector& BoundsCenter, FVector& BoundsExtents, float& BoundsRadius);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static TArray<FFlocksBoidBlueprintHandle> GetAllBoidsAffectedByVolume(const FFlocksVolumeBlueprintHandle& Volume);

	UFUNCTION(BlueprintPure, Category = "Flocks")
		static int32 GetNumBoidsAffectedByVolume(const FFlocksVolumeBlueprintHandle& Volume);
#pragma endregion

#pragma region Health
	/// Sets the health for the specified boid
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void SetHealthForBoid(const FFlocksBoidBlueprintHandle& Boid, float Health, AController* Instigator, bool& OutKilled);

	/// Applies damage to the specified boid - returns whether the boid was killed
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void DamageBoid(const FFlocksBoidBlueprintHandle& Boid, float Damage, AController* Instigator, bool& OutKilled);

	/// Restores health on the specified boid
	UFUNCTION(BlueprintCallable, Category = "Flocks")
		static void HealBoid(const FFlocksBoidBlueprintHandle& Boid, float Heal, AController* Instigator);
#pragma endregion


#pragma region Deprecated Functions
	/// Updates a boid to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use Set Speed For Boid Instead."))
		static void SetVelocityForBoid(const FFlocksBoidBlueprintHandle& Boid, float NewVelocity);

	/// Updates a boid to have the new velocity randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use RandomizeVelocityForBoid Instead."))
		static void RandomizeVelocityForBoid(const FFlocksBoidBlueprintHandle& Boid, float MinVelocity, float MaxVelocity);

	/// Updates all boids to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use SetVelocityForAllBoids Instead."))
		static void SetVelocityForAllBoids(float NewVelocity);

	/// Updates all boids to have the new velocity randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use RandomizeVelocityForAllBoids Instead."))
		static void RandomizeVelocityForAllBoids(float MinVelocity, float MaxVelocity);

	/// Updates all boids in the specified group to have the new speed
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use SetVelocityForBoidsInGroup Instead."))
		static void SetVelocityForBoidsInGroup(int32 Group, float NewVelocity);

	/// Updates all boids in the specified group to have the new velocity randomly between the given range
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use RandomizeVelocityForAllBoidsInGroup Instead."))
		static void RandomizeVelocityForAllBoidsInGroup(int32 Group, float MinVelocity, float MaxVelocity);

	/// Updates the default velocity for newly spawned boids in the specified group to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use UpdateBoidDefaultVelocityForGroup Instead."))
		static void UpdateBoidDefaultVelocityForGroup(int32 Group, float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode);

	/// Updates the default velocity for newly spawned boids in all gropus to have the new range.
	/// Update Mode specifies what happens to the values of the existing boids
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "Use UpdateBoidDefaultVelocityForAllGroups Instead."))
		static void UpdateBoidDefaultVelocityForAllGroups(float MinVelocity, float MaxVelocity, EUpdateBoidDefaultsMode UpdateMode);

	/// Call to apply the MaterialCustomValue changes to the specified boid
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "ApplyBoidMaterialCustomValues Is No Longer Needed, Remove this node."))
		static void ApplyBoidMaterialCustomValues(const FFlocksBoidBlueprintHandle& Boid);

	/// Call to apply the MaterialCustomValue changes on all boids
	UFUNCTION(BlueprintCallable, Category = "Flocks", Meta = (DeprecatedFunction, DeprecationMessage = "ApplyAllBoidMaterialCustomValues Is No Longer Needed, Remove this node."))
		static void ApplyAllBoidMaterialCustomValues();
#pragma endregion

private:
	static FThreadSafeCounter ParallelBoidCounter;
	static FLineTraceForBoidsResult LineTraceResults[MAX_BOIDS];
};
