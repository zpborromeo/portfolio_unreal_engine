// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact/Obstacle.h"
#include <Components/BoxComponent.h>
#include "Kismet/GameplayStatics.h"

AObstacle::AObstacle()
{

	boxComp->InitBoxExtent(FVector(50, 50, 50));

	damage = 10.f;

	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	mesh->SetupAttachment(RootComponent);
	static ConstructorHelpers::FObjectFinder<UStaticMesh>Mesh(TEXT("'/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere'"));
	if (Mesh.Succeeded())
	{
		mesh->SetStaticMesh(Mesh.Object);
	}
	mesh->SetSimulatePhysics(true);
	MeshLocation = FVector(0.f, 0.f, -50.f);
	mesh->SetRelativeLocation(MeshLocation);
	mesh->SetVisibility(true);
	mesh->SetWorldScale3D(FVector(.5f));
}

void AObstacle::OnInteract_Implementation(AActor* Caller)
{	
	UGameplayStatics::ApplyDamage(Caller, damage, GetWorld()->GetFirstPlayerController(), this, UDamageType::StaticClass());
}
