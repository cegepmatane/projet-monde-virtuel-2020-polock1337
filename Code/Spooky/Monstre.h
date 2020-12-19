// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemie.h"
#include "Monstre.generated.h"

/**
 * 
 */
UCLASS()
class SPOOKY_API AMonstre : public AEnemie
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Enemie")
		void imobiliser();
	UFUNCTION(BlueprintCallable, Category = "Enemie")
		void faireBouger();
};
