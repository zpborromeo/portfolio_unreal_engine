// Fill out your copyright notice in the Description page of Project Settings.


#include "Health/cpp_HealthComponent.h"

// Sets default values for this component's properties
Ucpp_HealthComponent::Ucpp_HealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	maxHealth = 100;
	currHealth = maxHealth;

	// ...
}


// Called when the game starts
void Ucpp_HealthComponent::BeginPlay()
{
	Super::BeginPlay();


	//Gets owner of component
	AActor* owner = GetOwner();
	if (owner) 
	{
		owner->OnTakeAnyDamage.AddDynamic(this, &Ucpp_HealthComponent::TakeDamage);
	}
	// ...
	
}

void Ucpp_HealthComponent::TakeDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser)
{
	if (Damage <= 0)
		return;

	currHealth = FMath::Clamp(currHealth - Damage, 0.0f, maxHealth);

}


