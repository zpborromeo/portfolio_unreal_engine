// Fill out your copyright notice in the Description page of Project Settings.


#include "Interact/TouchInteractableBase.h"
#include <Components/BoxComponent.h>
#include <character_stuff/CharacterBase.h>

ATouchInteractableBase::ATouchInteractableBase() 
{
	boxComp = CreateDefaultSubobject<UBoxComponent>(TEXT("Box Component"));
	boxComp->InitBoxExtent(FVector(150, 100, 100));
	boxComp->SetCollisionProfileName("Trigger");
	//boxComp->SetupAttachment(RootComponent);
	RootComponent = boxComp;

}

void ATouchInteractableBase::BeginPlay()
{
	Super::BeginPlay();
	boxComp->OnComponentBeginOverlap.AddDynamic(this, &ATouchInteractableBase::OnOverlapBegin);
}

void ATouchInteractableBase::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	
	if (OtherActor != nullptr && OtherActor != this) 
	{
		
		ACharacterBase* OtherCharacter = Cast<ACharacterBase>(OtherActor);
		if (OtherCharacter)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Orange, TEXT("overlap?"));
			if (OtherActor->GetClass() == OtherCharacter->GetClass()) {

				this->OnInteract(OtherCharacter);
			}
		}
	}
}

void ATouchInteractableBase::OnInteract_Implementation(AActor* Caller)
{
}
