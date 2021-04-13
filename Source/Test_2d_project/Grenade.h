// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Grenade.generated.h"

UCLASS()
class TEST_2D_PROJECT_API AGrenade : public AActor
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AGrenade();

protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UParticleSystem* Explosion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Sprites)
	class UPaperSpriteComponent* Sprite;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	class UPaperFlipbook* IdleAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Components)
	class UProjectileMovementComponent* GrenadeMovement;

	FTimerHandle GrenadeDelayTimer;

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
public:	

	UFUNCTION()
	void OnExplode();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
