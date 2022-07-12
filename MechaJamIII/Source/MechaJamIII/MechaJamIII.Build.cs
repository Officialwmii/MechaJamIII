// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MechaJamIII : ModuleRules
{
	public MechaJamIII(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
