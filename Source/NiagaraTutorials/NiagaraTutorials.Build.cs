// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class NiagaraTutorials : ModuleRules
{
	public NiagaraTutorials(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
