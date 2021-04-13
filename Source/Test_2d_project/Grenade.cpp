// Fill out your copyright notice in the Description page of Project Settings.


#include "Grenade.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "PaperSpriteComponent.h"
#include "Particles/ParticleSystem.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"

// Sets default values
AGrenade::AGrenade()
{
	Sprite = CreateDefaultSubobject<UPaperSpriteComponent>("GrenadeSprite");
	SetRootComponent(Sprite);

	Explosion = CreateDefaultSubobject<UParticleSystem>("Explosion");

	GrenadeMovement = CreateDefaultSubobject<UProjectileMovementComponent>("GrenadeMovement");
	GrenadeMovement->InitialSpeed = 500.0f;
	GrenadeMovement->MaxSpeed = 500.0f;

 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AGrenade::BeginPlay()
{
	Super::BeginPlay();

	const float MaxActivationTime = 3.0f;
	
	GetWorld()->GetTimerManager().SetTimer(GrenadeDelayTimer, this, &AGrenade::OnExplode, MaxActivationTime, false);

	//SetLifeSpan(3.0f);
}

void AGrenade::OnExplode()
{
	FTransform GrenadeDestroyTransform;
	GrenadeDestroyTransform.SetLocation(GetActorLocation());
	GrenadeDestroyTransform.SetRotation(GetActorRotation().Quaternion());
	GrenadeDestroyTransform.SetScale3D(FVector(0.25f));

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), Explosion, GrenadeDestroyTransform, true);

	const TArray<AActor *> &IgnoreActors = {};

	UGameplayStatics::ApplyRadialDamageWithFalloff(GetWorld(), 50.0f, 5.0f, GetActorLocation(), 40.0f, 160.0f, 2.0f, nullptr, IgnoreActors, this, GetInstigatorController());
	
	Destroy();
}

// Called every frame
void AGrenade::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

