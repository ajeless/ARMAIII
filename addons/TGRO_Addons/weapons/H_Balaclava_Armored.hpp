class H_Balaclava_Armored: H_HelmetB
{   
    author="ajeless";
    _generalMacro="H_HelmetO_ViperSP_hex_F";
    scope=2;
    displayName="ACME Armored Balaclava";
    model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
    picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
    DLC="Expansion";
    descriptionShort="ACME Armored Balaclava";
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
                armor=4;
                passThrough=.5;
                explosionShielding=4;
            };
            class Face
            {
                hitpointName="HitFace";
                armor=4;
                passThrough=.5;
                explosionShielding=1;
            };
        };
    };
};