// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EventComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_CompEventOverlap_OneParam, bool, IsOverlap);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HELLOUNREALCODE_API UEventComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UEventComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	UFUNCTION()
	void OnEventOverlap(bool isOverlap);

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_CompEventOverlap_OneParam FDele_EventOverlap;
};
