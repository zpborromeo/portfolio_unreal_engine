// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "cpp_HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ASSIGNMENT02_API Ucpp_HealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	Ucpp_HealthComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	
	UPROPERTY(EditAnywhere, BluePrintReadWrite, Category = "Health")
	float maxHealth;

	UPROPERTY(BlueprintReadOnly)
	float currHealth;

	UFUNCTION()
	void TakeDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);

};
