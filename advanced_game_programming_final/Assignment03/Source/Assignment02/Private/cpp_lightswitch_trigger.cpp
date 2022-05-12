// Fill out your copyright notice in the Description page of Project Settings.


#include "cpp_lightswitch_trigger.h"
#include "Components/PointLightComponent.h"
#include "Components/SphereComponent.h"
#include "DrawDebugHelpers.h"

// Sets default values
Acpp_lightswitch_trigger::Acpp_lightswitch_trigger()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LightIntensity = 8000.f;

	PointLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("Point Light"));
	PointLight->Intensity = LightIntensity;
	PointLight->SetVisibility(false);
	RootComponent = PointLight;

	LightSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Light Sphere"));
	LightSphere->InitSphereRadius(2000.0f);
	LightSphere->SetCollisionProfileName(TEXT("Trigger"));
	LightSphere->SetupAttachment(RootComponent);

	LightSphere->OnComponentBeginOverlap.AddDynamic(this, &Acpp_lightswitch_trigger::OnOverlapBegin);
	LightSphere->OnComponentEndOverlap.AddDynamic(this, &Acpp_lightswitch_trigger::OnOverlapEnd);

}

void Acpp_lightswitch_trigger::BeginPlay()
{
	Super::BeginPlay();

	//DrawDebugSphere(GetWorld(), GetActorLocation(), 2000.0f, 50, FColor::Green, true, 999, 0, 2);

}

void Acpp_lightswitch_trigger::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

void Acpp_lightswitch_trigger::OnOverlapEnd(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (OtherActor && (OtherActor != this) && OtherComp)
	{
		ToggleLight();
	}
}

void Acpp_lightswitch_trigger::ToggleLight()
{
	PointLight->ToggleVisibility();
}

// Called every frame
void Acpp_lightswitch_trigger::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

