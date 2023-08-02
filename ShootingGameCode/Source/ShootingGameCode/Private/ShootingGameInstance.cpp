// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingGameInstance.h"

FST_Weapon* UShootingGameInstance::GetWeaponRowData(FName name)
{
	return WeaponData->FindRow<FST_Weapon>(name, TEXT(""));
}

FName UShootingGameInstance::GetWeaponRandomRowName()
{
	if (IsValid(WeaponData) == false)
		return FName();

	TArray<FName> names = WeaponData->GetRowNames();
	FName randName = names[FMath::RandRange(0, names.Num() - 1)];
	return randName;
}
