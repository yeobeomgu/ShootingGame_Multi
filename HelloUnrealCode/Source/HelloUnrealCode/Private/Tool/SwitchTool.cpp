// Fill out your copyright notice in the Description page of Project Settings.


#include "Tool/SwitchTool.h"
#include "Tool/EventInterface.h"
#include "Tool/EventComponent.h"

// Sets default values
ASwitchTool::ASwitchTool()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));

	SetRootComponent(Root);

	StaticMesh->AttachToComponent(Root, FAttachmentTransformRules::KeepRelativeTransform);
	StaticMesh->SetRelativeTransform(FTransform::Identity);

	StaticMesh->SetCollisionProfileName("OverlapAllDynamic");

	StaticMesh->OnComponentBeginOverlap.AddDynamic(this, &ASwitchTool::OnSwitchBeginOverlap);
	StaticMesh->OnComponentEndOverlap.AddDynamic(this, &ASwitchTool::OnSwitchEndOverlap);
}

// Called when the game starts or when spawned
void ASwitchTool::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASwitchTool::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASwitchTool::OnSwitchBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("BeginOverlap"));

	for (AActor* a : Actors)
	{
		IEventInterface* InterfaceObj = Cast<IEventInterface>(a);
		if (InterfaceObj)
		{
			InterfaceObj->Execute_EventOverlap(a, true);
		}

		UEventComponent* eventComponent = Cast<UEventComponent>(a->GetComponentByClass(UEventComponent::StaticClass()));
		if (IsValid(eventComponent))
		{
			eventComponent->OnEventOverlap(true);
		}
	}
	
	if(FDele_EventOverlap.IsBound())
		FDele_EventOverlap.Broadcast(true);
}

void ASwitchTool::OnSwitchEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, TEXT("EndOverlap"));

	for (AActor* a : Actors)
	{
		IEventInterface* InterfaceObj = Cast<IEventInterface>(a);
		if (InterfaceObj)
		{
			InterfaceObj->Execute_EventOverlap(a, false);
		}

		UEventComponent* eventComponent = Cast<UEventComponent>(a->GetComponentByClass(UEventComponent::StaticClass()));
		if (IsValid(eventComponent))
		{
			eventComponent->OnEventOverlap(false);
		}
	}

	if (FDele_EventOverlap.IsBound())
		FDele_EventOverlap.Broadcast(false);
}

