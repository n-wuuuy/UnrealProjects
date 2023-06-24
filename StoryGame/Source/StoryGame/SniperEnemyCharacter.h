// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "SniperEnemyCharacter.generated.h"


UCLASS()
class STORYGAME_API ASniperEnemyCharacter : public APaperCharacter
{
	GENERATED_BODY()
public:
	ASniperEnemyCharacter();
	FVector EnemyLication;
	void SetAggtessive();
	void SetNotAggtessive();
protected:
	virtual void BeginPlay() override;
	void UpdateAnimation();
	void UpdateCharacter();
	void OnDetectionReadius();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* RunningAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* IdleAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		class UPaperFlipbook* AttackAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Animations)
		FVector TargetLocation;
	bool bAggressiv = false;
	FTimerHandle Timer;
	FTimerHandle DetectionTime;
	FVector GlovalStartLocation;
	FVector GlobalTargetLocation;
	UFUNCTION()
		void OnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
		void NotOnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex);
	UFUNCTION()
		void KillPawn();
public:
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable, Category = "Pawn")
		void DestroyPawn();
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UBoxComponent* CharacterCollision;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Pawn")
		float Speed = 50;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UHealthComponent* HealthComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UShootComponent* ShootComponent;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float ShootPeriod;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float DetectionRadius;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float AttackRadius;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Pawn")
		class UBoxComponent* ShootRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (MakeEditWidget = ture))
		FVector LocationToMove;

};
