// Fill out your copyright notice in the Description page of Project Settings.


#include "character_stuff/ChairGameMode.h"
#include <Blueprint/UserWidget.h>

AChairGameMode::AChairGameMode()
{
	// Set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;
}

void AChairGameMode::EndGame()
{
	
}

void AChairGameMode::LevelComplete()
{
	if(DefaultGameCompleteWidget)
	{
		GameCompleteWidget = CreateWidget<UUserWidget>(GetWorld(), DefaultGameCompleteWidget);
		GameCompleteWidget->AddToViewport();

		Controller->bShowMouseCursor = true;
		FInputModeUIOnly InputMode;
		Controller->SetInputMode(InputMode);
	}
	else 
	{
		UE_LOG(LogTemp, Warning, TEXT("No Default Level Complete Widget Selected"));
	}
	
	

}

void AChairGameMode::BeginPlay()
{
	Super::BeginPlay();

	Controller = GetWorld()->GetFirstPlayerController();
	
	FInputModeGameOnly InputMode;

	Controller->SetInputMode(InputMode);
	Controller->bShowMouseCursor = false;

}
