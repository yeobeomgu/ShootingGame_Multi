// Fill out your copyright notice in the Description page of Project Settings.


#include "MoveRect.h"
#include "Tool/EventComponent.h"

// Sets default values
AMoveRect::AMoveRect()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	EventComp = CreateDefaultSubobject<UEventComponent>(TEXT("EventComp"));
}

// Called when the game starts or when spawned
void AMoveRect::BeginPlay()
{
	Super::BeginPlay();
	
	if(IsValid(TargetSwitch))
		TargetSwitch->FDele_EventOverlap.AddDynamic(this, &AMoveRect::OnEventOverlap);

	EventComp->FDele_EventOverlap.AddDynamic(this, &AMoveRect::OnCompEventOverlap);
}

// Called every frame
void AMoveRect::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (MoveType)
	{
	case EN_MoveType::MoveRight:
		{
		}
		break;
	case EN_MoveType::MoveUp:
		{
		}
		break;
	case EN_MoveType::MoveLeft:
		{
		}
		break;
	case EN_MoveType::MoveDown:
		{
		}
		break;
	default:
		break;
	}
}

void AMoveRect::OnEventOverlap(bool IsOverlap)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Blue, FString::Printf(TEXT("MoveRect OnEventOverlap IsOverlap=%s")
		, IsOverlap ? TEXT("True") : TEXT("False")));
}

void AMoveRect::OnCompEventOverlap(bool IsOverlap)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Black, FString::Printf(TEXT("MoveRect OnCompEventOverlap IsOverlap=%s")
		, IsOverlap ? TEXT("True") : TEXT("False")));
}

