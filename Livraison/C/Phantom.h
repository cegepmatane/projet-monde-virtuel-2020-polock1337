// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Enemie.h"
#include "Phantom.generated.h"

/**
 * 
 */
UCLASS()
class SPOOKY_API APhantom : public AEnemie
{
	GENERATED_BODY()

	public:
		void adapterTailleAuLieu(float taille);
	protected:
		// Called when the game starts or when spawned
		virtual void BeginPlay() override;
};
