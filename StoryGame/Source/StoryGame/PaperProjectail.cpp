// Fill out your copyright notice in the Description page of Project Settings.


#include "PaperProjectail.h"
#include "Components/BoxComponent.h"
#include "Components/SphereComponent.h"
#include "PlayerPaperCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/DamageType.h"
#include "EnemyPaperCharacter.h"
#include "SniperEnemyCharacter.h"


APaperProjectail::APaperProjectail()
{
	PrimaryActorTick.bCanEverTick = true;
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("Collision"));
	Collision->SetupAttachment(RootComponent);
	Collision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void APaperProjectail::BeginPlay()
{
	Super::BeginPlay();
	if (GetOwner())
	{
		UBoxComponent* OwnerCollision = GetOwner()->FindComponentByClass<UBoxComponent>();
		Collision->IgnoreComponentWhenMoving(OwnerCollision, true);
		OwnerCollision->IgnoreComponentWhenMoving(Collision, true);
		Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	}
	Collision->OnComponentBeginOverlap.AddDynamic(this, &APaperProjectail::OnProjectailOverlap);
	GlovalStartLocation = GetActorLocation();
	GlobalTargetLocation= GetTransform().TransformPosition(TargetLocation);
}

void APaperProjectail::OnProjectailOverlap(UPrimitiveComponent* OpelappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 BodyIndex, bool Sweep, const FHitResult& Hit)
{
	APawn* OtherPawn(Cast<APawn>(OtherActor));
	if (!OtherActor || !OtherPawn)
		return;
	if (!GetOwner())
		return;
	APawn* PawnOwner = Cast<APawn>(GetOwner());
	if (!PawnOwner)
		return;
	AController* Instigitor = PawnOwner->GetController();
	ASniperEnemyCharacter* Character = Cast <ASniperEnemyCharacter>(UGameplayStatics::GetPlayerCharacter(this, 0));	
	if (!PawnOwner->GetController() && !OtherPawn->GetController())
		return;

	UGameplayStatics::ApplyDamage(OtherActor, Damage, Instigitor, this, UDamageType::StaticClass());
	UE_LOG(LogTemp, Log, TEXT("Damage"));
	Destroy();
	
}

void APaperProjectail::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	AddActorLocalOffset(FVector(Speed * DeltaTime, 0.f, 0.f));
	FVector Location = GetActorLocation();
	float Travel = (Location - GlovalStartLocation).Size();
	if (Travel > Range)
		Destroy();
}
