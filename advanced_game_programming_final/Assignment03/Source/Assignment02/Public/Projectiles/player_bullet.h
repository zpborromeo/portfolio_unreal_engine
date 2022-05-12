// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Projectiles/chair_throwable.h"
#include "player_bullet.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT02_API Aplayer_bullet : public Achair_throwable
{
	GENERATED_BODY()

			void OnInteract_Implementation(AActor* Caller) override;
};
