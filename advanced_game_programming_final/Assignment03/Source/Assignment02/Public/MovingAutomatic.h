// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interact/TouchInteractableBase.h"
#include "MovingAutomatic.generated.h"

UCLASS()
class ASSIGNMENT02_API AMovingAutomatic : public ATouchInteractableBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingAutomatic();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Moving Settings")
		class UBoxComponent* endPoint;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Moving Settings")
		class UStaticMeshComponent* mesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Moving Settings")
		FVector startPos;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Moving Settings")
		FVector endPos;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		USoundBase* movingSound;

	bool move;
public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	float timeElapsed;
	bool forward;
	bool soundPlayed;


	UPROPERTY(EditAnywhere, Category = "Moving Settings")
		float moveDuration;

	UPROPERTY(EditAnywhere, Category = "Moving Settings")
		float waitTime;


	float waitDuration;
};
