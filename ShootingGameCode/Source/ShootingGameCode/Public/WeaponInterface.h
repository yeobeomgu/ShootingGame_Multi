// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "WeaponInterface.generated.h"

UINTERFACE(Blueprintable)
class UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SHOOTINGGAMECODE_API IWeaponInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventTrigger(bool IsPress);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventReload();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventShoot();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventPickUp(ACharacter* targetChar);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventDrop(ACharacter* targetChar);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void IsCanPickUp(bool& IsCanPickUp);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EventResetAmmo();
};
