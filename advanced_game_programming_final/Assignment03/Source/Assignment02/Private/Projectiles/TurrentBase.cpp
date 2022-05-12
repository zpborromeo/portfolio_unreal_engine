// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectiles/TurrentBase.h"
#include "../public/Projectiles/ProjectileBase.h"
#include "TimerManager.h"
#include "DrawDebugHelpers.h"
#include "../../Public/Projectiles/TurrentFunctionLibrary.h"
#include "Components/ArrowComponent.h"
#include "Components/AudioComponent.h"
#include "Components/SphereComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Sound/SoundCue.h"

// Sets default values
ATurrentBase::ATurrentBase()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TurretSM = CreateDefaultSubobject<UStaticMeshComponent>("TurretStaticMesh");
	SetRootComponent(RootComponent);
	TurretSM->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	SphereComponent = CreateDefaultSubobject<USphereComponent>("BoxCollision");
	SphereComponent->SetupAttachment(TurretSM);

	RotationAC = CreateDefaultSubobject<UAudioComponent>("RotationAudioComponent");
	RotationAC->SetupAttachment(TurretSM);
	RotationAC->bAlwaysPlay = true;

	FireAC = CreateDefaultSubobject<UAudioComponent>("FireAudioComponent");
	FireAC->SetupAttachment(TurretSM);
	FireAC->bAlwaysPlay = true;

	ArrowComponent = CreateDefaultSubobject<UArrowComponent>("ArrowComponent");
	ArrowComponent->SetupAttachment(TurretSM);
	ArrowComponent->SetRelativeLocation({ 60.f,0.f,130.f });

	ActorsToIgnore.Reserve(3);
	ActorsToIgnore.Add(this);

	EnableSphere = false;
	
}

// Called when the game starts or when spawned
void ATurrentBase::BeginPlay()
{
	Super::BeginPlay();

	TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_Pawn));
	//TraceObjectTypes.Add(UEngineTypes::ConvertToObjectType(ECollisionChannel::ECC_WorldDynamic));

	if (RotationSoundCue)
	{
		RotationAC->SetSound(RotationSoundCue);
	}

	if (FireSoundEffect)
	{
		FireAC->SetSound(FireSoundEffect);
	}

	ActorsToIgnore.Add(ProjectileActor.GetDefaultObject());

}

void ATurrentBase::FindTarget()
{
	if (EnableSphere)
	{
		DrawDebugSphere(GetWorld(), GetActorLocation(), SenseRange, 8, FColor::Blue, false, -1.0f, SDPG_World);
	}

	TArray<AActor*> OverlappingActors;
	

	const bool IsOverlapped = UKismetSystemLibrary::SphereOverlapActors(GetWorld(), GetActorLocation(),
		SenseRange, TraceObjectTypes, nullptr,
		ActorIgnoreSphereOverlap, OverlappingActors);
	float BestDistance = SenseRange;

	AActor* ClosestTarget = nullptr;

	if (IsOverlapped)
	{
		for (AActor*& HitResult : OverlappingActors)
		{
			//ActorsToIgnore[2] = HitResult;

			if (!ClosestTarget || GetDistanceTo(HitResult) < BestDistance)
			{
				if (UTurrentFunctionLibrary::HasLineOfSight(this, SightHitResult, GetActorLocation(), HitResult->GetActorLocation(), ActorsToIgnore))
				{
					ClosestTarget = HitResult;
					BestDistance = GetDistanceTo(ClosestTarget);
				}
			}
		}

		BestTarget = ClosestTarget;
	}
	else
	{
		BestTarget = nullptr;
	}

}

// Called every frame
void ATurrentBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (BestTarget)
	{
		RotateToTarget();

		FireProjectile();
	}
	else
	{
		if (GetWorld()->GetTimerManager().IsTimerActive(FireTimerHandle))
		{
			GetWorld()->GetTimerManager().ClearTimer(FireTimerHandle);
		}
		FindTarget();
		IdleRotate(DeltaTime);
	}
}

void ATurrentBase::RotateToTarget()
{
	if (BestTarget && TurretSM)
	{
		const FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(TurretSM->GetRelativeLocation(), BestTarget->GetActorLocation());
		TurretSM->SetRelativeRotation({ TurretSM->GetRelativeRotation().Pitch, DesiredRotation.Yaw, TurretSM->GetRelativeRotation().Roll });
	}
}

void ATurrentBase::PlayRotateSound()
{
	if (RotationSoundCue)
	{
		RotationAC->Stop();
		RotationAC->Play();
	}
}

void ATurrentBase::PlayFireSound()
{
	if (FireAC)
	{
		FireAC->Stop();
		FireAC->Play();
	}
}

void ATurrentBase::IdleRotate(const float DeltaSecond)
{
	if (!bIsRotating)
	{
		RandValue = FMath::FRandRange(-180.f, 180.f);

		PlayRotateSound();
		bIsRotating = true;
	}

	if (bIsRotating && !bIsInDelayTime)
	{
		RotateValue = FMath::FInterpTo(TurretSM->GetRelativeRotation().Yaw, RandValue, DeltaSecond, InterpolationSpeed);
		TurretSM->SetRelativeRotation({ TurretSM->GetRelativeRotation().Pitch, RotateValue, TurretSM->GetRelativeRotation().Roll });
	}

	if (FMath::IsNearlyEqual(RandValue, TurretSM->GetRelativeRotation().Yaw, 1.f) && !bIsInDelayTime)
	{
		bIsInDelayTime = true;

		if (bIsInDelayTime)
		{
			GetWorld()->GetTimerManager().SetTimer(TimerHandle, [&]()
				{
					GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
					bIsInDelayTime = false;
					bIsRotating = false;
				}, 1.f, false, FMath::RandRange(1.1f, 1.6f));
		}
	}
}

void ATurrentBase::FireProjectile()
{
	if (!GetWorld()->GetTimerManager().IsTimerActive(FireTimerHandle))
	{
		GetWorld()->GetTimerManager().SetTimer(FireTimerHandle, [=]()
			{
				AProjectileBase* TurretProjectile = GetWorld()->SpawnActor<AProjectileBase>(ProjectileActor.Get(),
					ArrowComponent->GetComponentLocation(), { 0,TurretSM->GetRelativeRotation().Yaw, 0 });

				PlayFireSound();

			}, 1.f, false, FireRate);
	}
}

