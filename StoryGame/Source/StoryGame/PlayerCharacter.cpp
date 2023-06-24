// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "Camera/CameraComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	CharacterCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision"));
	CharacterCollision->SetupAttachment(RootComponent);
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	SpringArm->SetupAttachment(RootComponent);
	CharacterCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CharacterCamera->SetupAttachment(SpringArm, USpringArmComponent::SocketName);
	bDead = false;
}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void APlayerCharacter::MoveRight(float Value)
{
	if ((bDead) || (!Controller) || (Value == 0.0f))
		return;
	AddMovementInput(FVector(1.0f, 0.0f, 0.0f), Value);
}

void APlayerCharacter::Jump()
{
	if ((bDead) || (!Controller))
		return;
	ACharacter::Jump();
}

void APlayerCharacter::StopJump()
{
	if ((bDead) || (!Controller) )
		return;
	ACharacter::StopJumping();
}

void APlayerCharacter::Teleport()
{
	if ((bDead) || (!Controller))
		return;
	if (StartLocation.Z <= -500 && StartLocation.Z>=-2000)
		TeleportLocation = FVector(StartLocation.X, StartLocation.Y, StartLocation.Z + 1690.0f);
	ACharacter::SetActorLocation(TeleportLocation);
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	ClassicRotator = GetActorRotation();
	StartLocation = GetActorLocation();
	TeleportLocation = FVector(StartLocation.X, StartLocation.Y, StartLocation.Z-1690.0f);
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveRight", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &APlayerCharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &APlayerCharacter::StopJump);
	PlayerInputComponent->BindAxis("JMoveRight", this, &APlayerCharacter::MoveRight);
	PlayerInputComponent->BindAction("Teleport",IE_Pressed, this, &APlayerCharacter::Teleport);
}

