class CfgPatches
{
     class TGRO_Addons
     {
         name = "Toogro's Addons";
         author = "ajeless";
         requiredAddons[] = {
             "A3_Functions_F"
         };
         units[] = {
            "TGRO_ModuleRandomArtillery",
            "TGRO_ModuleRandomSmokeAndFlares",
            "TGRO_ModuleRandomCarnage"
         };
         weapons[] = {};
     };

    class TGRO_Weapons
	{
		addonRootClass="A3_Weapons_F_Exp";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
            "MMG_ACME_ZK21",
            "arifle_ACME_HAR22",
			"arifle_ACME_MXC_V_Sand_F",
			"arifle_ACME_MXC_V_Khaki_F",
			"arifle_ACME_MXC_V_Black_F",
			"arifle_ACME_MX_V_Sand_F",
			"arifle_ACME_MX_V_Khaki_F",
			"arifle_ACME_MX_V_Black_F",
			"arifle_ACME_MX_SW_V_Sand_F",
			"arifle_ACME_MX_SW_V_Khaki_F",
			"arifle_ACME_MX_SW_V_Black_F",
			"arifle_ACME_MXM_V_Sand_F",
			"arifle_ACME_MXM_V_Khaki_F",
			"arifle_ACME_MXM_V_Black_F",
            "H_Balaclava_Armored",
            "H_HelmetB_ACME_Stealth_Helmet"
		};
	};

    class Deserted_VR
	{
		author="EO";
		name="";
		url="";
		requiredAddons[]=
		{
			"A3_Data_F_Bootcamp",
			"A3_Data_F",
			"A3_Map_Data"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
	};
};