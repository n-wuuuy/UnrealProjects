// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPawnStandart.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

// Sets default values
AEnemyPawnStandart::AEnemyPawnStandart()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CharacterCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CharacterCollision->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AEnemyPawnStandart::BeginPlay()
{
	Super::BeginPlay();
	OnActorBeginOverlap.AddDynamic(this, &AEnemyPawnStandart::OnEnemyOverlap);
}

void AEnemyPawnStandart::OnEnemyOverlap(AActor* OverlapedActor, AActor* OtherActor)
{
	if (OtherActor != UGameplayStatics::GetPlayerPawn(this, 0))
		return;
	UE_LOG(LogTemp, Log, TEXT("OH you Overlap"));

}

// Called every frame
void AEnemyPawnStandart::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}



