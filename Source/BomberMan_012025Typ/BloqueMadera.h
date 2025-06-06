// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueMadera.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueMadera : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueMadera();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

public:

	bool MoverBloque;
	bool bAbriendo;
	float VelocidadMovimiento;
	float DistanciaApertura; // Distancia m�xima al abrir
	FVector PosicionInicial; // Posici�n inicia	

	// Implementaci�n del patr�n Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
