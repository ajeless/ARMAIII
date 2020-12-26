class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons
{
	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;
	class arifle_ACME_base_F: Rifle_Base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_AK12_base_F";
		scope=0;
		displayName="";
		descriptionShort="$STR_A3_CfgWeapons_arifle_AK12_base_F1";
		model="\A3\Weapons_F_Exp\Rifles\AK12\AK12_F.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\Anims\ak12.rtm"
		};
		reloadAction="GestureReloadAKM";
		magazines[]=
		{
			"75rnd_762x39_AK12_Mag_F"
		};
		magazineWell[]=
		{
			"AK_762x39"
		};
		magazineReloadSwitchPhase=0.47999999;
		htMin=7;
		htMax=880;
		inertia=0.60000002;
		aimTransitionSpeed=0.89999998;
		dexterity=1.4;
		initSpeed=730;
		recoil="recoil_ak12";
		maxZeroing=1000;
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
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_arifle_AK12_base_F_Library0";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				compatibleItems[]=
				{
					"muzzle_snds_B",
					"muzzle_snds_B_khk_F",
					"muzzle_snds_B_snd_F"
				};
				iconPosition[]={0,0.34999999};
				iconScale=0.2;
			};
			class CowsSlot: CowsSlot
			{
				iconPosition[]={0.5,0.25};
				iconScale=0.2;
			};
			class PointerSlot: PointerSlot
			{
				iconPosition[]={0.30000001,0.34999999};
				iconScale=0.2;
			};
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.34999999,0.69999999};
				iconScale=0.30000001;
			};
			mass=140;
		};
		distanceZoomMin=300;
		distanceZoomMax=300;

		modes[]=
		{
            "Single",
            "Burst",
			"Burst_medium",
			"FullAuto",
			"single_medium_optics1",
			"single_medium_optics2"
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
					"AK12_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"AK12_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"AK12_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.5;
			midRange=150;
			midRangeProbab=0.69999999;
			maxRange=250;
			maxRangeProbab=0.2;
		};
		class Burst: Mode_Burst
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
					"AK12_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"AK12_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"AK12_silencerInteriorTail_SoundSet"
				};
			};
			textureType="dual";
			burst=2;
			reloadTime=0.059999999;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=50;
			midRangeProbab=0.69999999;
			maxRange=100;
			maxRangeProbab=0.050000001;
		};
		class FullAuto: Mode_FullAuto
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
					"AK12_Shot_SoundSet",
					"AK12_Tail_SoundSet",
					"AK12_InteriorTail_SoundSet"
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				SoundSetShot[]=
				{
					"AK12_silencerShot_SoundSet",
					"AK12_silencerTail_SoundSet",
					"AK12_silencerInteriorTail_SoundSet"
				};
			};
			reloadTime=0.1;
			dispersion=0.00086999999;
			minRange=2;
			minRangeProbab=0.89999998;
			midRange=15;
			midRangeProbab=0.69999999;
			maxRange=30;
			maxRangeProbab=0.050000001;
			aiRateOfFire=1e-006;
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
		class single_medium_optics1: Single
		{
			requiredOpticType=1;
			showToPlayer=0;
			minRange=5;
			minRangeProbab=0.2;
			midRange=300;
			midRangeProbab=0.69999999;
			maxRange=450;
			maxRangeProbab=0.30000001;
			aiRateOfFire=5;
			aiRateOfFireDistance=500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType=2;
			minRange=100;
			minRangeProbab=0.1;
			midRange=400;
			midRangeProbab=0.69999999;
			maxRange=600;
			maxRangeProbab=0.050000001;
			aiRateOfFire=6;
			aiRateOfFireDistance=600;
		};
	};
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
	};


	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

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
};