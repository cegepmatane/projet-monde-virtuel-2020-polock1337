// Fill out your copyright notice in the Description page of Project Settings.


#include "Phantom.h"

void APhantom::BeginPlay()
{
	Super::BeginPlay();
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("nouveaux phantom"));
	float taille = FMath::FRand() * 0.3f+0.1f;
	this->adapterTailleAuLieu(taille);
}
void APhantom::adapterTailleAuLieu(float taille)
{
	this->getMailles()->SetRelativeScale3D(FVector(taille, taille, taille));
}
