class MMG_ACME_base_F: Rifle_Long_Base_F
{
    author="ajeless";
    _generalMacro="MMG_ACME_base_F";
    baseWeapon="MMG_ACME_base_F";
    scope=0;
    model="\A3\Weapons_F_Mark\Machineguns\MMG_02\MMG_02_F.p3d";
    displayName="";
    descriptionShort="ACME ZK base configuration";
    handAnim[]=
    {
        "OFP2_ManSkeleton",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\Anim\mmg_02.rtm"
    };
    hiddenSelections[]=
    {
        "camo1",
        "camo2",
        "camo3"
    };
    hiddenSelectionsTextures[]=
    {
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_camo_CO.paa",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_camo_CO.paa",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_camo_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_camo.rvmat",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_camo.rvmat",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_camo.rvmat"
    };
    magazines[]=
    {
        "135Rnd_85x64_Belt"
    };
    magazineWell[]=
    {
        "ACME_85x64_Belt"
    };
    reloadAction="GestureReloadMMG02";
    recoil="recoil_ACME_ZK21";
    maxZeroing=2000;
    inertia=1.05;
    aimTransitionSpeed=0.7;
    magazineReloadSwitchPhase=0.42000001;
    cursor="mg";
    class GunParticles: GunParticles
    {
        class AmmoBeltEject
        {
            effectName="MachineGunEject1";
            positionName="ejectstart";
            directionName="ejectend";
        };
    };
    class Library
    {
        libTextDesc="ACME ZK base configuration";
    };
    class WeaponSlotsInfo: WeaponSlotsInfo
    {
        mass=310;
        class MuzzleSlot: MuzzleSlot
        {
            linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
            compatibleItems[]=
            {
                "muzzle_snds_338_black",
                "muzzle_snds_338_green",
                "muzzle_snds_338_sand"
            };
            iconPosition[]={0.059999999,0.41999999};
            iconScale=0.15000001;
        };
        class CowsSlot: CowsSlot
        {
            iconPosition[]={0.62,0.31999999};
            iconScale=0.15000001;
        };
        class PointerSlot: PointerSlot
        {
            iconPosition[]={0.38,0.41999999};
            iconScale=0.2;
        };
        class UnderBarrelSlot: UnderBarrelSlot
        {
            iconPosition[]={0.34999999,0.85000002};
            iconScale=0.30000001;
        };
    };
    class LinkedItems
    {
        class LinkedItemsUnder
        {
            slot="UnderBarrelSlot";
            item="bipod_01_F_mtp";
        };
    };
    bullet1[]=
    {
        "A3\sounds_f\weapons\shells\7_62\metal_762_01",
        0.50118721,
        1,
        15
    };
    bullet2[]=
    {
        "A3\sounds_f\weapons\shells\7_62\metal_762_02",
        0.50118721,
        1,
        15
    };
    bullet3[]=
    {
        "A3\sounds_f\weapons\shells\7_62\metal_762_03",
        0.50118721,
        1,
        15
    };
    bullet4[]=
    {
        "A3\sounds_f\weapons\shells\7_62\metal_762_04",
        0.50118721,
        1,
        15
    };
    bullet5[]=
    {
        "A3\sounds_f\weapons\shells\7_62\dirt_762_01",
        0.39810717,
        1,
        15
    };
    bullet6[]=
    {
        "A3\sounds_f\weapons\shells\7_62\dirt_762_02",
        0.39810717,
        1,
        15
    };
    bullet7[]=
    {
        "A3\sounds_f\weapons\shells\7_62\dirt_762_03",
        0.39810717,
        1,
        15
    };
    bullet8[]=
    {
        "A3\sounds_f\weapons\shells\7_62\dirt_762_04",
        0.39810717,
        1,
        15
    };
    bullet9[]=
    {
        "A3\sounds_f\weapons\shells\7_62\grass_762_01",
        0.25118864,
        1,
        15
    };
    bullet10[]=
    {
        "A3\sounds_f\weapons\shells\7_62\grass_762_02",
        0.25118864,
        1,
        15
    };
    bullet11[]=
    {
        "A3\sounds_f\weapons\shells\7_62\grass_762_03",
        0.25118864,
        1,
        15
    };
    bullet12[]=
    {
        "A3\sounds_f\weapons\shells\7_62\grass_762_04",
        0.25118864,
        1,
        15
    };
    soundBullet[]=
    {
        "bullet1",
        0.082999997,
        "bullet2",
        0.082999997,
        "bullet3",
        0.082999997,
        "bullet4",
        0.082999997,
        "bullet5",
        0.082999997,
        "bullet6",
        0.082999997,
        "bullet7",
        0.082999997,
        "bullet8",
        0.082999997,
        "bullet9",
        0.082999997,
        "bullet10",
        0.082999997,
        "bullet11",
        0.082999997,
        "bullet12",
        0.082999997
    };
    drySound[]=
    {
        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Dry",
        0.17782794,
        1,
        10
    };
    reloadMagazineSound[]=
    {
        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_reload",
        0.50118721,
        1,
        10
    };
    modes[]=
    {
        "Burst",
        "Burst_medium",
        "Full_auto",
        "close",
        "short",
        "medium",
        "far_optic1",
        "far_optic2"
    };
    class Full_auto: Mode_FullAuto
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            closure1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",
                0.44668359,
                1,
                10
            };
            closure2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",
                0.44668359,
                1,
                10
            };
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class StandardSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",
                1.2589254,
                1,
                1200
            };
            begin2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",
                1.2589254,
                1,
                1200
            };
            begin3[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",
                1.2589254,
                1,
                1200
            };
            soundBegin[]=
            {
                "begin1",
                0.34,
                "begin2",
                0.33000001,
                "begin3",
                0.33000001
            };
            class SoundTails
            {
                class TailInterior
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="interior";
                };
                class TailForest
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*forest";
                };
                class TailHouses
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*houses";
                };
                class TailMeadows
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                };
                class TailTrees
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*trees";
                };
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_01",
                1,
                1,
                300
            };
            begin2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_02",
                1,
                1,
                300
            };
            begin3[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_03",
                1,
                1,
                300
            };
            soundBegin[]=
            {
                "begin1",
                0.33000001,
                "begin2",
                0.33000001,
                "begin3",
                0.34
            };
            class SoundTails
            {
                class TailInterior
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_interior",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="interior";
                };
                class TailForest
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_forest",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*forest";
                };
                class TailHouses
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_houses",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*houses";
                };
                class TailMeadows
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_meadows",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                };
                class TailTrees
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_trees",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*trees";
                };
            };
        };
        reloadTime=0.115;
        dispersion=0.00073000003;
        // soundContinuous=0;
        // soundBurst=0;
    };
    class Burst: Mode_Burst
    {
        sounds[]=
        {
            "StandardSound",
            "SilencedSound"
        };
        class BaseSoundModeType
        {
            closure1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_01",
                0.44668359,
                1,
                10
            };
            closure2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_Closure_02",
                0.44668359,
                1,
                10
            };
            soundClosure[]=
            {
                "closure1",
                0.5,
                "closure2",
                0.5
            };
        };
        class StandardSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_01",
                1.2589254,
                1,
                1200
            };
            begin2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_02",
                1.2589254,
                1,
                1200
            };
            begin3[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_short_03",
                1.2589254,
                1,
                1200
            };
            soundBegin[]=
            {
                "begin1",
                0.34,
                "begin2",
                0.33000001,
                "begin3",
                0.33000001
            };
            class SoundTails
            {
                class TailInterior
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_interior",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="interior";
                };
                class TailForest
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_forest",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*forest";
                };
                class TailHouses
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_houses",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*houses";
                };
                class TailMeadows
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_meadows",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                };
                class TailTrees
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG_02_tail_trees",
                        1,
                        1,
                        1200
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*trees";
                };
            };
        };
        class SilencedSound: BaseSoundModeType
        {
            begin1[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_01",
                1,
                1,
                300
            };
            begin2[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_02",
                1,
                1,
                300
            };
            begin3[]=
            {
                "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_short_03",
                1,
                1,
                300
            };
            soundBegin[]=
            {
                "begin1",
                0.33000001,
                "begin2",
                0.33000001,
                "begin3",
                0.34
            };
            class SoundTails
            {
                class TailInterior
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_interior",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="interior";
                };
                class TailForest
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_forest",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*forest";
                };
                class TailHouses
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_houses",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*houses";
                };
                class TailMeadows
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_meadows",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*(meadows/2 max sea/2)";
                };
                class TailTrees
                {
                    sound[]=
                    {
                        "A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\silencer_MMG_02_tail_trees",
                        1,
                        1,
                        300
                    };
                    frequency=1;
                    volume="(1-interior/1.4)*trees";
                };
            };
        };
        textureType="dual";
        burst=3;
        reloadTime=0.08;
        dispersion=0.00086999999;
        minRange=2;
        minRangeProbab=0.89999998;
        midRange=50;
        midRangeProbab=0.69999999;
        maxRange=100;
        maxRangeProbab=0.050000001;
    };
    class Burst_medium: Burst
    {
        showToPlayer=0;
        minRange=2;
        minRangeProbab=0.5;
        midRange=75;
        midRangeProbab=0.69999999;
        maxRange=100;
        maxRangeProbab=0.050000001;
        aiRateOfFire=2;
    };
    class close: Full_auto
    {
        burst=10;
        aiRateOfFire=0.5;
        aiRateOfFireDistance=50;
        minRange=0;
        minRangeProbab=0.050000001;
        midRange=25;
        midRangeProbab=0.69999999;
        maxRange=50;
        maxRangeProbab=0.039999999;
        showToPlayer=0;
    };
    class short: close
    {
        burst=5;
        aiRateOfFire=2;
        aiRateOfFireDistance=200;
        minRange=50;
        minRangeProbab=0.050000001;
        midRange=200;
        midRangeProbab=0.69999999;
        maxRange=400;
        maxRangeProbab=0.039999999;
    };
    class medium: close
    {
        burst=3;
        aiRateOfFire=4;
        aiRateOfFireDistance=600;
        aiRateOfFireDispersion=2;
        minRange=400;
        minRangeProbab=0.050000001;
        midRange=600;
        midRangeProbab=0.60000002;
        maxRange=800;
        maxRangeProbab=0.1;
    };
    class far_optic1: close
    {
        requiredOpticType=1;
        burst=3;
        aiRateOfFire=9;
        aiRateOfFireDistance=1000;
        aiRateOfFireDispersion=3;
        minRange=800;
        minRangeProbab=0.039999999;
        midRange=1000;
        midRangeProbab=0.5;
        maxRange=1200;
        maxRangeProbab=0.0099999998;
    };
    class far_optic2: far_optic1
    {
        requiredOpticType=2;
        autoFire=0;
        burst=1;
        aiRateOfFire=12;
        aiRateOfFireDistance=1600;
        aiRateOfFireDispersion=4;
        minRange=1200;
        minRangeProbab=0.050000001;
        midRange=1600;
        midRangeProbab=0.5;
        maxRange=2000;
        maxRangeProbab=0.0099999998;
    };
    aiDispersionCoefY=20;
    aiDispersionCoefX=15;
    initialSpeed=0;
};

class MMG_ACME_ZK21: MMG_ACME_base_F
{
    author="ajeless";
    _generalMacro="MMG_ACME_ZK21";
    baseWeapon="MMG_ACME_ZK21";
    scope=2;
    displayName="ACME ZK-21  (Black, 8.5x64)";
    descriptionShort="ACME ZK-21 (8.5x64)mm Machinegun";
    picture="\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\UI\gear_MMG_02_black_X_co.paa";
    UIPicture="\A3\weapons_f\data\UI\icon_mg_CA.paa";
    hiddenSelectionsTextures[]=
    {
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_black_CO.paa",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_black_CO.paa",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_black_CO.paa"
    };
    hiddenSelectionsMaterials[]=
    {
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_01_black.rvmat",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_02_black.rvmat",
        "\A3\Weapons_F_Mark\Machineguns\MMG_02\Data\MMG_02_03_black.rvmat"
    };
    class LinkedItems
    {
        class LinkedItemsUnder
        {
            slot="UnderBarrelSlot";
            item="bipod_01_F_blk";
        };
    };
};