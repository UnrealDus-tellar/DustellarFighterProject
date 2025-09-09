// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class DustellarProject : ModuleRules
{
	public DustellarProject(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"DustellarProject",
			"DustellarProject/Variant_Platforming",
			"DustellarProject/Variant_Platforming/Animation",
			"DustellarProject/Variant_Combat",
			"DustellarProject/Variant_Combat/AI",
			"DustellarProject/Variant_Combat/Animation",
			"DustellarProject/Variant_Combat/Gameplay",
			"DustellarProject/Variant_Combat/Interfaces",
			"DustellarProject/Variant_Combat/UI",
			"DustellarProject/Variant_SideScrolling",
			"DustellarProject/Variant_SideScrolling/AI",
			"DustellarProject/Variant_SideScrolling/Gameplay",
			"DustellarProject/Variant_SideScrolling/Interfaces",
			"DustellarProject/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
