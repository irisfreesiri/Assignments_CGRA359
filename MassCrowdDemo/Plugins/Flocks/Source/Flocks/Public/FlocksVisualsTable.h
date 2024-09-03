// Copyright 2021 Justin Kiesskalt, All Rights Reserved.

#pragma once
#include "FlocksBoidTable.h"
#include "FlocksAnimationTable.h"

class UInstancedStaticMeshComponent;
struct FlocksMeshRenderer;

struct FLOCKS_API FlocksVisualsTable : public FlocksBoidTable
{
	struct FTableData
	{
		float* BoidCustomData;
	};

	struct FAddBoidData
	{
		TArray<float> CustomDataValues;
		FlocksAnimationTable::FAddBoidData AnimationData;
	};

public:
	FlocksVisualsTable(AFlocksWorld* InWorld);
	~FlocksVisualsTable();

	FTableData* Lock();
	void Unlock();

	void Init(FMeshRendererData InMeshRendererData, UInstancedStaticMeshComponent* InISMComponent);

	virtual TArray<unsigned short> AddBoid(int32 Amount, BOID_HANDLE* Handles, const FAddBoidData* InData);
	virtual void RemoveBoid(int32 Amount, BOID_HANDLE* Handles);
	virtual void Update(float DeltaSeconds) override;

	void SetMaterialParam(FName Name, float Value);
	void SetMaterialParam(FName Name, UTexture2D* Value);
	void SetMaterialParam(FName Name, FVector Value);

	void SetMaterialCustomDataValue(BOID_HANDLE Boid, unsigned int ValueIndex, float Value);
	void SetMaterialCustomDataValueOnAll(unsigned int ValueIndex, float Value);

	int32 NumCustomDataValues;
	FTransform CustomPivot;
	FlocksAnimationTable* AnimationTable;
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> Materials;
	TWeakObjectPtr<class UInstancedStaticMeshComponent> ISMComponent;

private:
	FCriticalSection TableLock;
	FTableData Data[MAX_BOIDS];
};