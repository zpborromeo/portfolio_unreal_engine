// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact/TouchInteractableBase.h"
#include "Obstacle.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API AObstacle : public ATouchInteractableBase
{
	GENERATED_BODY()
	
public:

	AObstacle();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Meshes)
		UStaticMeshComponent* mesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Meshes)
		FVector MeshLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Meshes)
		float damage;

	void OnInteract_Implementation(AActor* Caller) override;
};
