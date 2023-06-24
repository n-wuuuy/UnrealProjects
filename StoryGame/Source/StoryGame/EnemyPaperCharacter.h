// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "EnemyPaperCharacter.generated.h"

/**
 * 
 */



UCLASS()
class STORYGAME_API AEnemyPaperCharacter : public APaperCharacter
{
	GENERATED_BODY()
public:
	AEnemyPaperCharacter();
	FVector EnemyLication;
	void SetAggtessive();
	void SetNotAggtessive();
protected:
	virtual void BeginPlay() override;
	void UpdateAnimation();
	void UpdateCharacter();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* AttackAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
	FVector TargetLocation;
	void PawnDied();
	bool bAggressive = false;
	bool OnAttackRange = false;
	float Damage=-1;
	FTimerHandle DetectionTime;
	UFUNCTION()
	void OnDetectionReadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void NotOnDetectionReadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex);
	UFUNCTION()
	void OnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void NotOnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex);
public:
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Health;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UBoxComponent* AttackRadius;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pawn")
		float Speed=50;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UHealthComponent* HealthComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UShootComponent* ShootComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class USphereComponent* DetectionRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float AttackPeriod;
};
