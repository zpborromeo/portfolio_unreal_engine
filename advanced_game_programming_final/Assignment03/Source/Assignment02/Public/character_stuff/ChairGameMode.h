// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ChairGameMode.generated.h"

UCLASS()
class ASSIGNMENT02_API AChairGameMode : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AChairGameMode();

	void EndGame();
	void LevelComplete();

protected:

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "UMG")
		TSubclassOf<UUserWidget> DefaultGameCompleteWidget;
	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "UMG")
		UUserWidget* GameCompleteWidget;

	//FTimerHandle gameEndTimer;
private:
	void BeginPlay() override;

	APlayerController* Controller;



};
