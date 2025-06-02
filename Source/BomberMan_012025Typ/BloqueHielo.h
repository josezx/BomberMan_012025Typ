// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueHielo.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueHielo : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueHielo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

private:
	UParticleSystemComponent* ParticleSystem;
	FVector PosicionInicial;
	float RotationSpeed;
	FVector RotationAxis;

public:
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
