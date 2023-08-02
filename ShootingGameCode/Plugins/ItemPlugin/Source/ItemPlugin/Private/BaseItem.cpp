// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseItem.h"
#include "Components/SphereComponent.h"
#include "ItemInterface.h"

// Sets default values
ABaseItem::ABaseItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Sphere = CreateDefaultSubobject<USphereComponent>("Sphere");

	SetRootComponent(Sphere);
	StaticMesh->SetupAttachment(RootComponent);

	bReplicates = true;

	StaticMesh->SetCollisionProfileName("OverlapAllDynamic");

	Sphere->OnComponentBeginOverlap.AddDynamic(this, &ABaseItem::MeshBeginOverlap);
}

// Called when the game starts or when spawned
void ABaseItem::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseItem::MeshBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (HasAuthority() == false)
		return;

	IItemInterface* InterfaceObj = Cast<IItemInterface>(OtherActor);

	if (InterfaceObj == nullptr)
		return;

	InterfaceObj->Execute_EventGetItem(OtherActor, eItemType);

	Destroy();
}

