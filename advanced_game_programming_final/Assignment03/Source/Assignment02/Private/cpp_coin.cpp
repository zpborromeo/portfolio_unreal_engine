// Fill out your copyright notice in the Description page of Project Settings.


#include "cpp_coin.h"
#include "Kismet/GameplayStatics.h"

Acpp_coin::Acpp_coin() {
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	coinMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Coin"));
	coinMesh->SetupAttachment(RootComponent);
	coinMesh->SetVisibility(true);
	coinMesh->SetCollisionProfileName("OverlapAll");

	PitchValue = 0.f;
	YawValue = 1.f;
	RollValue = 0.f;

	
	CoinPickup = CreateDefaultSubobject<USoundBase>(TEXT("Coin_Sound.uasset"));
}

void Acpp_coin::OnInteract_Implementation(AActor* Caller) {
	if (CoinPickup != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, CoinPickup, GetActorLocation());
	}
	Destroy();
	
}

void Acpp_coin::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);

	FQuat QuatRotation = FQuat(FRotator(PitchValue, YawValue, RollValue));

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);


}