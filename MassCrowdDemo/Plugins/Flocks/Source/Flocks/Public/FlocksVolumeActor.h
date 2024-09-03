// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksTypes.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FlocksVolumeActor.generated.h"

UCLASS()
class FLOCKS_API AFlocksVolumeActor : public AActor
{
	GENERATED_BODY()

public:
	AFlocksVolumeActor();
	~AFlocksVolumeActor();

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Flocks")
		bool StartEnabled = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Flocks")
		FVolumeInfo Info;

	virtual void PostInitializeComponents() override;
	virtual void EndPlay(const EEndPlayReason::Type Reason);
	virtual void Tick(float DeltaTime) override;
	virtual bool ShouldTickIfViewportsOnly() const override;

	UFUNCTION(BlueprintCallable, Category = "Flocks")
		void EnableVolume();

	UFUNCTION(BlueprintCallable, Category = "Flocks")
		void DisableVolume();

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnEnableVolume();

	UFUNCTION(BlueprintImplementableEvent, Category = "Flocks")
		void OnDisableVolume();

	UFUNCTION(BlueprintPure, Category = "Flocks")
		void GetVolumeHandle(FFlocksVolumeBlueprintHandle& OutHandle) const;

	VOLUME_HANDLE Handle = INVALID_VOLUME_HANDLE;
};
