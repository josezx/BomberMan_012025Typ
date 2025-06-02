// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueElectricidad.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Components/BoxComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "TimerManager.h"
#include "Engine/Engine.h"

ABloqueElectricidad::ABloqueElectricidad()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAssetelectrico(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAssetelectrico.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAssetelectrico.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> ObjetoBloqueAceroMaterial(TEXT("/Script/Engine.Material'/Game/StarterContent/Materials/M_Tech_Hex_Tile_Pulse.M_Tech_Hex_Tile_Pulse'"));
	if (ObjetoBloqueAceroMaterial.Succeeded())
	{
		MeshBloque->SetMaterial(0, ObjetoBloqueAceroMaterial.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Sparks.P_Sparks"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(5.0f));
	}

	// Movimiento
	TiempoParaCambiar = 0.2f;
	AmplitudActual = 50.f;
	VibracionAmplitud = 5.0f;
	VibracionFrecuencia = FMath::RandRange(2.f, 6.f);
	TiempoAcumulado = 0.0f;
	RotacionVelocidad = FMath::RandRange(10.f, 30.f);
	FrecuenciaMovimiento = 2.f;
	AmplitudMovimiento = 100.f;

	DanioPorElectroshock = 15.f;
}

void ABloqueElectricidad::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
}

void ABloqueElectricidad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;
	/*
	if (TiempoAcumulado >= TiempoParaCambiar)
	{
		AmplitudActual = FMath::RandRange(-80.f, 80.f);
		TiempoAcumulado = 0.f;
	}

	FVector NuevaPosicion = GetActorLocation();
	NuevaPosicion.Y += FMath::Sin(TiempoAcumulado * VibracionFrecuencia) * VibracionAmplitud * DeltaTime;
	SetActorLocation(NuevaPosicion);

	AddActorLocalRotation(FRotator(0.f, RotacionVelocidad * DeltaTime, 0.f));

	float Desplazamiento = FMath::Sin(TiempoAcumulado * FrecuenciaMovimiento) * AmplitudMovimiento;
	FVector NuevaPos = PosicionInicial;
	NuevaPos.X += Desplazamiento;
	SetActorLocation(NuevaPos);
*/
}

AActor* ABloqueElectricidad::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	if (!Mundo) return nullptr;

	FActorSpawnParameters SpawnParams;
	ABloqueElectricidad* Nuevo = Mundo->SpawnActor<ABloqueElectricidad>(GetClass(), Posicion, GetActorRotation(), SpawnParams);

	return Nuevo;
}