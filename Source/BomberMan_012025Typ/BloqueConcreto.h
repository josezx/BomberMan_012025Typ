// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueConcreto.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueConcreto : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:

	ABloqueConcreto();

protected:

	virtual void BeginPlay() override;
	UParticleSystemComponent* ParticleSystem;

public:

	virtual void Tick(float DeltaTime) override;
public:
	bool bPuedeGirar;
	float RotationSpeed;
	//patron
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
