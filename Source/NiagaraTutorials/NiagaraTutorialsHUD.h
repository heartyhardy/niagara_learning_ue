// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "NiagaraTutorialsHUD.generated.h"

UCLASS()
class ANiagaraTutorialsHUD : public AHUD
{
	GENERATED_BODY()

public:
	ANiagaraTutorialsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

