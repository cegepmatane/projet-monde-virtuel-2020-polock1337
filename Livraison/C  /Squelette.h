// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemie.h"
#include "Squelette.generated.h"

/**
 * 
 */
UCLASS()
class SPOOKY_API ASquelette : public AEnemie
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Enemie")
	void imobiliser();
	UFUNCTION(BlueprintCallable, Category = "Enemie")
	void faireBouger();
};

