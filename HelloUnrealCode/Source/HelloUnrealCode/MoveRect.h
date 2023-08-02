// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Public/Tool/SwitchTool.h"
#include "GameFramework/Actor.h"
#include "MoveRect.generated.h"

UENUM(BlueprintType)
enum class EN_MoveType : uint8
{
	MoveRight UMETA(DisplayName = "Right"),
	MoveUp UMETA(DisplayName = "Up"),
	MoveLeft UMETA(DisplayName = "Left"),
	MoveDown UMETA(DisplayName = "Down"),
};

UCLASS()
class HELLOUNREALCODE_API AMoveRect : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMoveRect();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void OnEventOverlap(bool IsOverlap);

	UFUNCTION(BlueprintCallable)
	void OnCompEventOverlap(bool IsOverlap);

public:
	EN_MoveType MoveType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TObjectPtr<ASwitchTool> TargetSwitch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UEventComponent* EventComp;
};
