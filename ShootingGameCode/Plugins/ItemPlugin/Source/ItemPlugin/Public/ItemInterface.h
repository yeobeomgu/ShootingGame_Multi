// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ItemInterface.generated.h"

UENUM(BlueprintType)
enum class EItemType : uint8
{
	IT_Heal UMETA(DisplayName = "Heal"),
	IT_Mag UMETA(DisplayName = "Mag"),
};

UINTERFACE(Blueprintable)
class UItemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ITEMPLUGIN_API IItemInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = Event)
	void EventGetItem(EItemType itemType);
};
