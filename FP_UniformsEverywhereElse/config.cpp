class CfgPatches
{
	class FP_UniformsEverywhereElse
	{
		units[]=
		{
			"FP_Rifleman_KyrelianFBSplinter",
			"FP_Rifleman_OD",
			"FP_Rifleman_Khaki",
			"FP_Rifleman_RangerGreen",
			"FP_Rifleman_KhakiBrown",
			"FP_Rifleman_OliveBrown",
			"FP_Rifleman_JTS",
			"FP_Recon_JTS",
			"FP_Rifleman_BlkKhk",
			"FP_Rifleman_grn",
			"FP_Rifleman_gry",
			"FP_Rifleman_khk",
			"FP_Rifleman_KyrelianFBSplinterRolled",
			"B_Carryall_Inv"
		};
		weapons[]=
		{
			"FP_Uniform_KyrelianFBSplinter",
			"FP_Uniform_KyrelianFBSplinterRolled",
			"FP_Uniform_OD",
			"FP_Uniform_Khaki",
			"FP_Uniform_RangerGreen",
			"FP_Uniform_OliveBrown",
			"FP_Uniform_JTS",
			"FP_Uniform_JTS_recon",
			"FP_Uniform_BlkKhk",
			"FP_Uniform_grn",
			"FP_Uniform_GRY",
			"FP_Uniform_KHK",
			"FP_Helmet_UNPASGT",
			"H_MilCap_blk",
			"FP_BluHelmet_KyrelianSplinter",
			"FP_BluHelmet_KyrelianBlack",
			"FP_BluHelmetECH_KyrelianSplinter",
			"FP_BluHelmetLight_KyrelianSplinter",
			"LOP_H_PASGTHelmet_cover_BLK",
			"FP_Beret_Purple",
			"FP_Beret_Brown",
			"FP_Beret_Blue",
			"FP_Beret_Green",
			"FP_Beret_Grey",
			"FP_Beret_Maroon",
			"FP_Beret_Pink",
			"FP_Beret_Tan",
			"FP_Carrier_CoyotePatchless",
			"FP_Carrier_DarkCoyotePatchless",
			"FP_Carrier_KhakiPatchless",
			"FP_Carrier_Kyrelian",
			"FP_Carrier_KyrelianBlack",
			"FP_Carrier_KyrelianHeavyBlack",
			"FP_Carrier_KyrelianHeavyGreen",
			"FP_Vest_HarnessGreen"
		};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F_BLUFOR"
		};
	};
};
class CfgVehicles
{
	class I_soldier_F;
	class FP_Rifleman_KyrelianFBSplinter: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="KY SPM-93";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianFBSplinter";
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
			"FP_UniformsEverywhereElse\SkinsUniform\Kyrelian_SPM_93.paa"
		};
	};
	class FP_Rifleman_OD: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Drab";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OD";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_OD.paa"
		};
	};
	class FP_Rifleman_Khaki: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki";
		nakedUniform="U_BasicBody";
		uniformClass="FP_Khaki";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_Khaki400.paa"
		};
	};
	class FP_Rifleman_RangerGreen: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Ranger Green";
		nakedUniform="U_BasicBody";
		uniformClass="FP_RangerGreen";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_RangerGreen.paa"
		};
	};
	class FP_Rifleman_KhakiBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Khaki Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KhakiBrown";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_KhakiBrown.paa"
		};
	};
	class FP_Rifleman_OliveBrown: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="FP Olive Brown";
		nakedUniform="U_BasicBody";
		uniformClass="FP_OliveBrown";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_OliveBrown.paa"
		};
	};
	class I_Soldier_02_F;
	class FP_Rifleman_JTS: I_soldier_F
	{
		_generalMacro="B_Soldier_F";
		scope=1;
		displayName="MGS Jungle Tiger Stripe";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_JTS";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeJungle.paa"
		};
	};
	class FP_Recon_JTS: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="MGS Jungle Tiger Stripe (Sleeves)";
		nakedUniform="U_BasicBody";
		uniformClass="FP_MGS_JTS_recon";
		author="CSLeader";
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\MGS_TigerStripeJungle.paa"
		};
	};
	class FP_Rifleman_BlkKhk: I_soldier_F
	{
		scope=1;
		displayName="FP Black Khaki";
		uniformClass="FP_Uniform_BlkKhk";
		author="FP Mod Team";
		side=2;
		scopeCurator=0;
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\FP_BlkKhk.paa"
		};
	};
	class O_officer_F;
	class FP_Rifleman_grn: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Green (BDU)";
		uniformClass="FP_Uniform_grn";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_grn.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_gry: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Grey (BDU)";
		uniformClass="FP_Uniform_gry";
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
			"FP_UniformsEverywhereElse\SkinsUniform\officer_gry.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_khk: O_officer_F
	{
		_generalMacro="O_officer_F";
		scope=1;
		displayName="FP Khaki (BDU)";
		uniformClass="FP_Uniform_khk";
		author="FP Mod Team";
		side=1;
		scopeCurator=0;
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\officer_khk.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"FP_UniformsEverywhereElse\Misc\officer.rvmat"
		};
	};
	class FP_Rifleman_KyrelianFBSplinterRolled: I_Soldier_02_F
	{
		_generalMacro="I_Soldier_02_F";
		scope=1;
		displayName="KY SPM-93";
		nakedUniform="U_BasicBody";
		uniformClass="FP_KyrelianFBSplinter";
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
			"FP_UniformsEverywhereElse\SkinsUniform\Kyrelian_SPM_93.paa"
		};
	};
	class B_Carryall_Base;
	class B_Carryall_Inv: B_Carryall_Base
	{
		armor=0;
		author="FP Mod Team";
		displayName="FP Carryall Backpack (Invisible)";
		hiddenSelectionsTextures[]=
		{
			""
		};
		model="\A3\Structures_F\Mil\Helipads\HelipadEmpty_F.p3d";
		picture="";
		scope=2;
	};
    class B_Kitbag_Base;
    class B_Kitbag_rgr: B_Kitbag_Base
    {
        class ItemInfo;
    };
    class B_Kitbag_digi: B_Kitbag_rgr
    {
        displayName="Kitbag (Digi)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_fast_digi_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
 
    class B_Kitbag_blk: B_Kitbag_rgr
    {
        displayName="Kitbag (Black)";
         author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_fast_blk_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
    class B_Carryall_oli: B_Carryall_Base
    {
        class ItemInfo;
    };
    class B_Carryall_blk: B_Carryall_oli
    {
        displayName="Carryall Backpack (Black)";
         author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Weapons_F\Ammoboxes\Bags\Data\backpack_tortila_blk_co.paa"
        };
        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"Camo"};
        };
    };
};
class cfgWeapons
{
	class U_I_CombatUniform;
	class UniformItem;
	class ItemInfo;
	class ItemVest;
	class FP_Uniform_KyrelianFBSplinter: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Kyrelian SPM-93)";
		picture="\FP_UniformsEverywhereElse\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team (Tomoe)";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianFBSplinter";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KyrelianFBSplinterRolled: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Kyrelian SPM-93/Rolled)";
		picture="\FP_UniformsEverywhereElse\UI\kyreliansplintericon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team (Tomoe)";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_KyrelianFBSplinterRolled";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OD: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (OD)";
		picture="\FP_UniformsEverywhereElse\UI\olivedrabicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OD";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_Khaki: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Khaki)";
		picture="\FP_UniformsEverywhereElse\UI\khakiicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_Khaki";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_RangerGreen: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Ranger Green)";
		picture="\FP_UniformsEverywhereElse\UI\rgicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_RangerGreen";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_OliveBrown: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Olive Brown)";
		picture="\FP_UniformsEverywhereElse\UI\obicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_OliveBrown";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_JTS: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Jungle Tiger Stripe)";
		picture="\FP_UniformsEverywhereElse\UI\mgs5jungletsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_JTS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_JTS_recon: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Jungle Tiger Stripe, Sleeves)";
		picture="\FP_UniformsEverywhereElse\UI\mgs5jungletsicon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Recon_JTS";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_BlkKhk: U_I_CombatUniform
	{
		scope=2;
		displayName="Combat Fatigues (Black/Khaki)";
		picture="\FP_UniformsEverywhereElse\UI\BlkKhkIcon.paa";
		author="FP Mod Team";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_BlkKhk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class U_O_OfficerUniform_ocamo;
	class FP_Uniform_grn: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Green/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_grn_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_grn";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_GRY: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Grey/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_gry_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=2;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_gry";
			containerClass="Supply40";
			mass=40;
		};
	};
	class FP_Uniform_KHK: U_O_OfficerUniform_ocamo
	{
		scope=2;
		displayName="Combat Fatigues(Khaki/BDU)";
		picture="\FP_UniformsEverywhereElse\UI\u_khk_icon.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		author="FP Mod Team";
		side=1;
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="FP_Rifleman_khk";
			containerClass="Supply40";
			mass=40;
		};
	};
	class H_MilCap_gry;
	class H_MilCap_blk: H_MilCap_gry
	{
		author="Bohemia Interactive";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Military Cap [Black]";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f_epb\Common\Data\cappatrol_blk_co.paa"
		};
	};
	class H_HelmetB;
	class FP_BluHelmet_KyrelianSplinter: H_HelmetB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class FP_BluHelmet_KyrelianBlack: H_HelmetB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Combat Helmet (Kyrelian)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_NORM.paa"
		};
	};
	class H_HelmetSpecB;
	class FP_BluHelmetECH_KyrelianSplinter: H_HelmetSpecB
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Enhanced Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class H_HelmetB_light;
	class FP_BluHelmetLight_KyrelianSplinter: H_HelmetB_light
	{
		author="FP Mod Team";
		_generalMacro="H_HelmetIA";
		scope=2;
		displayName="Light Combat Helmet (Kyrelian Splinter)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\KY_Helm_SPM.paa"
		};
	};
	class H_Beret_blk;
	class FP_Beret_Purple: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Purple)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretPurple.paa"
		};
	};
	class FP_Beret_Brown: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Brown)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretBrown.paa"
		};
	};
	class FP_Beret_Blue: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Blue)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretBlue.paa"
		};
	};
	class FP_Beret_Green: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Green)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretGreen.paa"
		};
	};
	class FP_Beret_Grey: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Grey)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretGrey.paa"
		};
	};
	class FP_Beret_Maroon: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Maroon)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretMaroon.paa"
		};
	};
	class FP_Beret_Pink: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Pink)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretPink.paa"
		};
	};
	class FP_Beret_Tan: H_Beret_blk
	{
		author="FP Mod Team";
		_generalMacro="H_Beret_blk";
		scope=2;
		displayName="Beret (Tan)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsHeadgear\FP_BeretTan.paa"
		};
	};
    class H_Beret_Colonel;
    class H_Beret_Colonel_Eagle: H_Beret_Colonel
    {
        displayName="Beret [NATO] (Eagle)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "A3\Characters_F_EPC\BLUFOR\Data\headgear_beret02_colonel_eagle_co.paa"
        };
    };
    class H_Cap_oli;
    class H_Cap_sero: H_Cap_oli
    {
        displayName="Cap (Sero)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\capb_sero_co.paa"
        };
    };
    class H_MilCap_pattern: H_MilCap_gry
    {
        displayName="Military Cap (Pattern)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check1_co.paa"
        };
    };
   
    class H_MilCap_plaid: H_MilCap_gry
    {
        displayName="Military Cap (Plaid)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check2_co.paa"
        };
    };
   
    class H_MilCap_checker: H_MilCap_gry
    {
        displayName="Military Cap (Checker)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_check3_co.paa"
        };
    };
   
    class H_MilCap_tan: H_MilCap_gry
    {
        displayName="Military Cap (Tan)";
        author="Bohemia Interactive";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\Characters_F\Common\Data\cappatrol_tan_co.paa"
        };
    };
 
    class H_HelmetO_ocamo;
    class H_HelmetO_blk: H_HelmetO_ocamo
    {
        displayName="Protector Helmet (Black)";
        author="Bohemia Interactive";
        picture="\A3\Characters_F\data\ui\icon_H_HelmetO_spec_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\characters_f\OPFOR\data\tech_rus_CO.paa"
        };
    };
 
    class H_HelmetLeaderO_ocamo;
    class H_HelmetLeaderO_blk: H_HelmetLeaderO_ocamo
    {
        displayName="Defender Helmet (Black)";
        author="Bohemia Interactive";
        picture="\A3\Characters_F\data\ui\icon_H_HelmetO_spec_CA.paa";
        hiddenSelections[]=
        {
            "Camo"
        };
        hiddenSelectionsTextures[]=
        {
            "\A3\characters_f\OPFOR\data\tech_rus_CO.paa"
        };
    };
	class Vest_NoCamo_Base;
	class V_PlateCarrier1_rgr: Vest_NoCamo_Base
	{
		class ItemInfo;
	};
	class VestItem;
	class FP_Carrier_CoyotePatchless: V_PlateCarrier1_rgr
	{
		scope=2;
		author="BIS & FP Mod Team";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Coyote Brown, Patchless)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\FP_PC_CoyotePatchless"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class FP_Carrier_DarkCoyotePatchless: V_PlateCarrier1_rgr
	{
		scope=2;
		author="BIS & FP Mod Team";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Dark Coyote, Patchless)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\vests_cbr_co.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class FP_Carrier_KhakiPatchless: V_PlateCarrier1_rgr
	{
		scope=2;
		author="BIS & FP Mod Team";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Khaki, Patchless)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\vests_khk_co.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class FP_Carrier_Kyrelian: V_PlateCarrier1_rgr
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Kyrelian)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\KY_Vest_GRN.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class FP_Carrier_KyrelianBlack: V_PlateCarrier1_rgr
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		picture="\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		displayName="Carrier Lite (Kyrelian/Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\FP_KyrelianBlackPC.paa"
		};
		class ItemInfo: VestItem
		{
			hiddenSelections[]=
			{
				"camo"
			};
		};
	};
	class V_PlateCarrierSpec_blk;
	class FP_Carrier_KyrelianHeavyBlack: V_PlateCarrierSpec_blk
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		displayName="Carrier Special Rig (Kyrelian/Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\blk_hvy.paa"
		};
	};
	class FP_Carrier_KyrelianHeavyGreen: V_PlateCarrierSpec_blk
	{
		scope=2;
		author="FP Mod Team (Tomoe)";
		displayName="Carrier Special Rig (Kyrelian/Ranger Green)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsCarrier\grn_hvy.paa"
		};
	};
	class V_HarnessO_gry;
	class FP_Vest_HarnessGreen: V_HarnessO_gry
	{
		scope=2;
		displayName="M1956 Webbing";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsUniform\clothing_grncamo_co.paa",
			"FP_UniformsEverywhereElse\SkinsUniform\tech_grncamo_co.paa"
		};
		picture="\FP_UniformsEverywhereElse\UI\icon_V_HarnessOU_grn_CA.paa";
		author="FP Mod Team";
	};
};
class cfgGlasses
{
	class G_Balaclava_blk;
	class FP_G_Balaclava_wht: G_Balaclava_blk
	{
		author="FP Mod Team";
		displayName="Balaclava (White)";
		hiddenSelectionsTextures[]=
		{
			"FP_UniformsEverywhereElse\SkinsGlasses\balaclava_wht.paa"
		};
		picture="FP_UniformsEverywhereElse\ui\balaclava_wht_icon.paa";
	};
};
