// Fill out your copyright notice in the Description page of Project Settings.


#include "ButtonMoveWidget.h"
#include "Components/Button.h"
#include "PlayerCharacter.h"
#include "Kismet/GameplayStatics.h"

bool UButtonMoveWidget::Initialize()
{
	Super::Initialize();

	Jump->OnClicked.AddDynamic(this, &UButtonMoveWidget::JumpButtonClicked);

	return true;
}

void UButtonMoveWidget::JumpButtonClicked()
{
	APlayerCharacter* PlayerCharacter = Cast<APlayerCharacter>(UGameplayStatics::GetPlayerCharacter(this,0));
	UGameplayStatics::GetPlayerCharacter(this, 1)->Jump();
	UE_LOG(LogTemp, Warning, TEXT("Our button is working!"));
}
