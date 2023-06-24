// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperFlipbookActor.h"
#include "PaperProjectail.generated.h"

/**
 * 
 */
UCLASS()
class STORYGAME_API APaperProjectail : public APaperFlipbookActor
{
	GENERATED_BODY()
public:
	APaperProjectail();
protected:
	virtual void BeginPlay() override;

	UFUNCTION()
		void OnProjectailOverlap(UPrimitiveComponent* OpelappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 BodyIndex, bool Sweep, const FHitResult& Hit);
	FVector GlovalStartLocation;
	FVector GlobalTargetLocation;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
		class USphereComponent* Collision;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		float Speed;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Shooting")
		float Damage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Meta = (MakeEditWidget = ture))
		FVector TargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Shooting")
		float Range;
};
