// Fill out your copyright notice in the Description page of Project Settings.


#include "BurstWeapon.h"
#include "GameFramework/Character.h"

void ABurstWeapon::EventTrigger_Implementation(bool IsPress)
{
	if (IsPress == true)
	{
		BurstCnt = 3;
		LoopShootMontage();
	}
}

void ABurstWeapon::LoopShootMontage()
{
	if (IsValid(weaponData->ShootMontage) == false)
		return;

	OwnChar->PlayAnimMontage(weaponData->ShootMontage);

	BurstCnt--;
	if (BurstCnt > 0)
	{
		FTimerManager& timerManager = GetWorld()->GetTimerManager();
		timerManager.SetTimer(th_loopShoot, this, &ABurstWeapon::LoopShootMontage, 0.2f, false);
	}
}
