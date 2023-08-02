// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ItemInterface.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "ShootingGameCodeCharacter.generated.h"


UCLASS(config=Game)
class AShootingGameCodeCharacter : public ACharacter, public IItemInterface
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* FollowCamera;
	
	/** MappingContext */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputMappingContext* DefaultMappingContext;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* LookAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* TriggerAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* ReloadAction;

	/** PressF Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* PressFAction;

	/** Drop Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* DropAction;

	/** Test Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	class UInputAction* TestAction;

public:
	AShootingGameCodeCharacter();
	

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);
			
	/** Called for looking input */
	void TriggerPress(const FInputActionValue& Value);
	void TriggerRelease(const FInputActionValue& Value);

	/** Called for looking input */
	void Reload(const FInputActionValue& Value);

	/** Called for looking input */
	void PressF(const FInputActionValue& Value);

	/** Called for looking input */
	void Drop(const FInputActionValue& Value);

	/** Called for looking input */
	void Test(const FInputActionValue& Value);

protected:
	// APawn interface
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	// To add mapping context
	virtual void BeginPlay();

	virtual void Tick(float DeltaTime) override;

	virtual float TakeDamage(float DamageAmount, struct FDamageEvent const& DamageEvent, 
		class AController* EventInstigator, AActor* DamageCauser) override;

public:
	UFUNCTION(Server, Reliable)
	void ReqTrigger(bool IsPress);

	UFUNCTION(NetMulticast, Reliable)
	void ResTrigger(bool IsPress);

	UFUNCTION(Server, Reliable)
	void ReqReload();

	UFUNCTION(NetMulticast, Reliable)
	void ResReload();

	UFUNCTION(Server, Reliable)
	void ReqPressF();

	UFUNCTION(NetMulticast, Reliable)
	void ResPressF(AActor* weapon);

	UFUNCTION(Server, Reliable)
	void ReqDrop();

	UFUNCTION(NetMulticast, Reliable)
	void ResDrop();

public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void EventGetItem(EItemType itemType);

	void EventGetItem_Implementation(EItemType itemType) override;

public:
	UFUNCTION(BlueprintCallable)
	void EquipTestWeapon(TSubclassOf<class AWeapon> WeaponClass);

	UFUNCTION(BlueprintCallable)
	AActor* FindNearestWeapon();

	UFUNCTION(BlueprintCallable)
	void DoRagdoll();

	UFUNCTION(BlueprintCallable)
	void DoGetUp();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void OnUpdateHp(float CurHp, float MaxHp);

	void OnUpdateHp_Implementation(float CurHp, float MaxHp);

public:
	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }
	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }

public:
	void DoPickUp(AActor* weapon);

	void DoDrop();

	void BindPlayerState();

	FTransform GetRandomReviveTransform();

public:
	UPROPERTY(Replicated)
	FRotator PlayerRotation;

	UFUNCTION(BlueprintPure)
	FRotator GetPlayerRotation();

	AActor* EquipWeapon;

	UFUNCTION(BlueprintPure)
	bool IsEquip();

	bool IsRagdoll;

	FTimerHandle th_BindPlayerState;
};

