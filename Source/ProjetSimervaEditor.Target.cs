// palinoia interactive 2021

using UnrealBuildTool;
using System.Collections.Generic;

public class ProjetSimervaEditorTarget : TargetRules
{
	public ProjetSimervaEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "ProjetSimerva" } );
	}
}
