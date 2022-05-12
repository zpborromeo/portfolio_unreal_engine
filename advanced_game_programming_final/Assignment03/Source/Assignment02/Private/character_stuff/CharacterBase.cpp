// Fill out your copyright notice in the Description page of Project Settings.


#include "character_stuff/CharacterBase.h"
#include "Animation/AnimInstance.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include <DrawDebugHelpers.h>
#include <Interact/InteractableInterface.h>
#include "GameFramework/SpringArmComponent.h"
#include "../public/Projectiles/ProjectileBase.h"

#define COLLISION_WEAPON		ECC_GameTraceChannel1

// Sets default values
ACharacterBase::ACharacterBase()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;



	
	

	// Cameras !! 
	//First Person
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(0, 0, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	//God mode
	GodModeCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("GodModeCamera"));
	GodModeCameraComponent->SetupAttachment(GetCapsuleComponent());
	GodModeCameraComponent->SetRelativeLocation(FVector(100.f, 0, 64.f)); // Position the camera
	GodModeCameraComponent->bUsePawnControlRotation = true;

	// Create a camera boom(pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(GetCapsuleComponent());
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	ThirdPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	ThirdPersonCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	ThirdPersonCameraComponent->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	// Create a gun mesh component
	FP_Gun = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FP_Gun"));
	FP_Gun->SetOnlyOwnerSee(true);			// Only the owning player will see this mesh
	FP_Gun->bCastDynamicShadow = false;		// Disallow mesh to cast dynamic shadows
	FP_Gun->CastShadow = false;			// Disallow mesh to cast other shadows
	FP_Gun->AttachToComponent(GetMesh(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GunSocket"));

	// Set weapon damage and range
	WeaponRange = 5000.0f;
	WeaponDamage = 500000.0f;

	


}

// Called when the game starts or when spawned
void ACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	GetMesh()->SetCollisionObjectType(ECollisionChannel::ECC_Pawn);
}

// Called every frame
void ACharacterBase::Tick(float DeltaTime)
{
	TraceForward();
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ACharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// set up gameplay key bindings
	check(PlayerInputComponent);

	// Set up gameplay key bindings

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &ACharacterBase::OnFire);

	PlayerInputComponent->BindAction("Interact", IE_Pressed, this, &ACharacterBase::InteractPressed);

	// Bind movement events
	PlayerInputComponent->BindAxis("MoveForward", this, &ACharacterBase::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACharacterBase::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ACharacterBase::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ACharacterBase::LookUpAtRate);

}

void ACharacterBase::OnFire()
{
	//Bullet
	// Play a sound if there is one
	if (FireSound != nullptr)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}

	// Attempt to fire a projectile.
	if (ProjectileClass)
	{
		// Get the camera transform.
		FVector CameraLocation;
		FRotator CameraRotation;
		GetActorEyesViewPoint(CameraLocation, CameraRotation);

		// Set MuzzleOffset to spawn projectiles slightly in front of the camera.
		MuzzleOffset.Set(200.0f, 0.0f, 0.0f);

		// Transform MuzzleOffset from camera space to world space.
		FVector MuzzleLocation = CameraLocation + FTransform(CameraRotation).TransformVector(MuzzleOffset);

		// Skew the aim to be slightly upwards.
		FRotator MuzzleRotation = CameraRotation;
		MuzzleRotation.Pitch += 10.0f;

		UWorld* World = GetWorld();
		if (World)
		{
			FActorSpawnParameters SpawnParams;
			SpawnParams.Owner = this;
			SpawnParams.Instigator = GetInstigator();

			// Spawn the projectile at the muzzle.
			AProjectileBase* Projectile = World->SpawnActor<AProjectileBase>(ProjectileClass, MuzzleLocation, MuzzleRotation, SpawnParams);
			if (Projectile)
			{
				// Set the projectile's initial trajectory.
				FVector LaunchDirection = MuzzleRotation.Vector();
				Projectile->FireInDirection(LaunchDirection);
			}
		}
	}

}

void ACharacterBase::MoveForward(float Val)
{
	if (Val != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorForwardVector(), Val);
	}
}

void ACharacterBase::MoveRight(float Val)
{
	if (Val != 0.0f)
	{
		// Add movement in that direction
		AddMovementInput(GetActorRightVector(), Val);
	}
}

void ACharacterBase::TurnAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::LookUpAtRate(float Rate)
{
	// Calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ACharacterBase::InteractPressed()
{
	TraceForward();
	if (FocusedActor) {
		IInteractableInterface* Interface = Cast<IInteractableInterface>(FocusedActor);
		if (Interface)
		{
			Interface->Execute_OnInteract(FocusedActor, this);
		}
	}

}

void ACharacterBase::TraceForward_Implementation()
{
	APlayerController* PlayerController = Cast<APlayerController>(GetController());

	FVector LookDir = FVector::ZeroVector;
	FVector StartTrace = FVector::ZeroVector;

	if (PlayerController)
	{
		// Calculate the direction of player and the start location for trace
		FRotator CamRot;
		PlayerController->GetPlayerViewPoint(StartTrace, CamRot);
		LookDir = CamRot.Vector();

		// Adjust trace so there is nothing blocking the ray between the camera and the pawn, and calculate distance from adjusted start
		StartTrace = StartTrace + LookDir * ((GetActorLocation() - StartTrace) | LookDir);
	}

	// Calculate endpoint of trace
	const FVector EndTrace = StartTrace + LookDir * InteractReach;

	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, ECC_Visibility, TraceParams);

	// Check for impact
	const FHitResult Impact = Hit;

	// Deal with impact
	AActor* InteractableActor = Impact.GetActor();

	//DrawDebugLine(GetWorld(), StartTrace, EndTrace, FColor::Green, false, 2.f, 0, 0.2f);
	//DrawDebugBox(GetWorld(), Impact.Location, FVector(5.f, 5.f, 5.f), FColor::Emerald, false, 2.f);

	// If we hit an actor, with a component that is simulating physics, apply an impulse
	if ((InteractableActor != nullptr) && (InteractableActor != this))
	{

		if (InteractableActor != FocusedActor)
		{
			if (FocusedActor)
			{

				IInteractableInterface* Interface = Cast<IInteractableInterface>(FocusedActor);
				if (Interface)
				{
					Interface->Execute_EndFocus(FocusedActor);
					FocusedActor = nullptr;
				}
			}
			else
			{

				FocusedActor = InteractableActor;
			}
			IInteractableInterface* Interface = Cast<IInteractableInterface>(FocusedActor);
			if (Interface)
			{
				Interface->Execute_StartFocus(FocusedActor);
			}

		}


	}
	else
	{

		if (FocusedActor) {
			IInteractableInterface* Interface = Cast<IInteractableInterface>(FocusedActor);
			if (Interface)
			{
				Interface->Execute_EndFocus(FocusedActor);

			}
			FocusedActor = nullptr;

		}
	}


}

FHitResult ACharacterBase::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const
{
	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(WeaponTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, COLLISION_WEAPON, TraceParams);

	return Hit;
}
