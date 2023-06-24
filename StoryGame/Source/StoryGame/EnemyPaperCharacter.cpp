// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyPaperCharacter.h"
#include "Components/BoxComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PaperFlipbookComponent.h"
#include "PlayerPaperCharacter.h"
#include "Kismet/KismetMathLibrary.h"
#include "HealthComponent.h"
#include "ShootComponent.h"
#include "Components/SphereComponent.h"



AEnemyPaperCharacter::AEnemyPaperCharacter():
	AttackPeriod(1.f)
{
	PrimaryActorTick.bCanEverTick = true;
	AttackRadius = CreateDefaultSubobject<UBoxComponent>(TEXT("AttackRadius"));
	AttackRadius->SetupAttachment(RootComponent);
	AttackRadius->OnComponentBeginOverlap.AddDynamic(this, &AEnemyPaperCharacter::OnAttackRadius);
	AttackRadius->OnComponentEndOverlap.AddDynamic(this, &AEnemyPaperCharacter::NotOnAttackRadius);
	HealthComponent = CreateDefaultSubobject<UHealthComponent>(TEXT("HealthComponent"));
	ShootComponent= CreateDefaultSubobject<UShootComponent>(TEXT("ShootComponent"));
	DetectionRadius= CreateDefaultSubobject<USphereComponent >(TEXT("DetectionRadius"));
	DetectionRadius->SetupAttachment(RootComponent);
	DetectionRadius->SetCollisionProfileName("OverlapAll");
	DetectionRadius->OnComponentBeginOverlap.AddDynamic(this, &AEnemyPaperCharacter::OnDetectionReadius);
	DetectionRadius->OnComponentEndOverlap.AddDynamic(this, &AEnemyPaperCharacter::NotOnDetectionReadius);
}

void AEnemyPaperCharacter::SetAggtessive()
{
	bAggressive = true;
}

void AEnemyPaperCharacter::SetNotAggtessive()
{
	bAggressive = false;
}


void AEnemyPaperCharacter::BeginPlay()
{
	Super::BeginPlay();
	/*HealthComponent->OnHealthEnded.AddDynamic(this, &AEnemyPaperCharacter::PawnDied);*/ //вызывает ошибку /
	/*Health = HealthComponent->Health;*/
}


void AEnemyPaperCharacter::UpdateAnimation()
{
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	UPaperFlipbook* DesiredAnimation = (bAggressive) ? RunningAnimation : IdleAnimation;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}
}

void AEnemyPaperCharacter::UpdateCharacter()
{
	UpdateAnimation();
	APlayerPaperCharacter* PlayerCharacter = Cast<APlayerPaperCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));
	if (!bAggressive)
		return;
	if (Controller == nullptr)
		return;
	FVector PlayerLocation = PlayerCharacter->GetActorLocation();
	FVector EnemyLocation = GetActorLocation();
	if (PlayerLocation.X > EnemyLocation.X)
	{	
		AEnemyPaperCharacter::SetActorRotation(FRotator(0.0f, 180.0f,0.0f));
	}
	else if (PlayerLocation.X < EnemyLocation.X)
	{
		AEnemyPaperCharacter::SetActorRotation(FRotator(0.0f, 0.0f, 0.0f));	
	}
	AEnemyPaperCharacter::AddActorLocalOffset(FVector(TargetLocation.X * -1, TargetLocation.Y, TargetLocation.Z));
}

void AEnemyPaperCharacter::PawnDied()
{
	UE_LOG(LogTemp, Log, TEXT("die"));//вызывает ошибку 
}

void AEnemyPaperCharacter::OnDetectionReadius(UPrimitiveComponent*OverlappedComponent,AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComponent == AttackRadius)
		return;
	if (OtherComp == AttackRadius)
		return;
	SetAggtessive();
	GetWorld()->GetTimerManager().ClearTimer(DetectionTime);
}

void AEnemyPaperCharacter::NotOnDetectionReadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex)
{
	GetWorld()->GetTimerManager().SetTimer(DetectionTime,this, &AEnemyPaperCharacter::SetNotAggtessive,3,false,5);
}

void AEnemyPaperCharacter::OnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	OnAttackRange = true;
	if (OverlappedComponent == DetectionRadius)
		return;
	if (OtherComp == DetectionRadius)
		return;
	ShootComponent->StartShoot();
}

void AEnemyPaperCharacter::NotOnAttackRadius(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBobyIndex)
{
	OnAttackRange = false;
	ShootComponent->StopShoot();
}

void AEnemyPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	UpdateCharacter();
	EnemyLication = GetActorLocation();
}




