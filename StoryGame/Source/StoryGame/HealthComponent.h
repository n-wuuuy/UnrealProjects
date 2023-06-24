// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthEndedEvent);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STORYGAME_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()
public:	
	UHealthComponent();
protected:
	// Called when the game starts
	virtual void BeginPlay() override;;
	UFUNCTION()
		void OnOwnerDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* Instigator, AActor* DamageCouser);
public:	
	UFUNCTION(BlueprintCallable, Category = "Health")
		void ChangeHealth(float Value);
	UFUNCTION(BlueprintPure, Category = "Health")
		float GetHealth();
	UPROPERTY(BlueprintAssignable, Category = "Health")
		FHealthEndedEvent OnHealthEnded;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Health;

		
};
