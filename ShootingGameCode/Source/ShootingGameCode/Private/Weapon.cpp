// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "Net/UnrealNetwork.h"
#include "ShootingHud.h"
#include "ShootingGameInstance.h"
#include "ShootingPlayerState.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	WeaponMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	WeaponMesh->SetCollisionProfileName("weapon");
	WeaponMesh->SetSimulatePhysics(true);

	bReplicates = true;
	SetReplicateMovement(true);

	SetRootComponent(WeaponMesh);
}

void AWeapon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AWeapon, Ammo);
	DOREPLIFETIME(AWeapon, RowName);
}

// Called when the game starts or when spawned
void AWeapon::BeginPlay()
{
	Super::BeginPlay();

	UShootingGameInstance* gameInst = Cast<UShootingGameInstance>(GetGameInstance());
	weaponData = gameInst->GetWeaponRowData(RowName);

	if (weaponData != nullptr)
	{
		SetWeaponData(RowName);
	}
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeapon::EventTrigger_Implementation(bool IsPress)
{
	if (IsValid(weaponData->ShootMontage) == false)
		return;

	OwnChar->PlayAnimMontage(weaponData->ShootMontage);
}

void AWeapon::EventReload_Implementation()
{
	if (IsValid(weaponData->ReloadMontage) == false)
		return;

	OwnChar->PlayAnimMontage(weaponData->ReloadMontage);
}

void AWeapon::EventShoot_Implementation()
{
	if (IsCanShoot() == false)
		return;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), weaponData->FireEffect,
		WeaponMesh->GetSocketLocation("muzzle"),
		WeaponMesh->GetSocketRotation("muzzle"), 
		FVector(0.1f, 0.1f, 0.1f));

	UGameplayStatics::SpawnSoundAtLocation(GetWorld(), weaponData->SoundBase,
		WeaponMesh->GetSocketLocation("muzzle"));

	APlayerController* shooter = GetWorld()->GetFirstPlayerController();

	FVector CameraLoc = shooter->PlayerCameraManager->GetCameraLocation();
	FVector CameraForward = shooter->PlayerCameraManager->GetActorForwardVector();
	FVector Start = (CameraForward * GetFireStartLength()) + CameraLoc;
	FVector End = (CameraForward * 5000.0f) + CameraLoc;

	ReqShoot(Start, End);
}

void AWeapon::EventPickUp_Implementation(ACharacter* targetChar)
{
	OwnChar = targetChar;

	WeaponMesh->SetSimulatePhysics(false);

	AttachToComponent(targetChar->GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, FName("weapon"));

	UpdateAmmoToHud(Ammo);
}

void AWeapon::EventDrop_Implementation(ACharacter* targetChar)
{
	UpdateAmmoToHud(0);

	OwnChar = nullptr;

	WeaponMesh->SetSimulatePhysics(true);

	DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
}

void AWeapon::IsCanPickUp_Implementation(bool& IsCanPickUp)
{
	if (OwnChar != nullptr)
	{
		IsCanPickUp = false;
		return;
	}

	IsCanPickUp = true;
}

void AWeapon::EventResetAmmo_Implementation()
{
	if (IsValid(OwnChar) == false)
		return;

	AShootingPlayerState* ps = Cast<AShootingPlayerState>(OwnChar->GetPlayerState());
	if(IsValid(ps) == false)
		return;

	if (ps->UseMag() == false)
		return;

	SetAmmo(weaponData->MaxAmmo);
}

void AWeapon::ReqShoot_Implementation(FVector vStart, FVector vEnd)
{
	if (UseAmmo() == false)
		return;

	FHitResult result;
	FCollisionObjectQueryParams collisionObjectQuery;
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_Pawn);
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldStatic);
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_WorldDynamic);
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_PhysicsBody);
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_Vehicle);
	collisionObjectQuery.AddObjectTypesToQuery(ECollisionChannel::ECC_Destructible);

	FCollisionQueryParams collisionQuery;
	collisionQuery.AddIgnoredActor(OwnChar);

	bool isHit = GetWorld()->LineTraceSingleByObjectType(result, vStart, vEnd, collisionObjectQuery, collisionQuery);
	DrawDebugLine(GetWorld(), vStart, vEnd, FColor::Yellow, false, 5.0f);

	if (isHit == false)
		return;

	ACharacter* HitChar = Cast<ACharacter>(result.GetActor());
	if (HitChar == nullptr)
		return;

	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
		FString::Printf(TEXT("ApplyDamage HitChar=%s"), *HitChar->GetName()));
	
	UGameplayStatics::ApplyDamage(HitChar, weaponData->Damage, OwnChar->GetController(), this, UDamageType::StaticClass());
}

void AWeapon::OnRep_Ammo()
{
	UpdateAmmoToHud(Ammo);
}

void AWeapon::OnRep_RowName()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
		FString::Printf(TEXT("OnRep_RowName RowName=%s"), *RowName.ToString()));

	SetWeaponData(RowName);
}

bool AWeapon::IsCanShoot() const
{
	if (Ammo <= 0)
		return false;

	return true;
}

float AWeapon::GetFireStartLength()
{
	if (IsValid(OwnChar) == false)
		return 0.0f;

	USpringArmComponent* arm = Cast<USpringArmComponent>(OwnChar->GetComponentByClass(USpringArmComponent::StaticClass()));
	if (IsValid(arm) == false)
		return 0.0f;

	return arm->TargetArmLength + 100;
}

bool AWeapon::UseAmmo()
{
	if (IsCanShoot() == false)
		return false;

	Ammo = Ammo - 1;
	OnRep_Ammo();
	return true;
}

void AWeapon::UpdateAmmoToHud(int NewAmmo)
{
	if (IsValid(OwnChar) == false)
		return;

	APlayerController* pPlayer0 = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	AController* pOwnController = OwnChar->GetController();
	if (pPlayer0 != pOwnController)
		return;

	AShootingHUD* pHud = Cast<AShootingHUD>(pPlayer0->GetHUD());
	if (IsValid(pHud) == false)
		return;

	pHud->OnUpdateMyAmmo(NewAmmo);
}

void AWeapon::SetAmmo(int NewAmmo)
{
	Ammo = NewAmmo;

	OnRep_Ammo();
}

void AWeapon::SetWeaponData(FName name)
{
	UShootingGameInstance* gameInst = Cast<UShootingGameInstance>(GetGameInstance());
	weaponData = gameInst->GetWeaponRowData(name);

	WeaponMesh->SetStaticMesh(weaponData->StaticMesh);

	SetAmmo(weaponData->MaxAmmo);
}

void AWeapon::SetWeaponRowName(FName name)
{
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow,
		FString::Printf(TEXT("SetWeaponRowName name=%s"), *name.ToString()));

	RowName = name;

	OnRep_RowName();
}

