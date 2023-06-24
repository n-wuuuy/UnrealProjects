// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "StoryGameGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class STORYGAME_API AStoryGameGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	AStoryGameGameModeBase();
	virtual void BeginPlay() override;
protected:
	UFUNCTION()
		void PunchPawn();
	bool IsGameOver = false;
public: 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game Health")
		class UGameHealtheComponent * HealthsComponent;
	UPROPERTY(BlueprintReadOnly, Category = "Game")
		class APlayerPaperCharacter* PlayerPawn;
	UFUNCTION(BlueprintCallable, Category = "Game")
		void EndGame();
	
};
