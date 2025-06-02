// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h"
#include "EnemigoBallom.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API AEnemigoBallom : public AEnemigoBase
{
	GENERATED_BODY()
public:

	void BeginPlay();
protected:
	FVector DireccionActual;
	float VelocidadMovimiento;

};
