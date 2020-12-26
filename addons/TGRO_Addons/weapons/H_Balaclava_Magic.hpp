class H_Balaclava_Magic: H_HelmetB
{
    
    author="$STR_A3_Bohemia_Interactive";
    _generalMacro="H_HelmetO_ViperSP_hex_F";
    scope=2;
    displayName="ACME Magic Balaclava";
    // picture="\A3\characters_F_Gamma\Guerrilla\Data\ui\icon_H_Shemag_olive_ca.paa";
    // model="\A3\Characters_F_Gamma\Guerrilla\headgear_shemagmask";
    model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
    picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
    DLC="Expansion";
    descriptionShort="ACME Magic Shemag";
    hiddenSelections[]=
    {
        "camo"
    };
    hiddenSelectionsTextures[]=
    {
        "\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa"
    };
    class ItemInfo: HeadgearItem
    {
        mass=6;
        uniformModel="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
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
                armor=1000000;
                passThrough=.1;
                explosionShielding=1000000;
                armorStructural=10000;
            };
            class Face
            {
                hitpointName="HitFace";
                armor=1000000;
                passThrough=.1;
                explosionShielding=1000000;
                armorStructural=10000;
            };
        };
    };
    subItems[]=
    {
        "Integrated_NVG_TI_1_F"
    };
};