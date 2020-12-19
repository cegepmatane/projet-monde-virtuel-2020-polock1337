// Fill out your copyright notice in the Description page of Project Settings.


#include "Squelette.h"

void ASquelette::imobiliser()
{
	this->estEnMouvement = false;
}
void ASquelette::faireBouger()
{
	this->estEnMouvement = true;
}