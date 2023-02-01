using UnrealBuildTool;

public class Interaction_With_ALSTarget : TargetRules
{
	public Interaction_With_ALSTarget(TargetInfo Target) : base(Target)
	{
		DefaultBuildSettings = BuildSettingsVersion.V2;
		Type = TargetType.Game;
		ExtraModuleNames.Add("Interaction_With_ALS");
	}
}
