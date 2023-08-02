// Fill out your copyright notice in the Description page of Project Settings.


#include "ActorSpawner.h"
#include "Weapon.h"
#include "ShootingGameInstance.h"

// Sets default values
AActorSpawner::AActorSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AActorSpawner::BeginPlay()
{
	Super::BeginPlay();
	
	SpawnRandomWeapon();
}

// Called every frame
void AActorSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AActorSpawner::SpawnRandomWeapon()
{
	if (HasAuthority())
	{
		UShootingGameInstance* gameInst = Cast<UShootingGameInstance>(GetGameInstance());
		FName rowName = gameInst->GetWeaponRandomRowName();
		FST_Weapon* data = gameInst->GetWeaponRowData(rowName);

		AWeapon* weapon = GetWorld()->SpawnActor<AWeapon>(data->WeaponClass, GetActorTransform());
		if (weapon)
		{
			weapon->SetWeaponRowName(rowName);
		}
	}
}

