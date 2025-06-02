// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoMinvo.h"
void AEnemigoMinvo::BeginPlay()
{
	Super::BeginPlay();
	VelocidadMovimiento = 400.f;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cone.Cone"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Metal_Burnished_Steel.M_Metal_Burnished_Steel"));

	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
	if (MaterialAsset.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, MaterialAsset.Object);
	}
}
