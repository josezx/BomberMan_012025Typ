// permite copiar objetos existentes sin que el código dependa de sus clases.
// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "IPrototypeBloques.generated.h"
	// La interfaz  declara los métodos de clonación., se trata de un único método clonar.
// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UIPrototypeBloques : public UInterface
{
	GENERATED_BODY()
};	

/**
 * 
 */
class BOMBERMAN_012025TYP_API IIPrototypeBloques
{
	GENERATED_BODY()
	//creacion a la alternativa de subclases
	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
	//metodo virtual puro de clonar
public:
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const = 0;
};
