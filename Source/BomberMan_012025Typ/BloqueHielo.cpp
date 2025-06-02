// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueHielo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueHielo::ABloqueHielo()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	// Malla de cubo (usa el de BasicShapes o tu ruta personalizada)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cube.Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	// Material tipo hielo
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Glass.M_Glass"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	// Partículas de vapor (estilo niebla)
	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Steam_Lit.P_Steam_Lit"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(0.5f, 0.5f, 0.5f));
		ParticleSystem->SetRelativeRotation(FRotator(90.f, 0.f, 0.f));
		ParticleSystem->SetRelativeLocation(FVector(0.f, 0.f, -30.f));
	}

	// Movimiento visual aleatorio
	RotationSpeed = FMath::RandRange(30.f, 90.f);
	RotationAxis = FVector(FMath::FRand(), FMath::FRand(), FMath::FRand()).GetSafeNormal();
	
}

void ABloqueHielo::BeginPlay()
{
	Super::BeginPlay();

	// Posición inicial para flotación
	PosicionInicial = GetActorLocation();
}

void ABloqueHielo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	// Rotación suave
	FRotator DeltaRotation = FQuat(RotationAxis, FMath::DegreesToRadians(RotationSpeed * DeltaTime)).Rotator();
	AddActorLocalRotation(DeltaRotation);
	// Flotación vertical
	float OffsetZ = FMath::Abs(FMath::Sin(GetWorld()->GetTimeSeconds() * 2.f)) * 150.f;
	FVector NuevaPos = PosicionInicial + FVector(0.f, 0.f, OffsetZ);
	SetActorLocation(NuevaPos);

}
AActor* ABloqueHielo::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	if (!Mundo) return nullptr;

	FActorSpawnParameters SpawnParams;
	ABloqueHielo* Nuevo = Mundo->SpawnActor<ABloqueHielo>(GetClass(), Posicion, GetActorRotation(), SpawnParams);


	if (Nuevo)
	{
		Nuevo->TiempoMovimiento = this->TiempoMovimiento;
		// puedes copiar más propiedades si necesitas
	}

	return Nuevo;
}