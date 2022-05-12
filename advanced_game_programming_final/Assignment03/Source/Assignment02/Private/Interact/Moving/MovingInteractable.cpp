// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact/Moving/MovingInteractable.h"
#include <Components/BoxComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/GameplayStatics.h>

AMovingInteractable::AMovingInteractable()
{

	PrimaryActorTick.bCanEverTick = true;
	
}

void AMovingInteractable::OnInteract_Implementation(AActor* Caller)
{
	moveMesh(Caller);
}


void AMovingInteractable::Tick(float DeltaTime)
{
	if (move) {
		Super::Tick(DeltaTime);
	}
}

void AMovingInteractable::moveMesh(AActor* caller)
{
	move = true;

	
}
