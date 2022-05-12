#pragma once

#include "CoreMinimal.h"
#include "../Public/character_stuff/CharacterBase.h"
#include "pawn_chair_man.generated.h"

UCLASS()
class ASSIGNMENT02_API Apawn_chair_man : public ACharacterBase
{
	GENERATED_BODY()
public:

	Apawn_chair_man();
		

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		FVector FPcameraLocation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Camera)
		FVector FPcrouchCameraLocation;
};
