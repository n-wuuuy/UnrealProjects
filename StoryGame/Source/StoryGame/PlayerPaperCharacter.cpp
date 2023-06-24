// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPaperCharacter.h"
#include "PaperFlipbookComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"
#include "ShootComponent.h"


DEFINE_LOG_CATEGORY_STATIC(SideScrollerCharacter, Log, All);

APlayerPaperCharacter::APlayerPaperCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	CharacterCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CharacterCollision->SetupAttachment(RootComponent);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	SpringArm->SetUsingAbsoluteRotation(true);
	SpringArm->SetupAttachment(RootComponent);
	CharacterCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("SideViewCamera"));
	CharacterCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	ShootComponent= CreateDefaultSubobject<UShootComponent>(TEXT("ShootComponent"));
	bDead = false;
	GetSprite()->SetIsReplicated(true);
	bReplicates = true;
	GetCharacterMovement()->JumpZVelocity = 1000.f;
	GetCharacterMovement()->GroundFriction = 3.0f;
	GetCharacterMovement()->MaxWalkSpeed = 600.0f;
	GetCharacterMovement()->MaxFlySpeed = 600.0f;
}
void APlayerPaperCharacter::Teleport()
{
	
	if ((bDead) || (!Controller))
		return;
	if (StartLocation.Z <= -500 && StartLocation.Z >= -2000)
		TeleportLocation = FVector(StartLocation.X, StartLocation.Y, StartLocation.Z + 1690.0f);
	ACharacter::SetActorLocation(TeleportLocation);
}

void APlayerPaperCharacter::Shoot()
{
	ShootComponent->StartShoot();
	UE_LOG(LogTemp, Warning, TEXT("Shoot!"));
}

void APlayerPaperCharacter::StopShoot()
{
	ShootComponent->StopShoot();
	UE_LOG(LogTemp, Warning, TEXT("StopShoot!"));
}

void APlayerPaperCharacter::UpdateAnimation()
{
	
	const FVector PlayerVelocity = GetVelocity();
	const float PlayerSpeedSqr = PlayerVelocity.SizeSquared();

	// Are we moving or standing still?
	UPaperFlipbook* DesiredAnimation = (PlayerSpeedSqr > 0.0f) ? RunningAnimation : IdleAnimation;
	if (GetSprite()->GetFlipbook() != DesiredAnimation)
	{
		GetSprite()->SetFlipbook(DesiredAnimation);
	}

}

void APlayerPaperCharacter::UpdateCharacter()
{
	// Update animation to match the motion
	UpdateAnimation();

	// Now setup the rotation of the controller based on the direction we are travelling
	const FVector PlayerVelocity = GetVelocity();
	float TravelDirection = PlayerVelocity.X;
	if (Controller == nullptr)
		return;
	if (TravelDirection < 0.0f)
	{
		Controller->SetControlRotation(FRotator(0.f, 180.f, 0.f));
	}
	else if (TravelDirection > 0.0f)
	{
		Controller->SetControlRotation(FRotator(0.f, 0.f, 0.f));
	}
	
}

void APlayerPaperCharacter::BeginPlay()
{
	Super::BeginPlay();
}

float APlayerPaperCharacter::TakeDamage(float Damage, const FDamageEvent& DamageEvent, AController* InstigatedBy, AActor* DamageCauser)
{
	Super::TakeDamage(Damage, DamageEvent, InstigatedBy, DamageCauser);
	PawnDamaged.Broadcast();
	return Damage;
}

void APlayerPaperCharacter::StopJump()
{
	if ((bDead) || (!Controller))
		return;
	ACharacter::StopJumping();
}

void APlayerPaperCharacter::Jump()
{
	if ((bDead) || (!Controller))
		return;
	ACharacter::Jump();
}

void APlayerPaperCharacter::MoveRight(float Value)
{
	if ((bDead) || (!Controller) || (Value == 0.0f))
		return;
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void APlayerPaperCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	StartLocation = GetActorLocation();
	TeleportLocation = FVector(StartLocation.X, StartLocation.Y, StartLocation.Z - 1690.0f);
	UpdateCharacter();
}

void APlayerPaperCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerPaperCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerPaperCharacter::StopJump);
	PlayerInputComponent->BindAction("Teleport", IE_Pressed, this, &APlayerPaperCharacter::Teleport);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerPaperCharacter::MoveRight);
}
