// palinoia interactive 2021

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjetSimervaTarget : TargetRules
{
	public ProjetSimervaTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjetSimerva" } );
	}
}
