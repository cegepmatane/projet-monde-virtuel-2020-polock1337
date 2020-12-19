// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Runtime/Online/HTTP/Public/Http.h"
#include "Engine/Engine.h"
#include "PenseeDAO.generated.h"

UCLASS()
class SPOOKY_API APenseeDAO : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APenseeDAO();
	FHttpModule* http;
	UFUNCTION(BlueprintCallable,Category="Pensee")
	FORCEINLINE FString getPenserDuJour() { return this->penseeDuJour; }
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FString penseeDuJour;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void detaillerPenserDuJour();
	void recevoirPenserDuJour(FHttpRequestPtr demande, FHttpResponsePtr reponse,bool succes);
};
