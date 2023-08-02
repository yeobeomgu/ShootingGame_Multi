// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Weapon.h"
#include "Engine/GameInstance.h"
#include "ShootingGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTINGGAMECODE_API UShootingGameInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UDataTable* WeaponData;

	FST_Weapon* GetWeaponRowData(FName name);

	FName GetWeaponRandomRowName();
};
