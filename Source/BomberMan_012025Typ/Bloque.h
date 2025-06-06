// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloque.generated.h"

UCLASS()
class BOMBERMAN_012025TYP_API ABloque : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloque();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
public:
	//malla del bloque
	UPROPERTY()
	UStaticMeshComponent* MeshBloque;


	//float FloatSpeed;
	//float RotationSpeed;
	//bool bPuedeMoverse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque")
	bool bDestruible = true;
	//funcion para cambiar el tama�o del bloque
	UFUNCTION(BlueprintCallable)

	void AjustarTamano(FVector NuevoTamano);

	//private:

		//FVector PosicionInicial;
		//float AmplitudMovimiento = 100.0f; // Distancia m�xima de movimiento
		//float DireccionMovimiento = 1.0f; // 1 = hacia arriba, -1 = hacia abajo

};
