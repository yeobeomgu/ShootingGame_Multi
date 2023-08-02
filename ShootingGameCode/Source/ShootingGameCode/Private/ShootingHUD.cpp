// Fill out your copyright notice in the Description page of Project Settings.


#include "ShootingHUD.h"
#include "Blueprint/UserWidget.h"
#include "ShootingPlayerState.h"

void AShootingHUD::BeginPlay()
{
	Super::BeginPlay();

	HudWidget = CreateWidget<UUserWidget>(GetWorld(), HudWidgetClass);
	HudWidget->AddToViewport();

	BindMyPlayerState();
}

void AShootingHUD::BindMyPlayerState()
{
	APlayerController* pc = GetWorld()->GetFirstPlayerController();

	if (IsValid(pc))
	{
		AShootingPlayerState* ps = Cast<AShootingPlayerState>(pc->PlayerState);
		if (IsValid(ps))
		{
			ps->Fuc_Dele_UpdateHp.AddDynamic(this, &AShootingHUD::OnUpdateMyHp);
			OnUpdateMyHp(ps->CurHp, ps->MaxHp);

			ps->Fuc_Dele_UpdateMag.AddDynamic(this, &AShootingHUD::OnUpdateMyMag);
			return;
		}
	}

	FTimerManager& timerManager = GetWorld()->GetTimerManager();
	timerManager.SetTimer(th_BindMyPlayerState, this, &AShootingHUD::BindMyPlayerState, 0.1f, false);
}

void AShootingHUD::OnUpdateMyHp_Implementation(float CurHp, float MaxHp)
{
}

void AShootingHUD::OnUpdateMyAmmo_Implementation(int Ammo)
{
}

void AShootingHUD::OnUpdateMyMag_Implementation(int Mag)
{
}
