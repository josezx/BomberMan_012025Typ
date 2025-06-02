// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemigoBase.h"
#include "EnemigoDoria.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_012025TYP_API AEnemigoDoria : public AEnemigoBase
{
	GENERATED_BODY()
protected:
	virtual void Tick(float DeltaTime) override;


	void BeginPlay();
};
