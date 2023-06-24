// Fill out your copyright notice in the Description page of Project Settings.


#include "AreasOfReview.h"
#include "Components/BoxComponent.h"

// Sets default values
AAreasOfReview::AAreasOfReview()
{
	Trigger=CreateDefaultSubobject<UBoxComponent>(TEXT("Trigger"));
	SetRootComponent(Trigger);
	Trigger->SetCollisionProfileName("OverlapAll");
}

void AAreasOfReview::NotifyActorEndOverlap(AActor* OtherActor)
{
	Super::NotifyActorEndOverlap(OtherActor);

	if (!OtherActor)
		return;
	OtherActor->Destroy();
}


