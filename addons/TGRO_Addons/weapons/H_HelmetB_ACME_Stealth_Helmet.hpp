class H_HelmetB_ACME_Stealth_Helmet: H_HelmetB
{   
    author="ajeless";
    _generalMacro="H_HelmetO_ViperSP_hex_F";
    scope=2;
    displayName="ACME Stealth Helmet";
    picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_H_HelmetB_TI_tna_F_ca.paa";
	model="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
    DLC="Expansion";
    descriptionShort="ACME Stealth Helmet";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Characters_F_Exp\BLUFOR\Data\H_HelmetB_TI_tna_F_co.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "\A3\Characters_F_Exp\BLUFOR\Data\H_HelmetB_TI_tna_F.rvmat"
    };
    class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
			hiddenSelections[]=
			{
				"camo"
			};
			modelSides[]={0,3};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=20;
                    explosionShielding=30;
					passThrough=0.1;
				};
				class Face
				{
					hitpointName="HitFace";
					armor=20;
                    explosionShielding=30;
					passThrough=0.1;
				};
			};
		};
    subItems[]=
    {
        "Integrated_NVG_TI_1_F"
    };
};