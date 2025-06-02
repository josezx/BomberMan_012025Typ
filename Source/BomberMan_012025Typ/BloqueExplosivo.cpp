// Fill out your copyright notice in the Description page of Project Settings.


#include "BloqueExplosivo.h"
#include "Components/StaticMeshComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Materials/MaterialInterface.h"
#include "Kismet/GameplayStatics.h"

ABloqueExplosivo::ABloqueExplosivo()
{
	PrimaryActorTick.bCanEverTick = true;
	bDestruible = true;
	bHaExplotado = false;

	TiempoAcumulado = 0.f;
	FrecuenciaRespiracion = 2.8f;
	AmplitudRespiracion = 0.7f;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (MeshAsset.Succeeded())
	{
		MeshBloque->SetStaticMesh(MeshAsset.Object);
	}

	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt"));
	if (MaterialAsset.Succeeded())
	{
		MeshBloque->SetMaterial(0, MaterialAsset.Object);
	}

	ExplosionPreview = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("PreviewEffect"));
	ExplosionPreview->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UParticleSystem> PreviewAsset(TEXT("/Game/StarterContent/Particles/P_Smoke.P_Smoke"));
	if (PreviewAsset.Succeeded())
	{
		ExplosionPreview->SetTemplate(PreviewAsset.Object);
		ExplosionPreview->SetWorldScale3D(FVector(0.5f));
	}

	static ConstructorHelpers::FObjectFinder<UParticleSystem> ExplosionAsset(TEXT("/Game/StarterContent/Particles/P_Explosion.P_Explosion"));
	if (ExplosionAsset.Succeeded())
	{
		ExplosionFinal = ExplosionAsset.Object;
		ExplosionPreview->SetWorldScale3D(FVector(1.0f));
	}
}

void ABloqueExplosivo::BeginPlay()
{
	Super::BeginPlay();
}

void ABloqueExplosivo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	TiempoAcumulado += DeltaTime;

	float Intensidad = (FMath::Sin(TiempoAcumulado * FrecuenciaRespiracion) + 25.0f) * 0.5f;
	float Aleatorio = FMath::FRandRange(0.98f, 1.02f);
	float Escala = (1.0f + Intensidad * AmplitudRespiracion) * Aleatorio;

	SetActorScale3D(FVector(Escala));
}

void ABloqueExplosivo::EjecutarExplosion()
{
	if (bHaExplotado) return;

	bHaExplotado = true;

	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionFinal, GetActorLocation());

	Destroy();
}
AActor* ABloqueExplosivo::Clonar(UWorld* Mundo, const FVector& Posicion) const
{
	if (!Mundo) return nullptr;

	FActorSpawnParameters SpawnParams;
	ABloqueExplosivo* Nuevo = Mundo->SpawnActor<ABloqueExplosivo>(GetClass(), Posicion, GetActorRotation(), SpawnParams);


	if (Nuevo)
	{
		Nuevo->TiempoMovimiento = this->TiempoMovimiento;
		// puedes copiar más propiedades si necesitas
	}

	return Nuevo;
}