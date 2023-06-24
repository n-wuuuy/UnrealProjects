// Fill out your copyright notice in the Description page of Project Settings.


#include "PlaygraundBorder.h"
#include "Components/BoxComponent.h"
#include "PlayerPaperCharacter.h"

// Sets default values
APlaygraundBorder::APlaygraundBorder()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	Trigger = CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	SetRootComponent(Trigger);
	Trigger->SetCollisionProfileName("OverlapAll");
}

void APlaygraundBorder::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (!OtherActor)
		return;
	if (Cast<APlayerPaperCharacter>(OtherActor))
		return;
	OtherActor->Destroy();
}



