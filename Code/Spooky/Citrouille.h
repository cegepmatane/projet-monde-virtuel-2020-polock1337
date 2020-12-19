// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObjetRecuperable.h"
#include "Citrouille.generated.h"

/**
 * 
 */
UCLASS()
class SPOOKY_API ACitrouille : public AObjetRecuperable
{
	GENERATED_BODY()
	public:
		void attraper_Implementation() override;
};
