// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueTrampolin.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "UObject/ConstructorHelpers.h"

ABloqueTrampolin::ABloqueTrampolin()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	ParticleSystem = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("ParticleSystem"));
	ParticleSystem->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ParticleAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ParticleAsset.Succeeded())
	{
		ParticleSystem->SetTemplate(ParticleAsset.Object);
		ParticleSystem->SetWorldScale3D(FVector(1.0f));
	}

	TiempoAcumulado = 0.f;
	AmplitudSalto = 40.f;
	FrecuenciaSalto = 6.f;
	bParticulaActiva = false;
}

void ABloqueTrampolin::BeginPlay()
{
	Super::BeginPlay();
	PosicionInicial = GetActorLocation();
	UltimoValorZ = PosicionInicial.Z;
}

void ABloqueTrampolin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;
	FVector NuevaPos = PosicionInicial;
	float ValorSeno = FMath::Sin(TiempoAcumulado * FrecuenciaSalto);
	float Altura = FMath::Abs(ValorSeno) * AmplitudSalto;
	NuevaPos.Z += Altura;
	SetActorLocation(NuevaPos);

	if (!bParticulaActiva && ValorSeno < -0.98f)
	{
		ParticleSystem->ActivateSystem();
		bParticulaActiva = true;
	}

	if (ValorSeno > -0.5f)
	{
		bParticulaActiva = false;
	}
}
AActor* ABloqueTrampolin::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	if (!Mundo) return nullptr;

	FActorSpawnParameters SpawnParams;
	ABloqueTrampolin* Nuevo = Mundo->SpawnActor<ABloqueTrampolin>(GetClass(), Posicion, GetActorRotation(), SpawnParams);

	return Nuevo;
}