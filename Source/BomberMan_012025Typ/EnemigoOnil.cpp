// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoOnil.h"
void AEnemigoOnil::BeginPlay()
{
	Super::BeginPlay();

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Engine/BasicShapes/Cylinder.Cylinder"));
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Rock_Basalt.M_Rock_Basalt"));

	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
	}
	if (MaterialAsset.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, MaterialAsset.Object);
	}
}

