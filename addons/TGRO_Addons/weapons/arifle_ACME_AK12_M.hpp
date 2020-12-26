class arifle_ACME_AK12_M: arifle_ACME_base_F
{
    author="$STR_A3_Bohemia_Interactive";
    _generalMacro="arifle_ACME_AK12_M";
    baseWeapon="arifle_ACME_AK12_M";
    scope=2;
    displayName="ACME AK-12 M (Black, 7.62x39)";
    picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
        "\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
    };
    magazineReloadSwitchPhase=0.47999999;
    htMin=7;
    htMax=880;
    inertia=0.3;
    aimTransitionSpeed=1.6;
    dexterity=2.8;
    initSpeed=1500;
    recoil="recoil_ACME_AK12_M";
    maxZeroing=2000;
};