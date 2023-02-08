// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PrimitiveSceneProxy.h"
#include "MultPassRenderComponent/UMultiPassComponent.h"

class UMultiPassComponent;


/**
 * 
 */
class MULTPASSRENDERCOMPONENT_API FMultPassSceneProxy final : public FPrimitiveSceneProxy 
{
public:
	FMultPassSceneProxy(UMultiPassComponent* InComponent);
	virtual ~FMultPassSceneProxy() override;
public:
	virtual void DrawStaticElements(FStaticPrimitiveDrawInterface* PDI) override;
	virtual void GetDynamicMeshElements(const TArray<const FSceneView*>& Views,
		const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& OutCollector) const override;
	
	virtual size_t GetTypeHash() const override;
	
	virtual uint32_t GetMemoryFootprint() const override {return (sizeof(*this) + GetAllocatedSize());}
	size_t GetAllocatedSize(void) const {return (FPrimitiveSceneProxy::GetAllocatedSize());}
private:
	UMultiPassComponent* PtrMultiPassComponent;
};
