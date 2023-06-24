// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveWidget.h"
#include "Components/Button.h"
#include "PlayerPaperCharacter.h"
#include "Kismet/GameplayStatics.h"

bool UMoveWidget::Initialize()
{
	Super::Initialize();

	Jump->OnClicked.AddDynamic(this, &UMoveWidget::JumpButtonClicked);
	Teleport->OnClicked.AddDynamic(this, &UMoveWidget::TeleportButtonClicked);
	Shoot->OnPressed.AddDynamic(this, &UMoveWidget::ShootButtonClicked);
	Shoot->OnReleased.AddDynamic(this,&UMoveWidget::ShootButtonStopClicked);
	return true;
}

void UMoveWidget::JumpButtonClicked()
{
	UGameplayStatics::GetPlayerCharacter(this, 0)->Jump();
}

void UMoveWidget::TeleportButtonClicked()
{
	APlayerPaperCharacter* Character = Cast <APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	Character->Teleport();
}

void UMoveWidget::ShootButtonClicked()
{
	APlayerPaperCharacter* Character = Cast <APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	Character->Shoot();
}

void UMoveWidget::ShootButtonStopClicked()
{
	APlayerPaperCharacter* Character = Cast <APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	Character->StopShoot();
}
