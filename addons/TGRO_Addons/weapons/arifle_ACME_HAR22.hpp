class arifle_ACME_HAR22_base_F: Rifle_Long_Base_F
	{
		author="ajeless";
		_generalMacro="arifle_ACME_HAR22_base_F";
		scope=0;
		magazines[]=
        {
            "66Rnd_8x60_Mag"
        };
        magazineWell[]=
        {
            "ACME_5x60_Quad_Mag"
        };
		reloadAction="ReloadGM6";
		recoil="recoil_ACME_HAR22";
		maxZeroing=2200;
		cursor="srifle";
		// maxRecoilSway=0.029999999;
		// swayDecaySpeed=1.25;
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F\LongRangeRifles\GM6\Data\Anim\GM6.rtm"
		};
		// opticsPPEffects[]={};
		// opticsFlare=1;
		// opticsDisablePeripherialVision=1;
		// class GunParticles
		// {
		// 	class FirstEffect
		// 	{
		// 		effectName="SniperCloud";
		// 		positionName="Usti hlavne";
		// 		directionName="Konec hlavne";
		// 	};
		// };
		distanceZoomMin=300;
		distanceZoomMax=350;
		bullet1[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_01",
			0.79432821,
			1,
			15
		};
		bullet2[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_02",
			0.79432821,
			1,
			15
		};
		bullet3[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_03",
			0.79432821,
			1,
			15
		};
		bullet4[]=
		{
			"A3\sounds_f\weapons\shells\7_62\metal_762_04",
			0.79432821,
			1,
			15
		};
		bullet5[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_01",
			0.79432821,
			1,
			15
		};
		bullet6[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_02",
			0.79432821,
			1,
			15
		};
		bullet7[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_03",
			0.79432821,
			1,
			15
		};
		bullet8[]=
		{
			"A3\sounds_f\weapons\shells\7_62\dirt_762_04",
			0.79432821,
			1,
			15
		};
		bullet9[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_01",
			0.70794576,
			1,
			15
		};
		bullet10[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_02",
			0.70794576,
			1,
			15
		};
		bullet11[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_03",
			0.70794576,
			1,
			15
		};
		bullet12[]=
		{
			"A3\sounds_f\weapons\shells\7_62\grass_762_04",
			0.70794576,
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
        class Library
		{
			libTextDesc="ACME MCR base configuration";
		};
		modes[]=
		{
			"Single",
            "Burst2",
            "Burst3",
            "Burst_medium",
            "Full_auto",
			"far_optic1",
			"medium_optic2",
			"far_optic2"
		};
		drySound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_dry",
			0.56234133,
			1,
			15
		};
		reloadMagazineSound[]=
		{
			"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_reload",
			1,
			1,
			10
		};
		soundBipodDeploy[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_deploy",
			0.70794576,
			1,
			20
		};
		soundBipodFold[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_fold",
			0.70794576,
			1,
			20
		};
		soundBipodDown[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]=
		{
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
        class Single: Mode_SemiAuto
        {
            sounds[]=
            {
                "StandardSound",
                "SilencedSound"
            };
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
		};

        class Full_auto: Mode_FullAuto
        {
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
            reloadTime=0.115;
            dispersion=0.00073000003;
            // soundContinuous=0;
            // soundBurst=0;
        };
        class Burst2: Mode_Burst
        {
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
            textureType="dual";
            burst=2;
            reloadTime=0.06;
            dispersion=0.00086999999;
            minRange=2;
            minRangeProbab=0.89999998;
            midRange=50;
            midRangeProbab=0.69999999;
            maxRange=100;
            maxRangeProbab=0.050000001;
        };
        class Burst3: Mode_Burst
        {
            class BaseSoundModeType;
			class StandardSound: BaseSoundModeType
			{
				soundSetShot[]=
				{
					"DMR05_Shot_SoundSet",
					"DMR05_tail_SoundSet",
					"DMR05_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"DMR05_silencerShot_SoundSet",
					"DMR05_silencerTail_SoundSet",
					"DMR05_silencerInteriorTail_SoundSet"
				};
			};
            textureType="dual";
            burst=3;
            reloadTime=0.11;
            dispersion=0.00086999999;
            minRange=2;
            minRangeProbab=0.89999998;
            midRange=50;
            midRangeProbab=0.69999999;
            maxRange=100;
            maxRangeProbab=0.050000001;
        };
		class Burst_medium: Burst3
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
		class far_optic1: Single
		{
			showToPlayer=0;
			minRange=150;
			minRangeProbab=0.2;
			midRange=500;
			midRangeProbab=0.69999999;
			maxRange=1500;
			maxRangeProbab=0.40000001;
			aiRateOfFire=3;
			aiRateOfFireDistance=500;
			requiredOpticType=1;
		};
		class medium_optic2: Single
		{
			showToPlayer=0;
			minRange=250;
			minRangeProbab=0.2;
			midRange=750;
			midRangeProbab=0.69999999;
			maxRange=1000;
			maxRangeProbab=0.40000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
		class far_optic2: far_optic1
		{
			minRange=500;
			minRangeProbab=0.2;
			midRange=1200;
			midRangeProbab=0.69999999;
			maxRange=2100;
			maxRangeProbab=0.30000001;
			aiRateOfFire=7;
			aiRateOfFireDistance=1000;
			requiredOpticType=2;
		};
	};
	class arifle_ACME_HAR22: arifle_ACME_HAR22_base_F
	{
		author="ajeless";
		_generalMacro="arifle_ACME_HAR22";
		baseWeapon="arifle_ACME_HAR22";
		scope=2;
		model="\A3\Weapons_F\LongRangeRifles\GM6\GM6_F.p3d";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=200;
			class MuzzleSlot: MuzzleSlot
            {
                linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[]=
				{
					"muzzle_snds_93mmg"
				};
                iconPosition[]={0,0.34999999};
                iconScale=0.2;
            };
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.55000001,0.30000001};
				iconScale=0.2;
			};
			class PointerSlot
			{
			};
		};
		initialSpeed=0;
		inertia=1.2;
		aimTransitionSpeed=1;
		dexterity=1.8;
		class ItemInfo
		{
			priority=1;
		};
		displayName="ACME HAR-22 (Black, 8x60)";
		picture="\A3\Weapons_F\LongRangeRifles\GM6\Data\UI\gear_gm6_X_CA.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_sniper_CA.paa";
		descriptionShort="ACME HAR-22 (8x60)mm Heavy Assault Rifle";
	};