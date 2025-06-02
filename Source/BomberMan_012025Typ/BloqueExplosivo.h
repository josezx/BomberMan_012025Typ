// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloque.h"
#include "IPrototypeBloques.h"
#include "BloqueExplosivo.generated.h"
/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API ABloqueExplosivo : public ABloque, public IIPrototypeBloques
{
	GENERATED_BODY()
public:
	ABloqueExplosivo();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;


private:
	UParticleSystemComponent* ExplosionPreview;
	UParticleSystem* ExplosionFinal;
	bool bHaExplotado;

	float TiempoAcumulado;
	float FrecuenciaRespiracion;
	float AmplitudRespiracion;
	float DanioDeExplosion = 100.f;

	void EjecutarExplosion();
public:
	virtual AActor* Clonar(UWorld* Mundo, const FVector& Posicion) const override;
	float TiempoMovimiento;
};
