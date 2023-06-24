// Fill out your copyright notice in the Description page of Project Settings.


#include "GameHealtheComponent.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"

// Sets default values for this component's properties
UGameHealtheComponent::UGameHealtheComponent():
	Healths(3)
{
	
	
}


// Called when the game starts
void UGameHealtheComponent::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0);

	if (!PlayerPawn)
	{
		UE_LOG(LogTemp, Error, TEXT("No Player Pawn"));
		return;
	}
	
}

void UGameHealtheComponent::ChangeHealths(int ByValue)
{
	Healths += ByValue;
	HealthsChanged.Broadcast(ByValue);
	if (Healths <= 0)
	{
		HealthsEnded.Broadcast();
	}
	UE_LOG(LogTemp, Error, TEXT("Health Changed: %i"), Healths);
}

int UGameHealtheComponent::GetHealths()
{
	return Healths;
}



