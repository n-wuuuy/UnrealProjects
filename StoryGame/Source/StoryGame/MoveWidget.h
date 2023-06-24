// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MoveWidget.generated.h"

/**
 * 
 */
UCLASS()
class STORYGAME_API UMoveWidget : public UUserWidget
{
	GENERATED_BODY()
		virtual bool Initialize();
	UPROPERTY(meta = (BindWidget))
		class UButton* Jump;
	UPROPERTY(meta = (BindWidget))
		class UButton* Teleport;
	UPROPERTY(meta = (BindWidget))
		class UButton* Shoot;
	UFUNCTION()
		void JumpButtonClicked();
	UFUNCTION()
		void TeleportButtonClicked();
	UFUNCTION()
		void ShootButtonClicked();
	UFUNCTION()
		void ShootButtonStopClicked();

};
