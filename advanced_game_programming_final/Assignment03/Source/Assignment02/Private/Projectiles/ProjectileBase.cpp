// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/ProjectileBase.h"
#include <Components/SphereComponent.h>
#include "GameFramework/ProjectileMovementComponent.h"
#include <../public/character_stuff/CharacterBase.h>
#include "Kismet/GameplayStatics.h"
#include <sstream>

// Sets default values
AProjectileBase::AProjectileBase()
{
	
	// Use this component to drive this projectile's movement.
	ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
	ProjectileMovementComponent->SetUpdatedComponent(mesh);
	ProjectileMovementComponent->InitialSpeed = 1500.0f;
	ProjectileMovementComponent->MaxSpeed = 3000.0f;
	ProjectileMovementComponent->bRotationFollowsVelocity = true;
	ProjectileMovementComponent->ProjectileGravityScale = 0.1f;
	InitialLifeSpan = 4.f;



}

void AProjectileBase::FireInDirection(const FVector& ShootDirection)
{
	
	ProjectileMovementComponent->Velocity = ShootDirection * ProjectileMovementComponent->InitialSpeed;

	//FString TheFloatStr = FString::SanitizeFloat(ProjectileMovementComponent->Velocity.Z);
	
}

void AProjectileBase::OnInteract_Implementation(AActor* Caller)
{
	//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("damage?"));
	//UGameplayStatics::ApplyDamage(Caller, damage, GetWorld()->GetFirstPlayerController(), this, UDamageType::StaticClass());
}

