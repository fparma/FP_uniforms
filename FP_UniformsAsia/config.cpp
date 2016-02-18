class CfgPatches
{
	class FP_UniformsAsia
	{
		units[]={};
		weapons[]={};
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
	class FP_Rifleman_Auscam: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP AU Auscam";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Auscam";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Auscam.paa"
		};
	};
	class FP_Rifleman_Jeitei: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP JP Jeitei";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_Jeitei.paa"
		};
	};
	class FP_Rifleman_GraniteB: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP SK Granite B";
		nakedUniform="U_BasicBody";
		uniformClass="FP_GraniteB";
                author="FP Mod Team";
		side = 1;
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_GraniteB.paa"
		};
	};
	class FP_Rifleman_Type07Universal: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP CH Type 07 Universal";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Jeitei";
        author="FP Mod Team";
		side = 0;
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
	class FP_Rifleman_MEC01: I_Soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="BF2 MEC";
		nakedUniform="U_BasicBody";
		uniformClass="FP_BF2_MEC01";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_MEC_01.paa"
		};
	};
	class FP_Rifleman_MEC02: I_Soldier_F
	{
		_generalMacro="I_Soldier_F";
		scope=1;
		displayName="BF2 MEC (Jacket)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_BF2_MEC02";
                author="CSLeader";
		hiddenSelections[]=
		{
			"Camo",
                        "insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsAsia\SkinsUniform\FP_MEC_02.paa"
		};
	};	
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class FP_Uniform_Auscam: U_I_CombatUniform
	{
		scope=2;
		displayName="FP AU Auscam";
		picture="\FP_UniformsAsia\UI\auscamicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Auscam";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Jeitei: U_I_CombatUniform
	{
		scope=2;
		displayName="FP JP Jeitei";
		picture="\FP_UniformsAsia\UI\jeiteiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Jeitei";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_GraniteB: U_I_CombatUniform
	{
		scope=2;
		displayName="FP SK Granite B";
		picture="\FP_UniformsAsia\UI\granitebicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_GraniteB";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Type07Universal: U_I_CombatUniform
	{
		scope=2;
		displayName="FP CH Type 07 Universal";
		picture="\FP_UniformsAsia\UI\type07universalicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="FP Mod Team";
		side = 1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Type07Universal";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MEC01: U_I_CombatUniform	
	{
		scope=1;
		displayName="FP BF2 MEC";
		picture="\FP_UniformsEverywhereElse\UI\bf2mecicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MEC01";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_MEC01: U_I_CombatUniform
	{
		scope=1;
		displayName="FP BF2 MEC (Jacket)";
		picture="\FP_UniformsEverywhereElse\UI\bf2mecicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
                author="CSLeader";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_MEC02";
			containerClass="Supply40";
			mass=40;
		};
	};	
    class H_HelmetIA;
	class FP_Helmet_Auscam: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP AU MICH (Auscam)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsHeadgear\FP_AuscamHelmet.paa"};
	};
	class FP_Helmet_Jeitei: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP JP MICH (Jeitei)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsHeadgear\FP_JeiteiHelmet.paa"};
	};
	class FP_Helmet_GraniteB: H_HelmetIA
	{
		author = "FP Mod Team";
		_generalMacro = "H_HelmetIA";
		scope = 2;
		displayName = "FP SK MICH (Granite B)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsHeadgear\FP_GraniteBHelmet.paa"};
	};
    class FP_Helmet_PASGT_HelmetCoverM81;
	class FP_Helmet_Type07Uni: FP_Helmet_PASGT_HelmetCoverM81
	{
		author = "FP Mod Team";
		_generalMacro = "FP_Helmet_PASGT_HelmetCoverM81";
		scope = 2;
		displayName = "FP CH Helmet (Type 07 Universal)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsHeadgear\FP_HelmetType07.paa"};
	};
    class H_Booniehat_mcamo;
	class FP_Boonie_Auscam: H_Booniehat_mcamo
	{
		author = "FP Mod Team";
		_generalMacro = "H_Booniehat_mcamo";
		scope = 2;
		displayName = "FP AU Boonie (Auscam)";
		hiddenSelectionsTextures[] = {"FP_UniformsAsia\SkinsHeadgear\FP_AuscamBoonie.paa"};
	};			
};