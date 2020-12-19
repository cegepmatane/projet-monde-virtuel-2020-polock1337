// Fill out your copyright notice in the Description page of Project Settings.


#include "Citrouille.h"

void ACitrouille::attraper_Implementation()
{
	Super::attraper_Implementation();
	Destroy();
}