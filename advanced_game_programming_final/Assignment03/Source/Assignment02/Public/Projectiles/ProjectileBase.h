// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <../Public/Interact/Obstacle.h>
#include "ProjectileBase.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class ASSIGNMENT02_API AProjectileBase : public AObstacle
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectileBase();

protected:

public:	

	// Function that initializes the projectile's velocity in the shoot direction.
	void FireInDirection(const FVector& ShootDirection);
	//Box Mesh
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovementComponent")
		UProjectileMovementComponent* ProjectileMovementComponent;

		virtual void OnInteract_Implementation(AActor* Caller) override;
};
