// Fill out your copyright notice in the Description page of Project Settings.


#include "ObjetRecuperable.h"

// Sets default values
AObjetRecuperable::AObjetRecuperable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mailles = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Corps objet"));
	this->RootComponent = this->mailles;
}
void AObjetRecuperable::attraper_Implementation()
{
	UE_LOG(LogTemp,Warning, TEXT("AObjetRecuperable::estAttrape_Implementation()"));
}
// Called when the game starts or when spawned
void AObjetRecuperable::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AObjetRecuperable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

