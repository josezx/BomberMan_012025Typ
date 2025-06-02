// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemigoBallom.h"
#include "Components/StaticMeshComponent.h"
void AEnemigoBallom::BeginPlay()
{
	Super::BeginPlay();

	// Malla pirámide (Quad Pyramid)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshAsset(TEXT("/Game/StarterContent/Shapes/Shape_QuadPyramid.Shape_QuadPyramid"));
	if (MeshAsset.Succeeded())
	{
		MallaEnemigo->SetStaticMesh(MeshAsset.Object);
		MallaEnemigo->SetRelativeScale3D(FVector(4.f, 4.f, 2.f)); // Escalado opcional
	}
	// Material opcional
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialAsset(TEXT("/Game/StarterContent/Materials/M_Brick_Clay_New.M_Brick_Clay_New"));
	if (MaterialAsset.Succeeded())
	{
		MallaEnemigo->SetMaterial(0, MaterialAsset.Object);
	}
}