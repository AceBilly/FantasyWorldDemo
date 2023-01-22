#pragma once

#include "GlobalShader.h"
#include "RHIDefinitions.h"

class FAceRender : public FGlobalShader
{
public:
	static bool ShouldCache(const EShaderPlatform Platform)
	{
		return IsFeatureLevelSupported(Platform, ERHIFeatureLevel::SM5);
	}
private:
	FShaderParameter PixelUVSize;  // scene texel size;
	
};
