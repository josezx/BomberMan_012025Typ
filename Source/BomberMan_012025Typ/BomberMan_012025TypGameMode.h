// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Bloque.h"
#include "BomberMan_012025TypGameMode.generated.h"
UCLASS(minimalapi)
class ABomberMan_012025TypGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABomberMan_012025TypGameMode();
public:

	virtual void BeginPlay() override;
public:
	//Para bloque
	UPROPERTY()
	TArray<ABloque*> BloquesA; // Guarda todos los bloques generados
	TArray<TArray<int32>> MapaLaberinto;
	void GenerarMapaDesdeCodigo();
	int32 TColumnas;
	int32 TFilas;


	void GenerarLaberinto();

	//FabricaBloques* GenerarBloques();

	//Para clonar bloques
	void ClonarBloques(int32 InTFilas, int32 InTColumnas);

	//void ClonarMitadDerechaAHaciaIzquierda();
	//ABloque* BuscarBloqueEnPosicion(FVector Posicion);
	float TamanoCelda = 200.0f;

	//para Eliminar bloques
	ABloque* BloqueActual = nullptr;
	FTimerHandle TimerEliminarBloque;
	FTimerHandle TimerInicialBloquesMadera;
	void EliminarBloque();
	void iniciarEliminarBloque();
	//espacios vacios de mi corazon
	TArray<FVector> PuntosPatrullaLibres;


	void PosicionarJugadorAleatoriamente();
	FTimerHandle TimerPosicion;
};



