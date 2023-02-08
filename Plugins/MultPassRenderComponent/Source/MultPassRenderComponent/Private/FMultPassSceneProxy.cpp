// Fill out your copyright notice in the Description page of Project Settings.


#include "FMultPassSceneProxy.h"


FMultPassSceneProxy::FMultPassSceneProxy(UMultiPassComponent* InComponent)
	:FPrimitiveSceneProxy(InComponent), PtrMultiPassComponent(InComponent)
{
	
}

FMultPassSceneProxy::~FMultPassSceneProxy()
{
}

size_t FMultPassSceneProxy::GetTypeHash() const
{
	return reinterpret_cast<size_t>(this);
}

void FMultPassSceneProxy::GetDynamicMeshElements(const TArray<const FSceneView*>& Views, const FSceneViewFamily& ViewFamily, uint32 VisibilityMap, FMeshElementCollector& OutCollector) const
{
	
}


void FMultPassSceneProxy::DrawStaticElements(FStaticPrimitiveDrawInterface* PDI)
{
	
}
