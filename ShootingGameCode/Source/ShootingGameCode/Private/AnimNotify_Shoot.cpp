// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimNotify_Shoot.h"
#include "ShootingGameCodeCharacter.h"
#include "WeaponInterface.h"

void UAnimNotify_Shoot::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	AShootingGameCodeCharacter* pChar = Cast<AShootingGameCodeCharacter>(MeshComp->GetOwner());
	if (IsValid(pChar) == false)
		return;

	IWeaponInterface* InterfaceObj =  Cast<IWeaponInterface>(pChar->EquipWeapon);
	if (InterfaceObj == nullptr)
		return;

	InterfaceObj->Execute_EventShoot(pChar->EquipWeapon);
}
