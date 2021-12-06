// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class MS6026_Game_Project : ModuleRules
{
	public MS6026_Game_Project(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		MinFilesUsingPrecompiledHeaderOverride = 1;
		bFasterWithoutUnity = true;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
