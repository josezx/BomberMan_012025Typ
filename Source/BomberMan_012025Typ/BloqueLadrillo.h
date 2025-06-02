// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueLadrillo.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueLadrillo : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueLadrillo();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

public:
	float velocidad;
	float amplitud;
	float PosicionInicial;


	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
