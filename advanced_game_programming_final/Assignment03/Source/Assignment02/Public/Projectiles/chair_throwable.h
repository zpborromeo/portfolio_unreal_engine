// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectiles/ProjectileBase.h"
#include "chair_throwable.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API Achair_throwable : public AProjectileBase
{
	GENERATED_BODY()


public: 
	
	Achair_throwable();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BeginPlay();
	


};
