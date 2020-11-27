// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Engine/World.h"
#include "Enemie.h"
#include "Apparition.generated.h"

UCLASS()
class SPOOKY_API AApparition : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = "Apparition", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent * zone;
	UPROPERTY(EditAnywhere, Category = "Apparition")
	TSubclassOf<class AEnemie> objet;

public:	
	// Sets default values for this actor's properties
	AApparition();
	FORCEINLINE class UBoxComponent * getZone() const { return this->zone; }
	UFUNCTION(BlueprintPure, Category = "Apparition")
	FVector getPointsAuHasard();
	void apparaitre();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FTimerHandle minuteur;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
