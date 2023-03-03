// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DockerTest : ModuleRules
{
	public DockerTest(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
