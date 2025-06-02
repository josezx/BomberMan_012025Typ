// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemigoBase.generated.h"

UCLASS()
class BOMBERMAN_012025TYP_API AEnemigoBase : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnemigoBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	FVector DireccionActual;
	float VelocidadMovimiento;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enemigo")
	UStaticMeshComponent* MeshEnemigoBase;

protected:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* MallaEnemigo;

};
