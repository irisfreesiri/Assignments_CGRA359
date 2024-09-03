// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#include "FlocksVolumeActor.h"
#include "FlocksWorld.h"
#include "FlocksVolumeInfoTable.h"
#include "DrawDebugHelpers.h"
#include "FlocksDatabaseHeader.h"

static TAutoConsoleVariable<bool> CVarDrawVolumesInRuntime(TEXT("flocks.DrawRuntimeVolumes"), false, TEXT("Show Flocks Volumes at Runtime."));

AFlocksVolumeActor::AFlocksVolumeActor()
{
	PrimaryActorTick.bCanEverTick = true;
	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
}

AFlocksVolumeActor::~AFlocksVolumeActor()
{

}

void AFlocksVolumeActor::PostInitializeComponents()
{
	Super::PostInitializeComponents();

	Info.Position = GetActorLocation();

	if (StartEnabled)
	{
		EnableVolume();
	}
	else
	{
		DisableVolume();
	}
}

void AFlocksVolumeActor::EndPlay(const EEndPlayReason::Type Reason)
{
	Super::EndPlay(Reason);

	if (AFlocksWorld::WorldInst != nullptr)
	{
		AFlocksWorld::WorldInst->RemoveVolume(Handle);
	}
}

void AFlocksVolumeActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	#if WITH_EDITORONLY_DATA
	if(IsSelected() || (GetWorld()->WorldType == EWorldType::PIE && CVarDrawVolumesInRuntime.GetValueOnAnyThread()))
	{
		Info.InnerRadius = FMath::Clamp(Info.InnerRadius, 0.0f, Info.OuterRadius);
		Info.InnerExtents.X = FMath::Clamp(Info.InnerExtents.X, 0.0f, Info.OuterExtents.X);
		Info.InnerExtents.Y = FMath::Clamp(Info.InnerExtents.Y, 0.0f, Info.OuterExtents.Y);
		Info.InnerExtents.Z = FMath::Clamp(Info.InnerExtents.Z, 0.0f, Info.OuterExtents.Z);

		FColor color = Info.Type == FlocksVolumeTypes::Flee ? FColor::Red : (Info.Type == FlocksVolumeTypes::Goal ? FColor::Yellow : FColor::White);

		switch (Info.Shape)
		{
			case FlocksVolumeShapes::Sphere:
				if(Info.bUseFalloff)
					DrawDebugSphere(GetWorld(), GetActorLocation(), Info.InnerRadius, 8, color);
				
				DrawDebugSphere(GetWorld(), GetActorLocation(), Info.OuterRadius, 20, color);
			break;

			case FlocksVolumeShapes::Box:
				if (Info.bUseFalloff)
					DrawDebugBox(GetWorld(), GetActorLocation(), Info.InnerExtents, GetActorQuat(), color);

				DrawDebugBox(GetWorld(), GetActorLocation(), Info.OuterExtents, GetActorQuat(), color);
			break;
		}

		FlushPersistentDebugLines(GetWorld());
	}
	#endif
}

void AFlocksVolumeActor::GetVolumeHandle(FFlocksVolumeBlueprintHandle& OutHandle) const
{
	OutHandle.Handle = Handle;
}

void AFlocksVolumeActor::EnableVolume()
{
	if (AFlocksWorld::WorldInst != nullptr && !AFlocksWorld::WorldInst->DatabaseHeader->IsValidVolume(Handle))
	{
		Handle = AFlocksWorld::WorldInst->AddVolume(Info);
	}

	OnEnableVolume();
}

void AFlocksVolumeActor::DisableVolume()
{
	if (AFlocksWorld::WorldInst != nullptr && AFlocksWorld::WorldInst->DatabaseHeader->IsValidVolume(Handle))
	{
		AFlocksWorld::WorldInst->RemoveVolume(Handle);
		Handle = INVALID_VOLUME_HANDLE;
	}

	OnDisableVolume();
}

bool AFlocksVolumeActor::ShouldTickIfViewportsOnly() const
{
	return true;
}