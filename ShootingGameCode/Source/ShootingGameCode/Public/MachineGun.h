// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "MachineGun.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAMECODE_API AMachineGun : public AWeapon
{
	GENERATED_BODY()
	
public:
	virtual void EventTrigger_Implementation(bool IsPress) override;

	void LoopShootMontage();

	FTimerHandle th_loopShoot;
};
