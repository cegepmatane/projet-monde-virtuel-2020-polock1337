// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObjetRecuperable.generated.h"

UCLASS()
class SPOOKY_API AObjetRecuperable : public AActor
{
	GENERATED_BODY()
private:
	UPROPERTY(visibleAnywhere, BlueprintReadOnly, Category = "Enemie", meta = (AllowPrivateAccess = "true"))
	class UStaticMeshComponent* mailles;
public:	
	// Sets default values for this actor's properties
	FORCEINLINE class UStaticMeshComponent* getMailles() const { return this->mailles; }
	AObjetRecuperable();
	UFUNCTION(BlueprintNativeEvent)
	void attraper();
	virtual void attraper_Implementation();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
