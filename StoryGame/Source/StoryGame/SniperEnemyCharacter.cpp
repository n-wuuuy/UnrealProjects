// Fill out your copyright notice in the Description page of Project Settings.


#include "SniperEnemyCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "PlayerPaperCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "HealthComponent.h"
#include "ShootComponent.h"
#include "Components/SphereComponent.h"
#include "Components/CapsuleComponent.h"
#include "StoryGameGameModeBase.h"
#include "PlaygraundBorder.h"

ASniperEnemyCharacter::ASniperEnemyCharacter():
	ShootPeriod(1.f)
{
	PrimaryActorTick.bCanEverTick = true;

	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	ShootComponent = CreateDefaultSubobject<UShootComponent>(TEXT("ShootComponent"));

	CharacterCollision = CreateDefaultSubobject<UBoxComponent >(TEXT("CharacterCollision"));
	CharacterCollision->SetupAttachment(RootComponent);
	ShootRadius = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackRadius"));
	ShootRadius->SetupAttachment(RootComponent);
	ShootRadius->OnComponentBeginOverlap.AddDynamic(this, &ASniperEnemyCharacter::OnAttackRadius);
	ShootRadius->OnComponentEndOverlap.AddDynamic(this, &ASniperEnemyCharacter::NotOnAttackRadius);
}

void ASniperEnemyCharacter::SetAggtessive()
{
	bAggressiv = true;
}

void ASniperEnemyCharacter::SetNotAggtessive()
{
	bAggressiv = false;
}

void ASniperEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();
	HealthComponent->OnHealthEnded.AddDynamic(this, &ASniperEnemyCharacter::KillPawn);
	GlovalStartLocation = GetActorLocation();
	GlobalTargetLocation = GetTransform().TransformPosition(LocationToMove);
}

void ASniperEnemyCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	UPaperFlipbook* DesiredAnimation = (bAggressiv) ? RunningAnimation : IdleAnimation;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void ASniperEnemyCharacter::UpdateCharacter()
{
	UpdateAnimation();
	APlayerPaperCharacter* PlayerCharacter = Cast<APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (!bAggressiv)
		return;
	if (Controller == nullptr)
		return;
	FVector PlayerLocation = PlayerCharacter->GetActorLocation();
	FVector EnemyLocation = GetActorLocation();
	if (PlayerLocation.X > EnemyLocation.X)
	{
		ASniperEnemyCharacter::SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
	}
	else if (PlayerLocation.X < EnemyLocation.X)
	{
		ASniperEnemyCharacter::SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));
	}
	ASniperEnemyCharacter::AddActorLocalOffset(FVector(TargetLocation.X * -1, TargetLocation.Y, TargetLocation.Z));
}

void ASniperEnemyCharacter::OnDetectionReadius()
{
	if (!Controller)
		return;
	FVector Location = GetActorLocation();
	APlayerPaperCharacter* Character = Cast <APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	FVector PlayerLocation = Character->GetActorLocation();
	float Lenth = (Location - PlayerLocation).Size();
	if (Lenth <= DetectionRadius)
		SetAggtessive();
	else SetNotAggtessive();

}

void ASniperEnemyCharacter::OnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComponent == CharacterCollision)
		return;
	if (OtherComp == CharacterCollision)
		return;
	ShootComponent->StartShoot();
}

void ASniperEnemyCharacter::NotOnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex)
{
	ShootComponent->StopShoot();
}

void ASniperEnemyCharacter::KillPawn()
{
	DestroyPawn();
}

void ASniperEnemyCharacter::DestroyPawn()
{
	Destroy();
}

void ASniperEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateCharacter();
	EnemyLication = GetActorLocation();
	OnDetectionReadius();
	if (!bAggressiv)
	{
		FVector Location = GetActorLocation();
		float Lenth = (GlobalTargetLocation - GlovalStartLocation).Size();
		float Travel = (Location - GlovalStartLocation).Size();
		if (Travel >= Lenth)
		{
			FVector Swap = GlovalStartLocation;
			GlovalStartLocation = GlobalTargetLocation;
			GlobalTargetLocation = Swap;
		}
		FVector Derection = (GlobalTargetLocation - GlovalStartLocation).GetSafeNormal();
		Location += (Derection * Speed * DeltaTime);
		SetActorLocation(Location);
	}
	
}


