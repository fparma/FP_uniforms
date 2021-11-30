class CfgPatches
{
	class FP_UniformsAsia
	{
		units[]=
		{
			"FP_Rifleman_Type07Universal",
			"FP_Rifleman_02_Type07Universal",
			"FP_Rifleman_Type07Desert",
			"FP_Rifleman_02_Type07Desert",
			"FP_Rifleman_BDU_Type07Universal",
			"FP_Rifleman_BDU_02_Type07Universal",
			"FP_Helipilot_PLA",
			"FP_Fighter_Pilot_PLA_F",
			"FP_Rifleman_INDC",
			"FP_Rifleman_AZTURARID",
			"FP_Rifleman_MECTiger",
			"FP_Rifleman_MECDigiDesert"
		};
		weapons[]=
		{
			"FP_Uniform_Type07Universal",
			"FP_Uniform_02_Type07Universal",
			"FP_Uniform_Type07Desert",
			"FP_Uniform_02_Type07Desert",
			"FP_Uniform_BDU_Type07Universal",
			"FP_Uniform_BDU_02_Type07Universal",
			"FP_Uniform_BDU_Type07Desert",
			"FP_Uniform_BDU_02_Type07Desert",
			"FP_HeliPilotCoveralls_PLA",
			"FP_PilotCoveralls_PLA",
			"FP_Uniform_INDC",
			"FP_Uniform_AZTURARID",
			"FP_Uniform_MECTiger",
			"FP_Uniform_MECDigiDesert",
			"FP_Helmet_Type07Uni",
			"FP_Helmet_Type07UniESS",
			"FP_Helmet_Type07Desert",
			"FP_Helmet_Type07DesertESS",
			"FP_fieldcap_PLA_Type07Uni",
			"FP_fieldcap_PLA_Type07Desert"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR",
			"FP_UniformsEverywhereElse"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class I_Soldier_02_F;
	class FP_Rifleman_Type07Universal: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa"
		};
	};
	class FP_Rifleman_02_Type07Universal: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa"
		};
	};
	class FP_Rifleman_Type07Desert: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa"
		};
	};
	class FP_Rifleman_02_Type07Desert: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa"
		};
	};
	class FP_Rifleman_Type07Woodland: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Woodland.paa"
		};
	};
	class FP_Rifleman_02_Type07Woodland: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Woodland.paa"
		};
	};
	class FP_Rifleman_Type07Oceanic: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type07Oceanic";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Oceanic.paa"
		};
	};
	class FP_Rifleman_02_Type07Oceanic: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type07Oceanic";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type07Oceanic.paa"
		};
	};
	class I_E_Uniform_01_F;
	class I_E_Uniform_01_shortsleeve_F;
	class FP_Rifleman_BDU_Type07Universal: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type07Universal: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type07Universal";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Universal.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_Type07Desert: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="CH Type 07 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type07Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Desert.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type07Desert: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="CH Type 07 Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type07Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Desert.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Desert.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_Type07Woodland: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="CH Type 07 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type07Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Woodland.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Woodland.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type07Woodland: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="CH Type 07 Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type07Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Woodland.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Woodland.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_Type07Oceanic: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="CH Type 07 Oceanic";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type07Oceanic";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Oceanic.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Oceanic.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type07Oceanic: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="CH Type 07 Oceanic";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type07Oceanic";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Oceanic.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type07Oceanic.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_Jietai: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="JP Jietai";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Jietai";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jietai.paa"
		};
	};
	class FP_Rifleman_02_Jietai: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="JP Jietai";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Jietai";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jietai.paa"
		};
	};
	class I_Sniper_F;
	class FP_Sniper_Jietai: I_Sniper_F
	{
		_generalMacro="I_Sniper_F";
		scope=1;
		displayName="JP Jietai";
		nakedUniform="U_BasicBody";
		uniformClass="FP_GhillieSuit_Jietai";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"Camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jietai.paa",
			"\A3\Characters_F\Common\Data\ghillie_woodland_co.paa"
		};
	};
	class FP_Rifleman_BDU_Jietai: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="JP Jietai";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Jietai";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Jietai.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Jietai.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Jietai: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="JP Jietai";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Jietai";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Jietai.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Jietai.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_Jietai_Desert: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="JP Jietai Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Jietai_Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jietai_Desert.paa"
		};
	};
	class FP_Rifleman_02_Jietai_Desert: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="JP Jietai Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Jietai_Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jietai_Desert.paa"
		};
	};
	class FP_Rifleman_BDU_Jietai_Desert: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="JP Jietai Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Jietai_Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Jietai_Desert.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Jietai_Desert.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Jietai_Desert: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="JP Jietai Desert";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Jietai_Desert";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Jietai_Desert.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Jietai_Desert.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_Granite_B: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="ROK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Granite_B";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Granite_B.paa"
		};
	};
	class FP_Rifleman_02_Granite_B: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="ROK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Granite_B";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Granite_B.paa"
		};
	};
	class FP_Rifleman_BDU_Granite_B: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="ROK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Granite_B";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Granite_B.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Granite_B.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Granite_B: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="ROK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Granite_B";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Granite_B.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Granite_B.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_WAVEPAT: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="ROK WAVEPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_WAVEPAT";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_WAVEPAT.paa"
		};
	};
	class FP_Rifleman_02_WAVEPAT: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="ROK WAVEPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_WAVEPAT";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_WAVEPAT.paa"
		};
	};
	class FP_Rifleman_BDU_WAVEPAT: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="ROK WAVEPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_WAVEPAT";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_WAVEPAT.paa",
			"FP_UniformsAsia\SkinsUniform\FP_WAVEPAT.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_WAVEPAT: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="ROK WAVEPAT";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_WAVEPAT";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_WAVEPAT.paa",
			"FP_UniformsAsia\SkinsUniform\FP_WAVEPAT.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_Type87: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="PLA Type87";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_Type87";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type87.paa"
		};
	};
	class FP_Rifleman_02_Type87: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="PLA Type87";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_Type87";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Type87.paa"
		};
	};
	class FP_Rifleman_BDU_Type87: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="PLA Type87";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_Type87";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type87.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type87.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_Type87: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="PLA Type87";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_Type87";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_Type87.paa",
			"FP_UniformsAsia\SkinsUniform\FP_Type87.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_KPA_Woodland: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="KPA Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_KPA_Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Woodland.paa"
		};
	};
	class FP_Rifleman_02_KPA_Woodland: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="KPA Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_KPA_Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Woodland.paa"
		};
	};
	class FP_Rifleman_BDU_KPA_Woodland: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="KPA Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_KPA_Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_KPA_Woodland.paa",
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Woodland.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_KPA_Woodland: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="KPA Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_KPA_Woodland";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_KPA_Woodland.paa",
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Woodland.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_KPA_DigiWld: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="KPA Digital Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_KPA_DigiWld";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_DigiWld.paa"
		};
	};
	class FP_Rifleman_02_KPA_DigiWld: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="KPA Digital Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_KPA_DigiWld";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_DigiWld.paa"
		};
	};
	class FP_Rifleman_BDU_KPA_DigiWld: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="KPA Digital Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_KPA_DigiWld";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_KPA_DigiWld.paa",
			"FP_UniformsAsia\SkinsUniform\FP_KPA_DigiWld.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_KPA_DigiWld: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="KPA Digital Woodland";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_KPA_DigiWld";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_KPA_DigiWld.paa",
			"FP_UniformsAsia\SkinsUniform\FP_KPA_DigiWld.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_ROC_Digital: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="ROC Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_ROC_Digital";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_ROC_Digital.paa"
		};
	};
	class FP_Rifleman_02_ROC_Digital: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="ROC Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_02_ROC_Digital";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_ROC_Digital.paa"
		};
	};
	class FP_Rifleman_BDU_ROC_Digital: I_E_Uniform_01_F
	{
		_generalMacro="I_E_Uniform_01_F";
		scope=1;
		displayName="ROC Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_ROC_Digital";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_ROC_Digital.paa",
			"FP_UniformsAsia\SkinsUniform\FP_ROC_Digital.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class FP_Rifleman_BDU_02_ROC_Digital: I_E_Uniform_01_shortsleeve_F
	{
		_generalMacro="I_E_Uniform_01_shortsleeve_F";
		scope=1;
		displayName="ROC Digital";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_BDU_02_ROC_Digital";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[] = 
		{
			"camo1",
			"camo2",
			"camo3",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Officer_ROC_Digital.paa",
			"FP_UniformsAsia\SkinsUniform\FP_ROC_Digital.paa",
			"a3\characters_f_enoch\uniforms\data\i_e_soldier_01_gloves_black_co.paa"
		};
	};
	class O_officer_F;
	class FP_Rifleman_KPA_Brown: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="KPA BDU (Brown)";
		uniformClass="FP_Uniform_KPA_Brown";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Brown.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_KPA_Duckhunter: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="KPA BDU (Duckhunter)";
		uniformClass="FP_Uniform_KPA_Duckhunter";
		author="CSLeader";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_KPA_Duckhunter.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};	
	class B_Helipilot_F;
	class FP_Helipilot_PLA: B_Helipilot_F
	{
		_generalMacro="B_Helipilot_F";
		scope=1;
		displayName="Helicopter Pilot";
		nakedUniform="U_BasicBody";
		uniformClass = "FP_HeliPilotCoveralls_PLA";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Coveralls_PLA.paa"
		};
	};
	class O_Fighter_Pilot_F;
	class FP_Fighter_Pilot_PLA_F: O_Fighter_Pilot_F
	{
		_generalMacro="O_Fighter_Pilot_F";
		scope=1;
		displayName="Fighter Pilot";
		nakedUniform="U_BasicBody";
		uniformClass = "FP_PilotCoveralls_PLA";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Pilot_Suit_PLA.paa"
		};
	};	
	class FP_Rifleman_INDC: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="IND Indian Camo";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_INDC";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_INDIA.paa"
		};
	};
	class FP_Rifleman_AZTURARID: I_soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="AZ-TUR Arid Camo";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Uniform_AZTURARID";
		author="FP Mod Team";
		side=0;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_AZTURARID.paa"
		};
	};
	class FP_Rifleman_MECTiger: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="MEC Tigerstripe (Sweater)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MECTiger";
		author="FP Mod Team";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\MECNormalfags.paa"
		};
	};
	class FP_Rifleman_MECDigiDesert: I_soldier_F
	{
		_generalMacro="I_soldier_F";
		scope=1;
		displayName="MEC Recon Digital Desert (Sweater)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MECDigiDesert";
		author="FP Mod Team";
		side=2;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\MECSpecialfag.paa"
		};
	};
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class U_I_CombatUniform_shortsleeve;
	class UniformItem;
	class FP_Uniform_Type07Universal: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type07Universal: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Desert: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert)";
		picture="\FP_UniformsAsia\UI\type07deserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type07Desert: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07deserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Woodland: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Woodland)";
		picture="\FP_UniformsAsia\UI\type07woodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type07Woodland: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Woodland, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07woodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Oceanic: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Oceanic)";
		picture="\FP_UniformsAsia\UI\type07oceanicicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Oceanic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type07Oceanic: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Oceanic, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type07oceanicicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type07Oceanic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_E_Uniform_01_F;
	class U_I_E_Uniform_01_shortsleeve_F;
	class FP_Uniform_BDU_Type07Universal: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, BDU)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type07Universal: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Universal, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Universal.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Type07Desert: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert, BDU)";
		picture="\FP_UniformsAsia\UI\type07deserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Desert.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type07Desert: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Desert, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type07deserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Desert.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type07Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Type07Woodland: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Woodland, BDU)";
		picture="\FP_UniformsAsia\UI\type07woodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Woodland.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type07Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type07Woodland: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Woodland, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type07woodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Woodland.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type07Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Type07Oceanic: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Oceanic, BDU)";
		picture="\FP_UniformsAsia\UI\type07oceanicicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Oceanic.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type07Oceanic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type07Oceanic: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type 07 Oceanic, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type07oceanicicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
        hiddenSelectionsTextures[]=
        {
            "FP_UniformsAsia\SkinsUniform\FP_Officer_Type07Oceanic.paa"
        };
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type07Oceanic";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Jietai: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Jietai)";
		picture="\FP_UniformsAsia\UI\jietaiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Jietai";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Jietai: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Jietai, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\jietaiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Jietai";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Jietai: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Jietai, BDU)";
		picture="\FP_UniformsAsia\UI\jietaiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Jietai";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Jietai: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Jietai, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\jietaiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Jietai";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_I_GhillieSuit;
	class FP_GhillieSuit_Jietai: U_I_GhillieSuit
	{
		scope=2;
		displayName="Combat Fatigues (Jietai, Ghillie)";
		picture="\FP_UniformsAsia\UI\jietaiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Sniper_Jietai";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Jietai_Desert: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Jietai Desert)";
		picture="\FP_UniformsAsia\UI\jietaideserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Jietai_Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Jietai_Desert: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Jietai Desert, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\jietaideserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Jietai_Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Jietai_Desert: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Jietai Desert, BDU)";
		picture="\FP_UniformsAsia\UI\jietaideserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Jietai_Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Jietai_Desert: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Jietai Desert, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\jietaideserticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Jietai_Desert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Granite_B: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Granite B)";
		picture="\FP_UniformsAsia\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Granite_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Granite_B: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Granite B, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Granite_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Granite_B: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Granite B, BDU)";
		picture="\FP_UniformsAsia\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Granite_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Granite_B: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Granite B, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Granite_B";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_WAVEPAT: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (WAVEPAT)";
		picture="\FP_UniformsAsia\UI\wavepaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_WAVEPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_WAVEPAT: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (WAVEPAT, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\wavepaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_WAVEPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_WAVEPAT: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (WAVEPAT, BDU)";
		picture="\FP_UniformsAsia\UI\wavepaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_WAVEPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_WAVEPAT: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (WAVEPAT, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\wavepaticon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_WAVEPAT";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type87: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Type87)";
		picture="\FP_UniformsAsia\UI\type87icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type87";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_Type87: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (Type87, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\type87icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_Type87";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_Type87: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (Type87, BDU)";
		picture="\FP_UniformsAsia\UI\type87icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_Type87";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_Type87: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (Type87, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\type87icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_Type87";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KPA_Woodland: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (KPA Woodland)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KPA_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_KPA_Woodland: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (KPA Woodland, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_KPA_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_KPA_Woodland: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (KPA Woodland, BDU)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_KPA_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_KPA_Woodland: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (KPA Woodland, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_KPA_Woodland";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KPA_DigiWld: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (KPA Digital Woodland)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KPA_DigiWld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_KPA_DigiWld: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (KPA Digital Woodland, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_KPA_DigiWld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_KPA_DigiWld: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (KPA Digital Woodland, BDU)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_KPA_DigiWld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_KPA_DigiWld: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (KPA Digital Woodland, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\kpawoodlandicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_KPA_DigiWld";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_ROC_Digital: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (ROC Digital)";
		picture="\FP_UniformsAsia\UI\ddcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_ROC_Digital";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_02_ROC_Digital: U_I_CombatUniform_shortsleeve
	{
		scope=2;
		displayName="Combat Fatigues (ROC Digital, Rolled-Up)";
		picture="\FP_UniformsAsia\UI\ddcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_02_ROC_Digital";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_ROC_Digital: U_I_E_Uniform_01_F
	{
		scope=2;
		displayName="Combat Fatigues (ROC Digital, BDU)";
		picture="\FP_UniformsAsia\UI\ddcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_ROC_Digital";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BDU_02_ROC_Digital: U_I_E_Uniform_01_shortsleeve_F
	{
		scope=2;
		displayName="Combat Fatigues (ROC Digital, BDU, Rolled-up)";
		picture="\FP_UniformsAsia\UI\ddcuicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BDU_02_ROC_Digital";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_KPA_Brown: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="North Korean BDU";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KPA_Brown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KPA_Duckhunter: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="North Korean BDU (Duckhunter)";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KPA_Duckhunter";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class U_B_HeliPilotCoveralls;
	class FP_HeliPilotCoveralls_PLA: U_B_HeliPilotCoveralls
		{
		scope=2;
		displayName = "Heli Pilot Coveralls [PLA]";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Helipilot_PLA";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_PilotCoveralls;
	class FP_PilotCoveralls_PLA: U_O_PilotCoveralls
		{
		scope=2;
		displayName = "Pilot Coveralls [PLA]";
		author="FP Mod Team";
		side=0;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Fighter_Pilot_PLA_F";
			containerClass="Supply40";
			mass=40;
		};
	};	
	class FP_Uniform_INDC: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Indian)";
		picture="\FP_UniformsAsia\UI\INDIAicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_INDC";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_AZTURARID: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (AzTur Arid)";
		picture="\FP_UniformsAsia\UI\AZTURARIDicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_AZTURARID";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MECTiger: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (MEC Tiger)";
		picture="\FP_UniformsAsia\UI\mectigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MECTiger";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MECDigiDesert: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Recon Digi Desert)";
		picture="\FP_UniformsAsia\UI\mectigericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MECDigiDesert";
			containerClass="Supply40";
			mass=40;
		};
	};
	class H_HelmetIA;
	class FP_Helmet_AZTURARID: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Azeri Turkish Arid)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_helm_AZTURARID.paa"
		};
	};
	class FP_H_HelmetIA_ROK: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (Granite B)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_helm_Granite_B.paa"
		};
	};
	class FP_H_HelmetIA_ROKMC: H_HelmetIA
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Modular Helmet (WAVEPAT)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_helm_WAVEPAT.paa"
		};
	};	
	class rhs_6b27m_digi;
	class FP_Helmet_Type07Uni: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Universal)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};
	class rhs_6b27m_ess;
	class FP_Helmet_Type07UniESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Universal, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};
	class FP_Helmet_Type07Desert: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Desert)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};
	class FP_Helmet_Type07DesertESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Desert, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};
	class FP_Helmet_Type07Woodland: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07WoodlandHelmet.paa"
		};
	};
	class FP_Helmet_Type07WoodlandESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Woodland, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07WoodlandHelmet.paa"
		};
	};
	class FP_Helmet_Type07Oceanic: rhs_6b27m_digi
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_digi";
		scope=2;
		displayName="FP CH Helmet (Type 07 Oceanic)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07OceanicHelmet.paa"
		};
	};
	class FP_Helmet_Type07OceanicESS: rhs_6b27m_ess
	{
		author="FP Mod Team";
		_generalMacro="rhs_6b27m_ess";
		scope=2;
		displayName="FP CH Helmet (Type 07 Oceanic, Goggles)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07OceanicHelmet.paa"
		};
	};
	class rhs_fieldcap;
	class FP_fieldcap_PLA_Type07Uni: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Universal)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07UniversalHelmet.paa"
		};
	};	
	class FP_fieldcap_PLA_Type07Desert: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Desert)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07DesertHelmet.paa"
		};
	};
	class FP_fieldcap_PLA_Type07Woodland: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Woodland)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07WoodlandHelmet.paa"
		};
	};
	class FP_fieldcap_PLA_Type07Oceanic: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP CH Field Cap (Type 07 Oceanic)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Type07OceanicHelmet.paa"
		};
	};
	class FP_fieldcap_KPA_Woodland: rhs_fieldcap
	{
		author="FP Mod Team";
		_generalMacro="rhs_fieldcap";
		scope=2;
		displayName="FP KPA Field Cap (Woodland)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_6b27_KPA_co.paa"
		};
	};
	class rhsgref_helmet_pasgt_woodland;
	class rhsgref_helmet_pasgt_woodland_rhino;
	class FP_PASGT_Jietai: rhsgref_helmet_pasgt_woodland
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland";
		scope=2;
		displayName="FP PASGT (Jietai)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Jietai_PASGT.paa"
		};
	};
	class FP_PASGT_Jietai_Rhino: rhsgref_helmet_pasgt_woodland_rhino
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland_rhino";
		scope=2;
		displayName="FP PASGT (Jietai, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Jietai_PASGT.paa"
		};
	};
	class FP_PASGT_Jietai_Desert: rhsgref_helmet_pasgt_woodland
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland";
		scope=2;
		displayName="FP PASGT (Jietai Desert)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Jietai_Desert_PASGT.paa"
		};
	};
	class FP_PASGT_Jietai_Desert_Rhino: rhsgref_helmet_pasgt_woodland_rhino
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland_rhino";
		scope=2;
		displayName="FP PASGT (Jietai Desert, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_Jietai_Desert_PASGT.paa"
		};
	};
	class FP_PASGT_DigiWld: rhsgref_helmet_pasgt_woodland
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland";
		scope=2;
		displayName="FP PASGT (KPA Digital Woodland)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_DigiWld_PASGT.paa"
		};
	};
	class FP_PASGT_DigiWld_Rhino: rhsgref_helmet_pasgt_woodland_rhino
	{
		author="FP Mod Team";
		_generalMacro="rhsgref_helmet_pasgt_woodland_rhino";
		scope=2;
		displayName="FP PASGT (KPA Digital Woodland, Rhino)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsHeadgear\FP_DigiWld_PASGT.paa"
		};
	};
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class VestItem;
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base
    {
        class ItemInfo;
    };
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl
    {
        class ItemInfo;
    };
	class V_PlateCarrierIAGL_dgtl: V_PlateCarrierIA2_dgtl
    {
        class ItemInfo;
    };	
	class FP_V_PlateCarrierIA1_Type07Uni: V_PlateCarrierIA1_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA1_oli";
		scope = 2;
		displayName = "Type-15 Carrier Lite (Universal)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Uni.paa"
		};		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};	
	class FP_V_PlateCarrierIA2_Type07Uni: V_PlateCarrierIA2_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier Rig (Universal)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Uni.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};		
	};	
	class FP_V_PlateCarrierIAGL_Type07Uni: V_PlateCarrierIAGL_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier GL Rig (Universal)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Uni.paa", 
			"FP_UniformsAsia\SkinsCarrier\ga_carrier_gl_rig_Type07Uni.paa" 
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
		};		
	};
	class FP_V_PlateCarrierIA1_Type07Desert: V_PlateCarrierIA1_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA1_oli";
		scope = 2;
		displayName = "Type-15 Carrier Lite (Desert)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Desert.paa"
		};		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};	
	class FP_V_PlateCarrierIA2_Type07Desert: V_PlateCarrierIA2_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier Rig (Desert)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Desert.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};		
	};	
	class FP_V_PlateCarrierIAGL_Type07Desert: V_PlateCarrierIAGL_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier GL Rig (Desert)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Desert.paa", 
			"FP_UniformsAsia\SkinsCarrier\ga_carrier_gl_rig_Type07Desert.paa" 
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
		};		
	};
	class FP_V_PlateCarrierIA1_Type07Woodland: V_PlateCarrierIA1_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA1_oli";
		scope = 2;
		displayName = "Type-15 Carrier Lite (Woodland)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Woodland.paa"
		};		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};	
	class FP_V_PlateCarrierIA2_Type07Woodland: V_PlateCarrierIA2_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier Rig (Woodland)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Woodland.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};		
	};	
	class FP_V_PlateCarrierIAGL_Type07Woodland: V_PlateCarrierIAGL_dgtl
	{
		author = "FP Mod Team";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "Type-15 Carrier GL Rig (Woodland)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\ia_vest_Type07Woodland.paa", 
			"FP_UniformsAsia\SkinsCarrier\ga_carrier_gl_rig_Type07Woodland.paa" 
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
		};		
	};	
	class FP_V_PlateCarrierIA1_blk: V_PlateCarrierIA1_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrierIA1_oli";
		scope = 2;
		displayName = "GA Carrier Lite (Black)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\equip_ia_vest01_blk_co.paa"
		};		
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};
	};	
	class FP_V_PlateCarrierIA2_blk: V_PlateCarrierIA2_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrierIA2_oli";
		scope = 2;
		displayName = "GA Carrier Rig (Black)";
		picture="\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
		model="A3\Characters_F_Beta\INDEP\equip_ia_vest02";
		descriptionShort="$STR_A3_SP_AL_III";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\equip_ia_vest01_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo"
			};
		};		
	};	
	class FP_V_PlateCarrierIAGL_blk: V_PlateCarrierIAGL_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro="V_PlateCarrierIAGL_oli";
		scope = 2;
		displayName = "GA Carrier GL Rig (Black)";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		descriptionShort = "Explosive Resistant";
		hiddenSelections[] = 
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionstextures[] = 
		{
			"FP_UniformsAsia\SkinsCarrier\equip_ia_vest01_blk_co.paa",
			"FP_UniformsAsia\SkinsCarrier\ga_carrier_gl_rig_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[] = 
			{
				"camo1",
				"camo2"
			};
		};		
	};	
	class V_TacVest_khk;
	class FP_V_KPA_TacVest_DigiWld: V_TacVest_khk
	{
		displayname = "Tactical Vest (Digital Woodland)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsCarrier\vests_kpa_DW_co.paa"};
	};
	class IBA_blank_m81;
	class IBA_rifle_m81;
	class IBA_alice_m81;
	class IBA_MG_m81;
	class IBA_alice_Jietai: IBA_alice_m81
	{
		displayName="IBA Jietai LC-2 Web gear";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_blank_Jietai: IBA_blank_m81
	{
		displayName="IBA Jietai Blank";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_rifle_Jietai: IBA_rifle_m81
	{
		displayName="IBA Jietai Rifleman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_MG_Jietai: IBA_MG_m81
	{
		displayName="IBA Jietai Machinegunner";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};	
	class IBA_alice_Jietai_Desert: IBA_alice_m81
	{
		displayName="IBA Jietai Desert LC-2 Web gear";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_blank_Jietai_Desert: IBA_blank_m81
	{
		displayName="IBA Jietai Desert Blank";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_rifle_Jietai_Desert: IBA_rifle_m81
	{
		displayName="IBA Jietai Desert Rifleman";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class IBA_MG_Jietai_Desert: IBA_MG_m81
	{
		displayName="IBA Jietai Desert Machinegunner";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA_JSDF_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsAsia\SkinsCarrier\IBA.rvmat"
		};
	};
	class V_CarrierRigKBT_01_Olive_F;
	class V_CarrierRigKBT_01_light_Olive_F;
	class V_CarrierRigKBT_01_heavy_Olive_F;
	class FP_CSL_V_CarrierRigKBT_GraniteB_F: V_CarrierRigKBT_01_Olive_F
	{
		author = "CSLeader";
		_generalMacro = "V_CarrierRigKBT_01_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Vest (Granite B)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\CarrierRigKBT_01_ROK_CO.paa"
		};
	};
	class FP_CSL_V_CarrierRigKBT_light_GraniteB_F: V_CarrierRigKBT_01_light_Olive_F
	{
		author = "CSLeader";
		_generalMacro = "V_CarrierRigKBT_01_light_Olive_F";
		scope = 2;
		displayName = "Modular Carrier Lite (Granite B)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\CarrierRigKBT_01_ROK_CO.paa"
		};
	};
	class FP_CSL_V_CarrierRigKBT_heavy_GraniteB_F: V_CarrierRigKBT_01_heavy_Olive_F
	{
		author = "Gordon Weedman";
		_generalMacro = "V_CarrierRigKBT_01_heavy_Olive_F";
		scope = 2;
		displayName = "Modular Carrier GL Rig (Granite B)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsCarrier\CarrierRigKBT_01_ROK_CO.paa"
		};
	};	
};