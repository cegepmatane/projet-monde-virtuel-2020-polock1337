// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Spooky : ModuleRules
{
	public Spooky(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
