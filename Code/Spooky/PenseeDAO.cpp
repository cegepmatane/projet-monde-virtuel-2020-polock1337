// Fill out your copyright notice in the Description page of Project Settings.


#include "PenseeDAO.h"
#include "Dom/JsonObject.h"
#include "Serialization/JsonSerializer.h"
#include "Serialization/JsonReader.h"
// Sets default values
APenseeDAO::APenseeDAO()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->http = &FHttpModule::Get();
}

// Called when the game starts or when spawned
void APenseeDAO::BeginPlay()
{
	detaillerPenserDuJour();
	Super::BeginPlay();
	
}

// Called every frame
void APenseeDAO::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void APenseeDAO::detaillerPenserDuJour() {
	TSharedRef<IHttpRequest> demande = http->CreateRequest();
	demande->SetURL("https://zenquotes.io/api/random");
	demande->SetVerb("GET");
	demande->SetHeader("Content-Type", TEXT("application/json"));
	demande->OnProcessRequestComplete().BindUObject(this, &APenseeDAO::recevoirPenserDuJour);
	demande->ProcessRequest();
}
void APenseeDAO::recevoirPenserDuJour(FHttpRequestPtr demande, FHttpResponsePtr reponse, bool succes)
{
	GEngine->AddOnScreenDebugMessage(1,10.0f,FColor::Green,"Pensee Recu",true);
	FString texte = reponse->GetContentAsString();
	GEngine->AddOnScreenDebugMessage(2, 10.0f, FColor::Green, texte, true);
	TSharedRef<TJsonReader<>> lecteur = TJsonReaderFactory<>::Create(texte);
	TSharedPtr<FJsonValue>json;
	if (FJsonSerializer::Deserialize(lecteur, json))
	{
		FString pensee = json->AsArray()[0]->AsObject()->GetStringField("q");
		this->penseeDuJour = pensee;
		GEngine->AddOnScreenDebugMessage(3, 10.0f, FColor::Green, "Parseur pret", true);
		GEngine->AddOnScreenDebugMessage(4, 10.0f, FColor::Green, pensee, true);
	}

}


