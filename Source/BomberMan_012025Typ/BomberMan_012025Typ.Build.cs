// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BomberMan_012025Typ : ModuleRules
{
	public BomberMan_012025Typ(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
