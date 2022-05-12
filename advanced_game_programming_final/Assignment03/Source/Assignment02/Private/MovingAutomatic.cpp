// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingAutomatic.h"
#include <Components/BoxComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/GameplayStatics.h>

// Sets default values
AMovingAutomatic::AMovingAutomatic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Moving Static Mesh"));
	mesh->SetupAttachment(RootComponent);
	mesh->SetCollisionProfileName("BlockAll");

	endPoint = CreateDefaultSubobject<UBoxComponent>(TEXT("End Point"));
	endPoint->InitBoxExtent(FVector(150, 100, 100));
	endPoint->SetCollisionProfileName("Trigger");



	timeElapsed = 0.f;
	moveDuration = 3.f;
	waitTime = 1.f;
	waitDuration = waitTime;

	forward = true;
	move = false;
	soundPlayed = false;

	startPos = GetActorLocation();
	endPos = FVector(0);
}

// Called when the game starts or when spawned
void AMovingAutomatic::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMovingAutomatic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (waitDuration > 0)
	{
		waitDuration -= DeltaTime;
	}
	else if (timeElapsed < moveDuration)
	{
		if (movingSound != nullptr && !soundPlayed)
		{
			soundPlayed = true;
			UGameplayStatics::PlaySoundAtLocation(this, movingSound, GetActorLocation());
		}

		if (forward) {
			SetActorLocation(FMath::Lerp(startPos, endPos, timeElapsed / moveDuration));
		}
		else
		{
			SetActorLocation(FMath::Lerp(endPos, startPos, timeElapsed / moveDuration));
		}
		timeElapsed += DeltaTime;
	}
	else
	{
		timeElapsed = 0;
		move = false;
		soundPlayed = false;
		waitDuration = waitTime;
		forward = !forward;
	}
}

