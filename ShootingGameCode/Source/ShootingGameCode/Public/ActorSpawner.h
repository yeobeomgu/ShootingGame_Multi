// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorSpawner.generated.h"

UCLASS()
class SHOOTINGGAMECODE_API AActorSpawner : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorSpawner();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable)
	void SpawnRandomWeapon();

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<AActor> SpawnClass;
};
