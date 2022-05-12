// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/chair_throwable.h"

#include <Components/SphereComponent.h>
#include "GameFramework/ProjectileMovementComponent.h"
#include <character_stuff/CharacterBase.h>


Achair_throwable::Achair_throwable()
{
	damage = 20.f;
	mesh->SetMassOverrideInKg(NAME_None, 100, true);
	mesh->GetBodyInstance()->UpdateMassProperties();
}

void Achair_throwable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void Achair_throwable::BeginPlay()
{
	Super::BeginPlay();
}


