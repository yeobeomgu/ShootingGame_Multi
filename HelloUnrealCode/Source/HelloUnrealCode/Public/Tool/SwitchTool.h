// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SwitchTool.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDele_Multi_EventOverlap_OneParam, bool, IsOverlap);

UCLASS()
class HELLOUNREALCODE_API ASwitchTool : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASwitchTool();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION()
	void OnSwitchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSwitchEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* StaticMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<TObjectPtr<AActor>> Actors;

	UPROPERTY(BlueprintAssignable, VisibleAnywhere, BlueprintCallable)
	FDele_Multi_EventOverlap_OneParam FDele_EventOverlap;
};
