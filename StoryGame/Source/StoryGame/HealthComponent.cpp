// Fill out your copyright notice in the Description page of Project Settings.


#include "HealthComponent.h"

// Sets default values for this component's properties
UHealthComponent::UHealthComponent():
	Health(100)
{
	
}


// Called when the game starts
void UHealthComponent::BeginPlay()
{
	Super::BeginPlay();
	GetOwner()->OnTakeAnyDamage.AddDynamic(this, &UHealthComponent::OnOwnerDamage);
}

void UHealthComponent::OnOwnerDamage(AActor* DamageActor, float Damage, const UDamageType* DamageType, AController* Instigator, AActor* DamageCouser)
{
	ChangeHealth(-Damage);
}

void UHealthComponent::ChangeHealth(float Value)
{
	Health += Value;
	if (Health <= 0)
	{
		GetOwner()->OnTakeAnyDamage.RemoveDynamic(this, &UHealthComponent::OnOwnerDamage);

		OnHealthEnded.Broadcast();
	}
}

float UHealthComponent::GetHealth()
{
	return Health;
}




