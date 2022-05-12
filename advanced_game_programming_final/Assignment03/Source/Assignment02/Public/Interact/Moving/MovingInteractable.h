// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../MovingAutomatic.h"
#include "MovingInteractable.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API AMovingInteractable : public AMovingAutomatic
{
	GENERATED_BODY()
public:
	AMovingInteractable();

	virtual void OnInteract_Implementation(AActor* Caller);

	virtual void Tick(float DeltaTime) override;


protected:

private:


	UFUNCTION()
		void moveMesh(AActor* caller);
};
