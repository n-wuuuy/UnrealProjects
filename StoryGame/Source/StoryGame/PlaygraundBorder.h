// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PlaygraundBorder.generated.h"

UCLASS()
class STORYGAME_API APlaygraundBorder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlaygraundBorder();


	UPROPERTY(VisibleAnywhere, BlueprintReadonly)
		class UBoxComponent* Trigger;

	virtual void NotifyActorEndOverlap(AActor* OtherActor) override;

	

};
