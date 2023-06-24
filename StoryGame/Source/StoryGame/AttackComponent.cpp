// Fill out your copyright notice in the Description page of Project Settings.


#include "AttackComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "PlayerPaperCharacter.h"
#include "EnemyPaperCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"


// Sets default values for this component's properties
//UAttackComponent::UAttackComponent():
//{
//	
//}


// Called when the game starts
void UAttackComponent::BeginPlay()
{
	Super::BeginPlay();
	/*StartAttack();*/
}

//void UAttackComponent::Attack()
//{
//	/*AEnemyPaperCharacter* EnemyCharacter = Cast < AEnemyPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
//	APlayerPaperCharacter* Character = Cast <APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
//	float Lenth = (Character->StartLocation - EnemyCharacter->EnemyLication).Size();
//	if (Lenth >= AttackInfos.AttackRange)
//	{
//		UE_LOG(LogTemp, Log, TEXT("die"));
//	}*/
//}


//void UAttackComponent::StartAttack()
//{
//	GetWorld()->GetTimerManager().SetTimer(AttackTimer, this, &UAttackComponent::Attack, AttackPeriod, true, AttackPeriod);
//}
//
//void UAttackComponent::StopAttack()
//{
//	GetWorld()->GetTimerManager().ClearTimer(AttackTimer);
//}




