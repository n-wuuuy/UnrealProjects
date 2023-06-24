// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "PlayerPaperCharacter.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPawnDamagedEvent);
/**
 * 
 */
UCLASS()
class STORYGAME_API APlayerPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()
public:
	// Sets default values for this character's properties
	APlayerPaperCharacter();
	FVector StartLocation;
	FVector TeleportLocation;
	FRotator ClassicRotator;
	void Teleport();
	void Shoot();
	void StopShoot();
protected:
	void UpdateAnimation();
	void UpdateCharacter();
	virtual void BeginPlay() override;
	virtual float TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* InstigatedBy, AActor* DamageCauser) override;
	void StopJump();
	void Jump();
	void MoveRight(float Value);
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* TeleportAnimation;
	bool bDead;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UBoxComponent* CharacterCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class UCameraComponent* CharacterCamera;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
		class USpringArmComponent* SpringArm;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UShootComponent* ShootComponent;
	UPROPERTY(BlueprintAssignable, Category = "Healths")
		FPawnDamagedEvent PawnDamaged;
};
