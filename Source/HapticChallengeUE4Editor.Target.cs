// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class HapticChallengeUE4EditorTarget : TargetRules
{
	public HapticChallengeUE4EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "HapticChallengeUE4" } );
	}
}
