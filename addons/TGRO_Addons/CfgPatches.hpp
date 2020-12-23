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

    class TGRO_Rifles_AK12
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
			"arifle_AK12_M"
		};
	};
};