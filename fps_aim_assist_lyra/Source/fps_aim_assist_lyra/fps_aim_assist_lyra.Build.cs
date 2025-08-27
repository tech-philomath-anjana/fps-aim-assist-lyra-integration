// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class fps_aim_assist_lyra : ModuleRules
{
	public fps_aim_assist_lyra(ReadOnlyTargetRules Target) : base(Target)
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
			"fps_aim_assist_lyra",
			"fps_aim_assist_lyra/Variant_Horror",
			"fps_aim_assist_lyra/Variant_Horror/UI",
			"fps_aim_assist_lyra/Variant_Shooter",
			"fps_aim_assist_lyra/Variant_Shooter/AI",
			"fps_aim_assist_lyra/Variant_Shooter/UI",
			"fps_aim_assist_lyra/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
