// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Components/PrimitiveComponent.h"
#include "Components/MeshComponent.h"
#include "UMultiPassComponent.generated.h"

/**
 * 
 */
UCLASS(EditInlineNew,
ClassGroup ="Render",
meta = (BlueprintSpawnableComponent)
)
class MULTPASSRENDERCOMPONENT_API UMultiPassComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Static Mesh Assets")
	UStaticMesh* PtrStateMeshAssets;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Materials")
	TArray<UMaterialInterface*> PtrMaterials;
};
