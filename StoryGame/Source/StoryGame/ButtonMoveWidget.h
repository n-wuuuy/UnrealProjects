// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ButtonMoveWidget.generated.h"

/**
 * 
 */
UCLASS()
class STORYGAME_API UButtonMoveWidget : public UUserWidget
{
	GENERATED_BODY()
		virtual bool Initialize();
	UPROPERTY(meta = (BindWidget))
		class UButton* Jump;
	UFUNCTION()
		void JumpButtonClicked();
};
