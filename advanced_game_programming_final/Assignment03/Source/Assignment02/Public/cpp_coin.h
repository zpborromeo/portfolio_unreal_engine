// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact/TouchInteractableBase.h"
#include "cpp_coin.generated.h"

class USoundBase;

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API Acpp_coin : public ATouchInteractableBase
{
	GENERATED_BODY()
	
public:
	Acpp_coin();

	void OnInteract_Implementation(AActor* Caller) override;

	void Tick(float DeltaTime);

private:
	UPROPERTY(EditAnywhere, Category = Meshes)
		UStaticMeshComponent* coinMesh;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* CoinPickup;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float PitchValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float YawValue;

	UPROPERTY(EditAnywhere, Category = "Movement")
		float RollValue;
};
