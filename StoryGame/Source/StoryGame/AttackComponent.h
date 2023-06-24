// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackComponent.generated.h"


//USTRUCT(BlueprintType)
//struct FAttackInfo
//{
//	GENERATED_BODY()
//public:
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
//		float Damage;
//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
//		float AttackRange;
//};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STORYGAME_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	/*UAttackComponent();*/

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	/*void Attack();
	FTimerHandle AttackTimer;*/
public:	
	/*UFUNCTION(BlueprintCallable, Category = "Attack")
		void StartAttack();

	UFUNCTION(BlueprintCallable, Category = "Attack")
		void StopAttack();*/

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float AttackPeriod;*/
	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		FAttackInfo AttackInfos;*/
};
