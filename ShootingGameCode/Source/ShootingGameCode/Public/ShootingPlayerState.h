// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "ShootingPlayerState.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDele_UpdateHp_TwoParams, float, CurHp, float, MaxHp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_UpdateMag_OneParam, int, Mag);
/**
 * 
 */
UCLASS()
class SHOOTINGGAMECODE_API AShootingPlayerState : public APlayerState
{
	GENERATED_BODY()
	
public:
	AShootingPlayerState();

public:
	UFUNCTION()
	void OnRep_CurHp();

	UFUNCTION()
	void OnRep_MaxHp();

	UFUNCTION()
	void OnRep_Mag();

public:
	UFUNCTION(BlueprintCallable)
	void AddDamage(float Damage);

	UFUNCTION(BlueprintCallable)
	void AddMag();

	UFUNCTION(BlueprintCallable)
	bool UseMag();

	UFUNCTION(BlueprintPure)
	bool IsCanUseMag();

	UFUNCTION(BlueprintCallable)
	void AddHeal(float Heal);

public:
	UPROPERTY(ReplicatedUsing = OnRep_CurHp)
	float CurHp;

	UPROPERTY(ReplicatedUsing = OnRep_MaxHp)
	float MaxHp;

	UPROPERTY(ReplicatedUsing = OnRep_Mag)
	int Mag;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_UpdateHp_TwoParams Fuc_Dele_UpdateHp;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_UpdateMag_OneParam Fuc_Dele_UpdateMag;
};
