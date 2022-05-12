// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <Components/BoxComponent.h>
#include "Public/Interact/InteractableBase.h"
#include "SDoor.generated.h"

UCLASS()
class ASSIGNMENT02_API ASDoor : public AInteractableBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASDoor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	void OnInteract(AActor* Caller);
	virtual void OnInteract_Implementation(AActor* Caller) override;

	void StartFocus();
	virtual void StartFocus_Implementation();
	
	void EndFocus();
	virtual void EndFocus_Implementation();

private:

	UPROPERTY(EditAnywhere, Category=Meshes)
		UStaticMeshComponent* doorMesh;

	UPROPERTY(EditAnywhere, Category = Meshes)
		UStaticMeshComponent* doorFrameMesh;

	UFUNCTION()
		void OpenDoor(AActor* Caller);

	UFUNCTION()
		void CloseDoor(AActor* Caller);

	bool isOpen;

	UPROPERTY(EditAnywhere, Category=Interactable)
		float maxDegree;
	UPROPERTY(EditAnywhere, Category = Interactable)
		float doorSpeed;
	float RotateValue;
	FRotator doorRotation;

	
};
