﻿// Copyright Epic Games, Inc. All Rights Reserved.

#include "BomberMan_012025TypGameMode.h"
#include "BomberMan_012025TypCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "Engine/Engine.h"
#include "Bloque.h"
#include "BloqueFuego.h"
#include "BloqueElectricidad.h"
#include "BloqueAcero.h"
#include "BloqueMadera.h"
#include "BloqueLadrillo.h"
#include "BloqueConcreto.h"
#include "BloqueTrampolin.h"
#include "BloqueHielo.h"
#include "BloqueExplosivo.h"
#include "IPrototypeBloques.h"
//.h declarar, .cpp implementar , llamar en begin
ABomberMan_012025TypGameMode::ABomberMan_012025TypGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
void ABomberMan_012025TypGameMode::BeginPlay()
{
    Super::BeginPlay();
    
    ObtenerMapa();
    ObtenerLaberinto();
    InicializarPrototype();
    ClonarBloques(TFilas, TColumnas);


    //para posicionar aleatoriamente al jugador luego de generar el laberinto
    GetWorld()->GetTimerManager().SetTimer(TimerPosicion, this, &ABomberMan_012025TypGameMode::PosicionarJugadorAleatoriamente, 0.1f, false);

}
void ABomberMan_012025TypGameMode::ObtenerMapa()
{
    int Columnas = 21;
    int Filas = 21;

    TColumnas = Columnas + 1;
    TFilas = Filas + 1;
    int Y;
    int X;
    //inicializamos la matriz
    MapaLaberinto.SetNum(TFilas);
    for (Y = 0; Y < TFilas; Y++)
    {
        MapaLaberinto[Y].SetNum(TColumnas);
        for (X = 0; X < TColumnas; X++)
        {
            int Mitad = TColumnas / 2;
            // Solo trabajar desde la mitad hacia la derecha
            if (X >= Mitad)
            {
                // Bordes verticales y horizontales pero solo en esa mitad
                if (X == Mitad || X == TColumnas - 1 || Y == 0 || Y == TFilas - 1)
                {
                    MapaLaberinto[Y][X] = 1; // Acero
                }
                else
                {
                    MapaLaberinto[Y][X] = -1; // Celda vacía por ahora
                }
            }
            else
            {
                MapaLaberinto[Y][X] = -2; // No se usa (izquierda)
            }
        }
    }
    // Laberinto tipo "DFS" solo en la mitad derecha
    TSet<FIntPoint> Visitadas;
    TArray<FIntPoint> Pila;
    auto Direcciones = { FIntPoint(0, -2), FIntPoint(0, 2), FIntPoint(-2, 0), FIntPoint(2, 0) };

    auto Valido = [&](int X, int Y) -> bool
        {
            return X > Columnas / 2 && Y > 0 && X < Columnas && Y < Filas;
        };

    FIntPoint Inicio(Columnas / 2 + 1, 1); // Inicio en la mitad derecha
    Pila.Push(Inicio);
    MapaLaberinto[Inicio.Y][Inicio.X] = 0;
    Visitadas.Add(Inicio);

    while (Pila.Num() > 0)
    {
        FIntPoint Actual = Pila.Top();
        TArray<FIntPoint> Vecinos;

        for (FIntPoint Dir : Direcciones)
        {
            FIntPoint Nuevo = Actual + Dir;
            if (Valido(Nuevo.X, Nuevo.Y) && !Visitadas.Contains(Nuevo))
            {
                Vecinos.Add(Nuevo);
            }
        }

        if (Vecinos.Num() > 0)
        {
            FIntPoint Elegido = Vecinos[FMath::RandRange(0, Vecinos.Num() - 1)];
            int MidX = (Actual.X + Elegido.X) / 2;
            int MidY = (Actual.Y + Elegido.Y) / 2;

            MapaLaberinto[Elegido.Y][Elegido.X] = 0;
            MapaLaberinto[MidY][MidX] = 0;

            Pila.Push(Elegido);
            Visitadas.Add(Elegido);
        }
        else
        {
            Pila.Pop();
        }
    }

    // Rellenar las celdas restantes en la mitad derecha con bloques aleatorios
    for (Y = 1; Y < TFilas - 1; Y++)
    {
        for (X = Columnas / 2 + 1; X < TColumnas - 1; X++)
        {
            if (MapaLaberinto[Y][X] == -1)
            {
                MapaLaberinto[Y][X] = FMath::RandRange(2, 10); // Bloques: 1=Madera, 2=Ladrillo, 3=Concreto
            }
        }
    }

    // Entrada y salida opcionales (solo si están en la mitad derecha)
    MapaLaberinto[1][Columnas / 2] = 0; // Entrada a la mitad derecha
    MapaLaberinto[TFilas - 2][TColumnas - 2] = 0; // Salida cerca del borde derecho
}

void ABomberMan_012025TypGameMode::ObtenerLaberinto()
{

    float Espaciado = 1000.0f;

    //las filas y columnas se estan creando directamente se derivan automaticamente 
    // El tamaño lo decide el contenido del array.
    //puedo hacer un laberinto más grande o más pequeño solo cambiando el array, sin tocar nada más del código

    // Recorre cada fila del mapa del laberinto (eje Y)
    for (int Y = 0; Y < MapaLaberinto.Num(); ++Y)
    {
        // Recorre cada columna dentro de la fila actual (eje X)
        for (int X = 0; X < MapaLaberinto[Y].Num(); ++X)
        {
            // Obtiene el tipo de bloque que hay en la posición (Y, X)
            int Tipo = MapaLaberinto[Y][X];

            // Si el tipo es 0, se considera espacio vacío y no se genera nada
            if (Tipo == 0) {

                FVector PosicionLibre = FVector(X * Espaciado, Y * Espaciado, 0.0f); // ajusta altura si deseas
                PuntosPatrullaLibres.Add(PosicionLibre);
                continue;



            }

            //creacion directamente desde que se genera x y y, en la pocion 0 0 0 por defecto
            FVector Posicion = FVector(X * Espaciado, Y * Espaciado, 0.0f);
            FRotator Rotacion = FRotator::ZeroRotator;
            TSubclassOf<AActor> ClaseBloque = nullptr;

            switch (Tipo)
            {
            case 1: ClaseBloque = ABloqueAcero::StaticClass(); break;
            case 2: ClaseBloque = ABloqueLadrillo::StaticClass(); break;
            case 3: ClaseBloque = ABloqueConcreto::StaticClass(); break;
            case 4: ClaseBloque = ABloqueMadera::StaticClass(); break;
            case 5: ClaseBloque = ABloqueFuego::StaticClass(); break;
            case 6: ClaseBloque = ABloqueHielo::StaticClass(); break;
            case 7: ClaseBloque = ABloqueElectricidad::StaticClass(); break;
            case 8: ClaseBloque = ABloqueTrampolin::StaticClass(); break;
            case 9: ClaseBloque = ABloqueExplosivo::StaticClass(); break;
            default: break;
            }

            if (ClaseBloque)
            {
                ABloque* BloqueSpawned = GetWorld()->SpawnActor<ABloque>(ClaseBloque, Posicion, Rotacion);
                if (BloqueSpawned)
                {

                    BloquesA.Add(BloqueSpawned); // Guarda el bloque en un array para acceso futuro
                }
            }
        }
    }

}
// funcion para  registrar  los clones de los bloques en el mapa de prototipos que luego se usara para clonar con el patron
void ABomberMan_012025TypGameMode::InicializarPrototype()
{
    auto RegistrarPrototipo = [&](int Tipo, TSubclassOf<AActor> Clase)
        {
            //buscamos los actores  de la clase dada y   los guardamos en resultados
            TArray<AActor*> Resultados;
            UGameplayStatics::GetAllActorsOfClass(GetWorld(), Clase, Resultados);
			//si encontro  se agrega el primer resultado al mapa de prototipos
            if (Resultados.Num() > 0)
            {
                MapaPrototipos.Add(Tipo, Resultados[0]); // solo un prototype
            }
        };
    // se registra  cada tipo de bloque  hacia la izquierda reflejando la estructura
    RegistrarPrototipo(1, ABloqueAcero::StaticClass());
    RegistrarPrototipo(2, ABloqueLadrillo::StaticClass());
    RegistrarPrototipo(3, ABloqueConcreto::StaticClass());
    RegistrarPrototipo(4, ABloqueMadera::StaticClass());
    RegistrarPrototipo(5, ABloqueFuego::StaticClass());
    RegistrarPrototipo(6, ABloqueHielo::StaticClass());
    RegistrarPrototipo(7, ABloqueElectricidad::StaticClass());
    RegistrarPrototipo(8, ABloqueTrampolin::StaticClass());
    RegistrarPrototipo(9, ABloqueExplosivo::StaticClass());
}
//funcion para clonar bloques de la mitad derecha hacia la izquierda
void ABomberMan_012025TypGameMode::ClonarBloques(int InTFilas, int InTColumnas)
{
    float TamanioCelda = 1000.f;// el tamaño entre los bloques
    int Mitad = TColumnas / 2;// desde donde se refleje  la parte central del laberinto
	//recorre  todas las filas y columnas de la mitad derecha del laberinto hasta el final
    for (int Y = 0; Y < InTFilas; Y++)
    {
        for (int X = Mitad; X < InTColumnas; X++)
        {
            int TipoBloque = MapaLaberinto[Y][X];
            if (TipoBloque <= 0) continue;

            // Reflejar respecto al centro del mapa
            int XReflejado = Mitad - (X - Mitad);
            FVector PosClonada = FVector(XReflejado * TamanioCelda, Y * TamanioCelda, 40.f);

            // Buscar el prototipo correspondiente al tipo
            if (AActor* Prototipo = MapaPrototipos.FindRef(TipoBloque))
            {
                IIPrototypeBloques* Interfaz = Cast<IIPrototypeBloques>(Prototipo);
                if (Interfaz)
                {
                    AActor* Clon = Interfaz->Clonar(GetWorld(), PosClonada);
                    if (Clon)
                    {
                        // Registrar el tipo en la mitad izquierda también
                        MapaLaberinto[Y][XReflejado] = TipoBloque;

                        // (Opcional) Mostrar en el log que se clonó correctamente
                        UE_LOG(LogTemp, Warning, TEXT("Clonado bloque tipo %d en X:%d Y:%d"), TipoBloque, XReflejado, Y);
                    }
                }
            }
        }
    }
}


void ABomberMan_012025TypGameMode::EliminarBloque()
{

    TArray<ABloque*> BloquesMadera;

    for (ABloque* Bloque : BloquesA)
    {
        if (Bloque && Bloque->IsA(ABloqueMadera::StaticClass()))
        {
            BloquesMadera.Add(Bloque);
        }
    }

    if (BloquesMadera.Num() > 0)
    {
        int32 Aleatorio = FMath::RandRange(0, BloquesMadera.Num() - 1);
        BloqueActual = BloquesMadera[Aleatorio];

        if (BloqueActual)
        {
            BloqueActual->Destroy();
            BloquesA.Remove(BloqueActual);
        }
    }

}

void ABomberMan_012025TypGameMode::iniciarEliminarBloque()
{
    // Iniciar el temporizador para eliminar bloques
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_012025TypGameMode::EliminarBloque, 3.0f, true);
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_012025TypGameMode::EliminarBloque, 4.0f, true);
    GetWorld()->GetTimerManager().SetTimer(TimerEliminarBloque, this, &ABomberMan_012025TypGameMode::EliminarBloque, 3.0f, true);

}

void ABomberMan_012025TypGameMode::PosicionarJugadorAleatoriamente()
{
    TArray<FVector> PosicionesValidas;
    float Espaciado = 1000.0f;
    int32 NumFilas = MapaLaberinto.Num();
    int32 NumColumnas = MapaLaberinto[0].Num();
    float DistanciaMinima = FLT_MAX;

    for (int Y = 1; Y < NumFilas - 1; ++Y)
    {
        for (int X = 1; X < NumColumnas - 1; ++X)
        {
            // Buscamos celdas vacías adyacentes a bloques de madera
            if (MapaLaberinto[Y][X] == 0)
            {
                // Revisar las 4 direcciones alrededor
                bool CercaDeMadera =
                    MapaLaberinto[Y + 1][X] == 1 || MapaLaberinto[Y - 1][X] == 1 ||
                    MapaLaberinto[Y][X + 1] == 1 || MapaLaberinto[Y][X - 1] == 1;

                if (CercaDeMadera)
                {
                    // Calcular la distancia al borde más cercano
                    int DistIzq = X;
                    int DistDer = NumColumnas - 1 - X;
                    int DistArriba = Y;
                    int DistAbajo = NumFilas - 1 - Y;
                    int DistanciaABorde = FMath::Min3(DistIzq, DistDer, FMath::Min(DistArriba, DistAbajo));

                    FVector Pos = FVector(X * Espaciado, Y * Espaciado, 0.0f);

                    if (DistanciaABorde < DistanciaMinima)
                    {
                        PosicionesValidas.Empty(); // Limpiar para nueva distancia mínima
                        DistanciaMinima = DistanciaABorde;
                    }

                    if (DistanciaABorde == DistanciaMinima)
                    {
                        PosicionesValidas.Add(Pos);
                    }
                }
            }
        }
    }

    if (PosicionesValidas.Num() > 0)
    {
        FVector PosicionElegida = PosicionesValidas[FMath::RandRange(0, PosicionesValidas.Num() - 1)];

        // Ajustar altura
        PosicionElegida.Z = 100.f;
        APawn* Jugador = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
        if (Jugador)
        {
            ACharacter* JugadorChar = Cast<ACharacter>(Jugador);
            if (JugadorChar && JugadorChar->GetCapsuleComponent())
            {
                PosicionElegida.Z = JugadorChar->GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
            }

            Jugador->SetActorLocation(PosicionElegida);
            UE_LOG(LogTemp, Warning, TEXT("Jugador posicionado correctamente en: %s"), *PosicionElegida.ToString());
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No se encontró ninguna posición válida para el jugador."));
    }

}