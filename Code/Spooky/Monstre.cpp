// Fill out your copyright notice in the Description page of Project Settings.


#include "Monstre.h"

void AMonstre::imobiliser()
{
	this->estEnMouvement = false;
}
void AMonstre::faireBouger()
{
	this->estEnMouvement = true;
}