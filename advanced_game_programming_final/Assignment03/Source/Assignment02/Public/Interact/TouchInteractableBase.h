// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interact/InteractableBase.h"
#include "TouchInteractableBase.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API ATouchInteractableBase : public AInteractableBase
{
	GENERATED_BODY()
public:

	//Constructor
	ATouchInteractableBase();
	
	virtual void BeginPlay() override;

	//Box Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bounds")
		class UBoxComponent* boxComp;

	//Functions
	UFUNCTION()
		virtual void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		virtual void OnInteract_Implementation(AActor* Caller);
};
