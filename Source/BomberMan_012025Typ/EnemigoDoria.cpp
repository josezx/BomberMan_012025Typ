// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoDoria.h"
void AEnemigoDoria::BeginPlay()
{
	Super::BeginPlay();

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Torus.Torus"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Water_Lake.M_Water_Lake"));

	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
	if (MaterialAsset.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, MaterialAsset.Object);
	}
}
void AEnemigoDoria::Tick(float DeltaTime)
{
	// No hace super::Tick porque ignora cambio de dirección
	SetActorLocation(GetActorLocation() + DireccionActual * VelocidadMovimiento * DeltaTime);
}
