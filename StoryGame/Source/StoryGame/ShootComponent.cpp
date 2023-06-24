// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootComponent.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values for this component's properties
UShootComponent::UShootComponent():
	ShootPeriod(1.0f)
{
}


void UShootComponent::Shoot()
{
	for (FShootInfo ShootInfo : ShootInfos)
	{
		FActorSpawnParameters SpawnParametr;
		SpawnParametr.Owner = GetOwner();
		SpawnParametr.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		FVector SpawnLocation = GetOwner()->GetActorLocation() + GetOwner()->GetActorRotation().RotateVector(ShootInfo.Offset);

		FRotator SpawnRotation = GetOwner()->GetActorRotation();
		SpawnRotation.Add(0.f, ShootInfo.Angle, 0.f);

		APaperProjectail* Projectail = GetWorld()->SpawnActor<APaperProjectail>(ShootInfo.ProjectailClass, SpawnLocation, SpawnRotation, SpawnParametr);
		if (Projectail)
			Projectail->Damage = ShootInfo.Damage;
	}
}

void UShootComponent::StartShoot()
{
	GetWorld()->GetTimerManager().SetTimer(ShootTimer, this, &UShootComponent::Shoot, ShootPeriod, true, ShootPeriod);
}

void UShootComponent::StopShoot()
{
	GetWorld()->GetTimerManager().ClearTimer(ShootTimer);
}




