// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthBar.h"
#include "Components/ProgressBar.h"
#include "EnemyPaperCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "HealthComponent.h"
#include "GameFramework/Actor.h"



bool UHealthBar::Initialize()
{
	Super::Initialize();
	/*AEnemyPaperCharacter* EnemyCharacter = Cast <AEnemyPaperCharacter>(GetOwner());*/
	
	return true;
}
