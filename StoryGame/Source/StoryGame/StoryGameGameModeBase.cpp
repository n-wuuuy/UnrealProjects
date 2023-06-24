// Copyright Epic Games, Inc. All Rights Reserved.


#include "StoryGameGameModeBase.h"
#include "GameHealtheComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PlayerPaperCharacter.h"


AStoryGameGameModeBase::AStoryGameGameModeBase()
{
	HealthsComponent = CreateDefaultSubobject<UGameHealtheComponent>(TEXT("HealthsComponent"));
}

void AStoryGameGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	HealthsComponent->HealthsEnded.AddDynamic(this, &AStoryGameGameModeBase::EndGame);
	PlayerPawn = Cast<APlayerPaperCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerPawn)
		return;
	PlayerPawn->PawnDamaged.AddDynamic(this, &AStoryGameGameModeBase::PunchPawn);
}

void AStoryGameGameModeBase::PunchPawn()
{
	HealthsComponent->ChangeHealths(-1);
}

void AStoryGameGameModeBase::EndGame()
{
	IsGameOver = true;
	UGameplayStatics::GetPlayerPawn(this, 0)->Destroy();
	SetPause(UGameplayStatics::GetPlayerController(this, 0), false);
}
