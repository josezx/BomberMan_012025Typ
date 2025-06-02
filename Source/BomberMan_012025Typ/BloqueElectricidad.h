// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueElectricidad.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueElectricidad : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueElectricidad();

protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	FVector PosicionInicial;
	float TiempoAcumulado;
	float FrecuenciaMovimiento;
	float AmplitudMovimiento;
	float TiempoParaCambiar;
	float AmplitudActual;
	float VibracionAmplitud;
	float VibracionFrecuencia;
	float RotacionVelocidad;
	float DanioPorElectroshock;
public:
	// Implementación del patrón Prototype
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
