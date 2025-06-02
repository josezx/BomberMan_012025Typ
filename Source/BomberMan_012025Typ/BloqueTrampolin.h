// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueTrampolin.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueTrampolin : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueTrampolin();
protected:
	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:
	virtual void Tick(float DeltaTime) override;

private:
	FVector PosicionInicial;
	float AmplitudSalto;
	float FrecuenciaSalto;
	float TiempoAcumulado;
	float UltimoValorZ;
	bool bParticulaActiva;
public:
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
