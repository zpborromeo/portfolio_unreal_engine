// Fill out your copyright notice in the Description page of Project Settings.


#include "SDoor.h"
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetMathLibrary.h>

// Sets default values
ASDoor::ASDoor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	doorFrameMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door Frame"));
	RootComponent = doorFrameMesh;

	doorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Door"));
	doorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	doorMesh->SetupAttachment(RootComponent);
	
	doorMesh->SetRelativeLocation(FVector(0.0f, 50.0f, 0));
	doorMesh->SetRelativeScale3D(FVector(1.f, 1.1f, 1.0f));
	isOpen = false;
	maxDegree = 90.f;
	doorSpeed = .01f;
	
}

// Called when the game starts or when spawned
void ASDoor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void ASDoor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	doorRotation = doorMesh->GetRelativeRotation();

	if (isOpen)
	{
		//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, TEXT("Opening"));
		doorMesh->SetRelativeRotation(FMath::Lerp(FQuat(doorRotation), FQuat(FRotator(0.0f, RotateValue, 0.0f)), doorSpeed));
	}
	else
	{
		doorMesh->SetRelativeRotation(FMath::Lerp(FQuat(doorRotation), FQuat(FRotator(0.0f, 0.0f, 0.0f)), doorSpeed));
	}
}


void ASDoor::OpenDoor(AActor* OtherActor)
{

	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Opened"));
	if (OtherActor != nullptr && OtherActor != this)
	{
		FVector PawnLocation = OtherActor->GetActorLocation();
		FVector Direction = GetActorLocation() - PawnLocation;
		Direction = UKismetMathLibrary::LessLess_VectorRotator(Direction, GetActorRotation());

		if (Direction.X > 0.0f)
		{
			RotateValue = maxDegree;
		}
		else
		{
			RotateValue = -maxDegree;
		}
		doorMesh->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		isOpen = true;
	}
}

void ASDoor::CloseDoor(AActor* OtherActor)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("Closed"));
	doorRotation = doorMesh->GetRelativeRotation();
	if (OtherActor != nullptr && OtherActor != this)
	{
		doorMesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		isOpen = false;
	}
}


void ASDoor::OnInteract_Implementation(AActor* Caller)
{
	
	if (isOpen)
		CloseDoor(Caller);
	else
		OpenDoor(Caller);
}

void ASDoor::StartFocus_Implementation()
{
}

void ASDoor::EndFocus_Implementation()
{
}

