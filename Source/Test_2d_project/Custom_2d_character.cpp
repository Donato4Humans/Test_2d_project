// Fill out your copyright notice in the Description page of Project Settings.


#include "Custom_2d_character.h"
#include "Grenade.h"
#include "PaperFlipbookComponent.h"
#include "Components/TextRenderComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/PlayerController.h"
#include "Camera/CameraComponent.h"
#include "Kismet/KismetMathLibrary.h"

DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

// Sets default values
ACustom_2d_character::ACustom_2d_character()
{
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = true;
	bUseControllerRotationRoll = false;

	GetCapsuleComponent()->SetCapsuleHalfHeight(48.0f);
	GetCapsuleComponent()->SetCapsuleRadius(20.0f);

	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 500.0f;
	CameraBoom->SocketOffset = FVector(0.0f, 0.0f, 75.0f);
	CameraBoom->SetUsingAbsoluteRotation(true);
	CameraBoom->bDoCollisionTest = false;
	CameraBoom->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));

	SideViewCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	SideViewCameraComponent->ProjectionMode = ECameraProjectionMode::Orthographic;
	SideViewCameraComponent->OrthoWidth = 1024.0f;
	SideViewCameraComponent->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);

	CameraBoom->SetUsingAbsoluteRotation(true);
	SideViewCameraComponent->bUsePawnControlRotation = false;
	SideViewCameraComponent->bAutoActivate = true;
	GetCharacterMovement()->bOrientRotationToMovement = false;

	GetCharacterMovement()->GravityScale = 2.0f;
	GetCharacterMovement()->AirControl = 0.80f;
	GetCharacterMovement()->JumpZVelocity = 750.0f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 300.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;

	GetCharacterMovement()->bConstrainToPlane = true;
	GetCharacterMovement()->SetPlaneConstraintNormal(FVector(0.0f, -1.0f, 0.0f));

	GetCharacterMovement()->bUseFlatBaseForFloorChecks = true;

	GetSprite()->SetIsReplicated(true);
	bReplicates = true;
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

void ACustom_2d_character::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

// Called every frame
void ACustom_2d_character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UWorld* World = GetWorld();

	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();

		PlayerController->bShowMouseCursor = true;

		FVector2D MousePos = FVector2D(0.0f, 0.0f);

		FVector WorldLocation = FVector(MousePos.X, MousePos.Y, 0.0f);
		FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);

		PlayerController->GetMousePosition(MousePos.X, MousePos.Y);
		PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);


		const FVector MouseLocation = WorldLocation + (WorldDirection * CameraBoom->TargetArmLength);
		const FVector PlayerLocation = GetActorLocation();


		FRotator AimRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, MouseLocation);

		PlayerController->SetControlRotation(AimRotation);

	}
	UpdateCharacter();
}

// Called to bind functionality to input
void ACustom_2d_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("Shoot", IE_Pressed, this, &ACustom_2d_character::Shoot);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);
	PlayerInputComponent->BindAxis("MoveRight", this, &ACustom_2d_character::MoveRight);
}

void ACustom_2d_character::MoveRight(float Value)
{
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void ACustom_2d_character::Shoot()
{
	if (GrenadeClass)
	{
	FActorSpawnParameters SpawnParams;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	SpawnParams.bNoFail = true;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;

	UWorld* World = GetWorld();
	FRotator AimRotation;

	if (World)
	{
		APlayerController* PlayerController = World->GetFirstPlayerController();

		FVector2D MousePos = FVector2D(0.0f, 0.0f);

		FVector WorldLocation = FVector(MousePos.X, MousePos.Y, 30.0f);
		FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);

		PlayerController->GetMousePosition(MousePos.X, MousePos.Y);
		PlayerController->DeprojectMousePositionToWorld(WorldLocation, WorldDirection);

		const FVector MouseLocation = WorldLocation + (WorldDirection * CameraBoom->TargetArmLength);
		const FVector PlayerLocation = GetActorLocation();

		AimRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, MouseLocation);
	}

	FTransform GrenadeSpawnTransform;
	GrenadeSpawnTransform.SetLocation(GetActorForwardVector() * 10.0f + GetActorLocation());
	GrenadeSpawnTransform.SetRotation(AimRotation.Quaternion());
	GrenadeSpawnTransform.SetScale3D(FVector(1.0f));

	GetWorld()->SpawnActor<AGrenade>(GrenadeClass, GrenadeSpawnTransform, SpawnParams);

	}
}

void ACustom_2d_character::UpdateCharacter()
{
	UpdateAnimation();

	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.X;

	if (Controller != nullptr)
	{
		if (TravelDirection < 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 180.0f, 0.0f));
		}
		else if (TravelDirection > 0.0f)
		{
			Controller->SetControlRotation(FRotator(0.0f, 0.0f, 0.0f));
		}
	}
}

// Called when the game starts or when spawned
void ACustom_2d_character::BeginPlay()
{
	Super::BeginPlay();
	
}



