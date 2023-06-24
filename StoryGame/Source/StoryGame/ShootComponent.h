// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaperProjectail.h"
#include "ShootComponent.generated.h"

USTRUCT(BlueprintType)
struct FShootInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		TSubclassOf<APaperProjectail> ProjectailClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		FVector Offset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		float Angle;
};


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STORYGAME_API UShootComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UShootComponent();

protected:
	// Called when the game starts
	void Shoot();
	FTimerHandle ShootTimer;

public:	
	UFUNCTION(BlueprintCallable, Category = "Attack")
		void StartShoot();
	UFUNCTION(BlueprintCallable, Category = "Attack")
		void StopShoot();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		float ShootPeriod;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Controls")
		TArray <FShootInfo>ShootInfos;
};
