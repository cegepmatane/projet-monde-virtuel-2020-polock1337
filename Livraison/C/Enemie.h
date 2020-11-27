// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Enemie.generated.h"

UCLASS()
class SPOOKY_API AEnemie : public AActor
{
	GENERATED_BODY()

private:
	UPROPERTY(visibleAnywhere,BlueprintReadOnly,Category="Enemie",meta=(AllowPrivateAccess="true"))
	class UStaticMeshComponent* mailles;
public:	
	// Sets default values for this actor's properties
	int distanceConteur;
	float rotationEnemie;
	bool estEnMouvement;
	FORCEINLINE class UStaticMeshComponent* getMailles() const { return this->mailles; }
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemie", meta = (AllowPrivateAccess = "true"))
	float vitesse = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enemie", meta = (AllowPrivateAccess = "true"))
	int distance=150;
	AEnemie();
	virtual void Tick(float DeltaTime) override;
	void bougerGaucheDroite();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;


};
