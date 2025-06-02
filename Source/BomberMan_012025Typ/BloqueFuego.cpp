// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueFuego.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Engine/Engine.h"

ABloqueFuego::ABloqueFuego()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material de fuego
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Script/Engine.MaterialInstanceConstant'/Game/StarterContent/Materials/Fuego.Fuego'"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Partículas
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Fire.P_Fire"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(3.0f));
	}

	// Movimiento aleatorio de rotación
	RotationSpeed = FMath::RandRange(30.f, 90.f);
	RotationAxis = FVector(FMath::FRand(), FMath::FRand(), FMath::FRand()).GetSafeNormal();
}

void ABloqueFuego::BeginPlay()
{
	Super::BeginPlay();

	FVector Pos = GetActorLocation();
	Pos.Z += 940.f;
	SetActorLocation(Pos);
	PosicionInicial = GetActorLocation();
}

void ABloqueFuego::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Rotación
	FRotator DeltaRotation = FRotator::ZeroRotator;
	DeltaRotation += FQuat(RotationAxis, FMath::DegreesToRadians(RotationSpeed * DeltaTime)).Rotator();
	AddActorLocalRotation(DeltaRotation);

	// Flotación vertical
	float OffsetZ = FMath::Abs(FMath::Sin(GetWorld()->GetTimeSeconds() * 2.f)) * 150.f;
	FVector NuevaPos = PosicionInicial + FVector(0.f, 0.f, OffsetZ);
	SetActorLocation(NuevaPos);
}
