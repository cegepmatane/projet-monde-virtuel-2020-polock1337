// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemie.h"

// Sets default values
AEnemie::AEnemie()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->distanceConteur = 0;
	this->rotationEnemie = 0;
	this->estEnMouvement = true;
	this->mailles = CreateAbstractDefaultSubobject<UStaticMeshComponent>(TEXT("Corps enemie"));
	this->RootComponent = this->mailles ;

}
// Called when the game starts or when spawned
void AEnemie::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnemie::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (this->estEnMouvement)
	{
		bougerGaucheDroite();
	}
	

	
}
void AEnemie::bougerGaucheDroite()
{
	if (this->distanceConteur <= this->distance)
	{
		FTransform ModifiedTrans = GetTransform();
		ModifiedTrans.SetLocation(FVector(GetActorLocation().X, GetActorLocation().Y + this->vitesse, GetActorLocation().Z));
		SetActorTransform(ModifiedTrans);
		if (this->rotationEnemie != 360)
		{
			this->rotationEnemie += 5;
			FQuat roatationQuat = FQuat(FRotator(0, 5, 0));
			AddActorLocalRotation(roatationQuat, false, 0, ETeleportType::None);
		}

	}
	else if (this->distanceConteur <= this->distance * 2)
	{
		if (this->rotationEnemie == 360)
		{
			this->rotationEnemie = 0;
		}
		FTransform ModifiedTrans = GetTransform();
		ModifiedTrans.SetLocation(FVector(GetActorLocation().X, GetActorLocation().Y - this->vitesse, GetActorLocation().Z));
		SetActorTransform(ModifiedTrans);
		if (this->rotationEnemie != 180)
		{
			this->rotationEnemie += 5;
			FQuat roatationQuat = FQuat(FRotator(0, 5, 0));
			AddActorLocalRotation(roatationQuat, false, 0, ETeleportType::None);
		}
	}
	else
	{
		this->distanceConteur = 0;

	}
	this->distanceConteur++;
}

