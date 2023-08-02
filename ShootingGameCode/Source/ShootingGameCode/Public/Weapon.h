// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WeaponInterface.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

USTRUCT(BlueprintType)
struct FST_Weapon : public FTableRowBase
{
	GENERATED_BODY()

public:
	FST_Weapon()
		: StaticMesh(nullptr)
		, ShootMontage(nullptr)
		, ReloadMontage(nullptr)
		, SoundBase(nullptr)
		, FireEffect(nullptr)
		, MaxAmmo(30)
		, Damage(10)
		, WeaponClass(nullptr)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UStaticMesh* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* ShootMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UAnimMontage* ReloadMontage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	USoundBase* SoundBase;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UParticleSystem* FireEffect;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int MaxAmmo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AWeapon> WeaponClass;
};



UCLASS()
class SHOOTINGGAMECODE_API AWeapon : public AActor, public IWeaponInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventTrigger(bool IsPress);

	virtual void EventTrigger_Implementation(bool IsPress) override;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventReload();

	virtual void EventReload_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventShoot();

	virtual void EventShoot_Implementation() override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventPickUp(ACharacter* targetChar);

	virtual void EventPickUp_Implementation(ACharacter* targetChar) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventDrop(ACharacter* targetChar);

	virtual void EventDrop_Implementation(ACharacter* targetChar) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void IsCanPickUp(bool& IsCanPickUp);

	virtual void IsCanPickUp_Implementation(bool& IsCanPickUp) override;

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventResetAmmo();

	void EventResetAmmo_Implementation() override;

public:
	UFUNCTION(Server, Reliable)
	void ReqShoot(FVector vStart, FVector vEnd);

	UFUNCTION()
	void OnRep_Ammo();

	UFUNCTION()
	void OnRep_RowName();

public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE bool IsCanShoot() const;

public:
	float GetFireStartLength();

	bool UseAmmo();

	void UpdateAmmoToHud(int NewAmmo);

	void SetAmmo(int NewAmmo);

	void SetWeaponData(FName name);

	void SetWeaponRowName(FName name);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* WeaponMesh;

	UPROPERTY(BlueprintReadWrite)
	ACharacter* OwnChar;

	UPROPERTY(ReplicatedUsing = OnRep_Ammo)
	int Ammo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, ReplicatedUsing = OnRep_RowName)
	FName RowName;

	FST_Weapon* weaponData;
};
