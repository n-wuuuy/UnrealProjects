// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameHealtheComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHealthsEndedEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthsChangedEvent, int, ChangeValue);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class STORYGAME_API UGameHealtheComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UGameHealtheComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
	int Healths;
public:	
	UFUNCTION(BlueprintCallable, Category = "Game Health")
		void ChangeHealths(int ByValue);

	UFUNCTION(BlueprintPure, Category = "Game Health")
		int GetHealths();

	UPROPERTY(BlueprintAssignable, Category = "Game Health")
		FHealthsEndedEvent HealthsEnded;

	UPROPERTY(BlueprintAssignable, Category = "Game Health")
		FHealthsChangedEvent HealthsChanged;		
};
