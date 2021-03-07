class arifle_ACME_MX_V_base_Top_F: Rifle_Base_F
{
	author="ajeless";
	_generalMacro="arifle_ACME_MX_V_base_Top_F";
	magazineWell[]=
	{
		"ACME_MX_65x39"
	};
	magazineReloadSwitchPhase=0.5;
	class Library
	{
		libTextDesc="The ACME MXv is a 6.5 mm, two stage, linear accelerated, assault rifle.  The first stage is a caseless chemical propellant.  The Second stage is magnetic field induced in the barrel that accelerates the projectile.  The result is an assault rifle with all the logistic and handling characteristics of the MX series rifles, that hits like a high end 7.62.  The  It is lightweight, reliable, easily serviceable and compatible with a large number of accessories.";
	};
	reloadAction="GestureReloadMX";
	recoil="recoil_mx";
	maxZeroing=1000;
	discreteDistanceInitIndex=0;
	maxRecoilSway=0.0125;
	swayDecaySpeed=1.25;
	class GunParticles: GunParticles
	{
		class SecondEffect
		{
			positionName="Nabojnicestart";
			directionName="Nabojniceend";
			effectName="CaselessAmmoCloud";
		};
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
			compatibleItems[]=
			{
				"muzzle_snds_H",
				"muzzle_snds_H_khk_F",
				"muzzle_snds_H_snd_F",
				"muzzle_snds_65_TI_blk_F",
				"muzzle_snds_65_TI_ghex_F",
				"muzzle_snds_65_TI_hex_F",
				"muzzle_snds_H_MG",
			};
			iconPosition[]={0,0.44999999};
			iconScale=0.2;
		};
		class CowsSlot: CowsSlot
		{
			iconPosition[]={0.5,0.34999999};
			iconScale=0.2;
		};
		class PointerSlot: PointerSlot
		{
			iconPosition[]={0.2,0.44999999};
			iconScale=0.25;
		};
		// class UnderBarrelSlot: UnderBarrelSlot
		// {
		// 	iconPosition[]={0.2,0.69999999};
		// 	iconScale=0.2;
		// };
	};
	distanceZoomMin=300;
	distanceZoomMax=300;
	descriptionShort="The ACME MX V is a 6.5 mm, two stage, linear accelerated, assault rifle";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\A3\Weapons_F\Rifles\MX\data\Anim\mx.rtm"
	};
	modes[]=
	{
		"Single",
		"Burst2",
		"FullAuto",
		"fullauto_medium",
		"single_medium_optics1",
		"single_far_optics2"
	};
	caseless[]=
		{
			"",
			1,
			1,
			1
		};
	soundBullet[]=
	{
		"caseless",
		1
	};
	drySound[]=
	{
		"A3\Sounds_F\arsenal\weapons\Rifles\MX\dry_Mx",
		0.56234133,
		1,
		10
	};
	reloadMagazineSound[]=
	{
		"A3\Sounds_F\arsenal\weapons\Rifles\MX\Reload_MX",
		1,
		1,
		10
	};
	changeFiremodeSound[]=
	{
		"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",
		0.17782794,
		1,
		5
	};

	class Single: Mode_SemiAuto
	{
		reloadTime=0.096000001;
		recoil="recoil_single_mx";
		recoilProne="recoil_single_prone_mx";
		dispersion=0.00086999999;
		minRange=2;
		minRangeProbab=0.5;
		midRange=200;
		midRangeProbab=0.69999999;
		maxRange=400;
		maxRangeProbab=0.30000001;
		soundContinuous=0;
		soundBurst=0;
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
				"MX_Shot_SoundSet",
				"MX_Tail_SoundSet",
				"MX_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"MX_silencerShot_SoundSet",
				"MX_silencerTail_SoundSet",
				"MX_silencerInteriorTail_SoundSet"
			};
		};
	};
	class FullAuto: Mode_FullAuto
	{
		reloadTime=0.096000001;
		dispersion=0.00086999999;
		recoil="recoil_auto_mx";
		recoilProne="recoil_auto_prone_mx";
		minRange=0;
		minRangeProbab=0.89999998;
		midRange=15;
		midRangeProbab=0.69999999;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
		soundContinuous=0;
		soundBurst=0;
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
				"MX_Shot_SoundSet",
				"MX_Tail_SoundSet",
				"MX_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"MX_silencerShot_SoundSet",
				"MX_silencerTail_SoundSet",
				"MX_silencerInteriorTail_SoundSet"
			};
		};
	};
	class fullauto_medium: FullAuto
	{
		showToPlayer=0;
		burst=3;
		aiBurstTerminable=1;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.69999999;
		maxRange=150;
		maxRangeProbab=0.050000001;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};
	class Burst2: Mode_Burst
	{
		class BaseSoundModeType;
		class StandardSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"MX_Shot_SoundSet",
				"MX_Tail_SoundSet",
				"MX_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"MX_silencerShot_SoundSet",
				"MX_silencerTail_SoundSet",
				"MX_silencerInteriorTail_SoundSet"
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
	class single_medium_optics1: Single
	{
		requiredOpticType=1;
		showToPlayer=0;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.69999999;
		maxRange=600;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_medium_optics1
	{
		requiredOpticType=2;
		showToPlayer=0;
		minRange=100;
		minRangeProbab=0.1;
		midRange=500;
		midRangeProbab=0.60000002;
		maxRange=700;
		maxRangeProbab=0.050000001;
		aiRateOfFire=8;
		aiRateOfFireDistance=700;
	};
	aiDispersionCoefY=6;
	aiDispersionCoefX=4;
};

/* ACME MXC SERIES STARTS HERE */
class arifle_ACME_MXC_V_Base_F: arifle_ACME_MX_V_base_Top_F
{
	author="ajeless";
	model="\A3\Weapons_F\Rifles\MX\MXC_F.p3d";
	reloadAction="GestureReloadMXCompact";
	UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class MuzzleSlot: MuzzleSlot
		{
			iconPosition[]={0,0.40000001};
		};
		class CowsSlot: CowsSlot
		{
			iconPosition[]={0.5,0.30000001};
		};
		class PointerSlot: PointerSlot
		{
			iconPosition[]={0.2,0.40000001};
		};
		mass=80;
	};
	inertia=0.40000001;
	aimTransitionSpeed=1.2;
	dexterity=1.6;
	initSpeed=920;
	recoil="recoil_mxc";
	maxZeroing=800;
	class ItemInfo
	{
		priority=1;
	};
	class Single: Single
	{
		dispersion=0.00116;
		minRange=2;
		minRangeProbab=0.30000001;
		midRange=150;
		midRangeProbab=0.69999999;
		maxRange=350;
		maxRangeProbab=0.1;
	};
	class FullAuto: FullAuto
	{
		dispersion=0.00116;
		minRange=0;
		minRangeProbab=0.89999998;
		midRange=15;
		midRangeProbab=0.69999999;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};
	class fullauto_medium: fullauto_medium
	{
		dispersion=0.00116;
		showToPlayer=0;
		burst=3;
		aiBurstTerminable=1;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.69999999;
		maxRange=100;
		maxRangeProbab=0.050000001;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};
	class single_medium_optics1: single_medium_optics1
	{
		dispersion=0.00116;
		requiredOpticType=1;
		minRange=2;
		minRangeProbab=0.2;
		midRange=350;
		midRangeProbab=0.69999999;
		maxRange=500;
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
		midRangeProbab=0.60000002;
		maxRange=700;
		maxRangeProbab=0.050000001;
		aiRateOfFire=7;
		aiRateOfFireDistance=700;
	};
	aiDispersionCoefY=6;
	aiDispersionCoefX=4;
};

class arifle_ACME_MXC_V_Sand_F: arifle_ACME_MXC_V_Base_F
{
	baseWeapon="arifle_ACME_MXC_V_Sand_F";
	_generalMacro="arifle_ACME_MXC_V_Sand_F";
	scope=2;
	displayName="ACME MXvC 6.5 mm Sand";
	picture="\A3\weapons_F\Rifles\MX\data\UI\gear_mx_cqc_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Sand_Mag_G"
	};
};

class arifle_ACME_MXC_V_Khaki_F: arifle_ACME_MXC_V_Base_F
{
	baseWeapon="arifle_ACME_MXC_V_Khaki_F";
	_generalMacro="arifle_ACME_MXC_V_Khaki_F";
	scope=2;
	displayName="ACME MXvC 6.5 mm Khaki";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"
	};
	picture="\A3\Weapons_F_Exp\Rifles\MX\Data\UI\icon_arifle_MXC_khk_F_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Khaki_Mag_G"
	};
};

class arifle_ACME_MXC_V_Black_F: arifle_ACME_MXC_V_Base_F
{
	baseWeapon="arifle_ACME_MXC_V_Black_F";
	_generalMacro="arifle_ACME_MXC_V_Black_F";
	scope=2;
	displayName="ACME MXvC 6.5 mm Black";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_cqc_black_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Black_Mag_G"
	};
};


/* ACME MX Standard SERIES STARTS HERE */
class arifle_ACME_MX_V_Base_F: arifle_ACME_MX_V_base_Top_F
{
	author="ajeless";
	model="\A3\Weapons_F\Rifles\MX\MX_F.p3d";
	UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\A3\Weapons_F\Rifles\MX\data\Anim\MX_afg.rtm"
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot: UnderBarrelSlot
		{
			iconPosition[]={0.2,0.69999999};
			iconScale=0.2;
		};
		mass=100;
	};
	inertia=0.5;
	aimTransitionSpeed=1;
	dexterity=1.5;
	initSpeed=1000;
	class ItemInfo
	{
		priority=1;
	};
};

class arifle_ACME_MX_V_Sand_F: arifle_ACME_MX_V_Base_F
{
	_generalMacro="arifle_ACME_MX_V_Sand_F";
	baseWeapon="arifle_ACME_MX_V_Sand_F";
	scope=2;
	displayName="ACME MXv 6.5 mm Sand";
	picture="\A3\weapons_F\Rifles\MX\data\UI\gear_mx_rifle_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Sand_Mag_G"
	};
};


class arifle_ACME_MX_V_Khaki_F: arifle_ACME_MX_V_Base_F
{
	_generalMacro="arifle_ACME_MX_V_Khaki_F";
	baseWeapon="arifle_ACME_MX_V_Khaki_F";
	scope=2;
	displayName="ACME MXv 6.5 mm Khaki";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa",
		"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Short_khk_co.paa"
	};
	picture="\A3\Weapons_F_Exp\Rifles\MX\Data\UI\icon_arifle_MX_khk_F_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Khaki_Mag_G"
	};
};

class arifle_ACME_MX_V_Black_F: arifle_ACME_MX_V_Base_F
{
	_generalMacro="arifle_ACME_MX_V_Black_F";
	baseWeapon="arifle_ACME_MX_V_Black_F";
	scope=2;
	displayName="ACME MXv 6.5 mm Black";
	hiddenSelections[]=
	{
		"camo1",
		"camo2"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa",
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_short_Black_co.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_rifle_black_X_CA.paa";
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Black_Mag_G"
	};
};


/* ACME MX SW SERIES STARTS HERE */
class arifle_ACME_MX_SW_V_Base_F: arifle_ACME_MX_V_base_Top_F
{
	author="ajeless";
	nameSound="Mgun";
	model="\A3\Weapons_F\Rifles\MX\MX_SW_F.p3d";
	UiPicture="\A3\weapons_f\data\UI\icon_MG_CA.paa";
	cursor="mg";
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		class UnderBarrelSlot: UnderBarrelSlot
		{
			iconPosition[]={0.2,0.69999999};
			iconScale=0.2;
		};
		mass=120;
	};
	inertia=0.60000002;
	aimTransitionSpeed=0.80000001;
	dexterity=1.4;
	initSpeed=1080;
	recoil="recoil_sw";
	maxZeroing=1200;
	class Single: Mode_SemiAuto
	{
		reloadTime=0.079999998;
		recoil="recoil_single_mx";
		recoilProne="recoil_single_prone_mx";
		dispersion=0.00073000003;
		minRange=2;
		minRangeProbab=0.0099999998;
		midRange=200;
		midRangeProbab=0.0099999998;
		maxRange=400;
		maxRangeProbab=0.0099999998;
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
				"MX_Shot_SoundSet",
				"MX_Tail_SoundSet",
				"MX_InteriorTail_SoundSet"
			};
		};
		class SilencedSound: BaseSoundModeType
		{
			soundSetShot[]=
			{
				"MX_silencerShot_SoundSet",
				"MX_silencerTail_SoundSet",
				"MX_silencerInteriorTail_SoundSet"
			};
		};
	};
	class ItemInfo
	{
		priority=1;
		RMBhint="XMSW";
		onHoverText="TODO XMSW DSS";
	};
	modes[]=
	{
		"manual",
		"single",
		"close",
		"short",
		"medium",
		"far_optic1",
		"far_optic2"
	};
	class manual: FullAuto
	{
		reloadTime=0.079999998;
		dispersion=0.00073000003;
		recoilProne="recoil_single_prone_mx_sw";
		minRange=0;
		minRangeProbab=0.30000001;
		midRange=5;
		midRangeProbab=0.69999999;
		maxRange=10;
		maxRangeProbab=0.039999999;
		showToPlayer=1;
	};
	class close: manual
	{
		burst=10;
		aiBurstTerminable=1;
		aiRateOfFire=0.5;
		aiRateOfFireDistance=50;
		minRange=10;
		minRangeProbab=0.050000001;
		midRange=20;
		midRangeProbab=0.69999999;
		maxRange=50;
		maxRangeProbab=0.039999999;
		showToPlayer=0;
	};
	class short: close
	{
		burst=8;
		aiBurstTerminable=1;
		aiRateOfFire=2;
		aiRateOfFireDistance=300;
		minRange=50;
		minRangeProbab=0.050000001;
		midRange=150;
		midRangeProbab=0.69999999;
		maxRange=300;
		maxRangeProbab=0.039999999;
	};
	class medium: close
	{
		burst=5;
		aiRateOfFire=4;
		aiRateOfFireDistance=600;
		minRange=200;
		minRangeProbab=0.050000001;
		midRange=300;
		midRangeProbab=0.69999999;
		maxRange=500;
		maxRangeProbab=0.1;
	};
	class far_optic1: close
	{
		burst=3;
		requiredOpticType=1;
		aiRateOfFire=5;
		aiRateOfFireDistance=650;
		minRange=300;
		minRangeProbab=0.050000001;
		midRange=500;
		midRangeProbab=0.40000001;
		maxRange=650;
		maxRangeProbab=0.0099999998;
	};
	class far_optic2: far_optic1
	{
		burst=3;
		requiredOpticType=2;
		minRange=400;
		minRangeProbab=0.050000001;
		midRange=750;
		midRangeProbab=0.69999999;
		maxRange=900;
		maxRangeProbab=0.0099999998;
		aiRateOfFire=10;
		aiRateOfFireDistance=900;
	};
	aiDispersionCoefY=24;
	aiDispersionCoefX=21;
};

class arifle_ACME_MX_SW_V_Sand_F: arifle_ACME_MX_SW_V_Base_F
{
	_generalMacro="arifle_ACME_MX_SW_V_Sand_F";
	baseWeapon="arifle_ACME_MX_SW_V_Sand_F";
	scope=2;
	displayName="ACME MXvSW 6.5 mm Sand";
	picture="\A3\weapons_F\Rifles\MX\data\UI\gear_mx_lmg_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_snd";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Sand_Mag_G"
	};
};

class arifle_ACME_MX_SW_V_Khaki_F: arifle_ACME_MX_SW_V_Base_F
{
	_generalMacro="arifle_ACME_MX_SW_V_Khaki_F";
	baseWeapon="arifle_ACME_MX_SW_V_Khaki_F";
	scope=2;
	displayName="ACME MXvSW 6.5 mm Khaki";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
	};
	picture="\A3\Weapons_F_Exp\Rifles\MX\Data\UI\icon_arifle_MX_SW_khk_F_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_khk";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Khaki_Mag_G"
	};
};

class arifle_ACME_MX_SW_V_Black_F: arifle_ACME_MX_SW_V_Base_F
{
	_generalMacro="arifle_ACME_MX_SW_V_Black_F";
	baseWeapon="arifle_ACME_MX_SW_V_Black_F";
	scope=2;
	displayName="ACME MXvSW 6.5 mm Black";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_LMG_Black_co.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_lmg_black_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_blk";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Black_Mag_G"
	};
};


/* ACME MXM SERIES STARTS HERE */
class arifle_ACME_MXM_V_Base_F: arifle_ACME_MX_V_base_Top_F
{
	author="ajeless";
	model="\A3\Weapons_F\Rifles\MX\MXM_F.p3d";
	reloadAction="GestureReloadMXSniper";
	UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
	handAnim[]=
	{
		"OFP2_ManSkeleton",
		"\A3\Weapons_F\Rifles\MX\data\Anim\MX_dmr.rtm"
	};
	class Single: Single
	{
		dispersion=0.00073000003;
		minRange=2;
		minRangeProbab=0.5;
		midRange=250;
		midRangeProbab=0.69999999;
		maxRange=450;
		maxRangeProbab=0.30000001;
	};
	class FullAuto: FullAuto
	{
		dispersion=0.00073000003;
		minRange=0;
		minRangeProbab=0.89999998;
		midRange=15;
		midRangeProbab=0.69999999;
		maxRange=30;
		maxRangeProbab=0.1;
		aiRateOfFire=1e-006;
	};
	class fullauto_medium: fullauto_medium
	{
		dispersion=0.00073000003;
		showToPlayer=0;
		burst=3;
		aiBurstTerminable=1;
		minRange=2;
		minRangeProbab=0.5;
		midRange=75;
		midRangeProbab=0.69999999;
		maxRange=150;
		maxRangeProbab=0.050000001;
		aiRateOfFire=2;
		aiRateOfFireDistance=200;
	};
	class single_medium_optics1: single_medium_optics1
	{
		dispersion=0.00073000003;
		requiredOpticType=1;
		minRange=2;
		minRangeProbab=0.2;
		midRange=450;
		midRangeProbab=0.69999999;
		maxRange=650;
		maxRangeProbab=0.2;
		aiRateOfFire=6;
		aiRateOfFireDistance=600;
	};
	class single_far_optics2: single_far_optics2
	{
		dispersion=0.00073000003;
		requiredOpticType=2;
		minRange=100;
		minRangeProbab=0.2;
		midRange=550;
		midRangeProbab=0.69999999;
		maxRange=800;
		maxRangeProbab=0.050000001;
		aiRateOfFire=8;
		aiRateOfFireDistance=800;
	};
	class ItemInfo
	{
		priority=1;
		RMBhint="XMM";
		onHoverText="TODO XMM DSS";
	};
	class WeaponSlotsInfo: WeaponSlotsInfo
	{
		mass=120;
		class MuzzleSlot: MuzzleSlot
		{
			iconPosition[]={0,0.40000001};
		};
		class UnderBarrelSlot: UnderBarrelSlot
		{
			iconPosition[]={0.2,0.69999999};
			iconScale=0.2;
		};
		allowedSlots[]={};
	};
	inertia=0.60000002;
	aimTransitionSpeed=0.80000001;
	dexterity=1.4;
	initSpeed=1120;
	recoil="recoil_mxm";
	maxZeroing=1400;
};

class arifle_ACME_MXM_V_Sand_F: arifle_ACME_MXM_V_Base_F
{
	_generalMacro="arifle_ACME_MXM_V_Sand_F";
	baseWeapon="arifle_ACME_MXM_V_Sand_F";
	scope=2;
	displayName="ACME MXvM 6.5 mm Sand";
	picture="\A3\weapons_F\Rifles\MX\data\UI\gear_mx_dmr_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_snd";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Sand_Mag_G"
	};
};

class arifle_ACME_MXM_V_Khaki_F: arifle_ACME_MXM_V_Base_F
{
	_generalMacro="arifle_ACME_MXM_V_Khaki_F";
	baseWeapon="arifle_ACME_MXM_V_Khaki_F";
	scope=2;
	displayName="ACME MXvM 6.5 mm Khaki";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_long_khk_co.paa"
	};
	picture="\A3\Weapons_F_Exp\Rifles\MX\Data\UI\icon_arifle_MXM_khk_F_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_khk";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Khaki_Mag_G"
	};
};

class arifle_ACME_MXM_V_Black_F: arifle_ACME_MXM_V_Base_F
{
	_generalMacro="arifle_ACME_MXM_V_Black_F";
	baseWeapon="arifle_ACME_MXM_V_Black_F";
	scope=2;
	displayName="ACME MXvM 6.5 mm Black";
	hiddenSelections[]=
	{
		"camo1"
	};
	hiddenSelectionsTextures[]=
	{
		"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_long_Black_co.paa"
	};
	picture="\A3\Weapons_F_EPB\Rifles\MX_Black\Data\UI\gear_mx_dmr_black_X_CA.paa";
	class LinkedItems
	{
		class LinkedItemsUnder
		{
			slot="UnderBarrelSlot";
			item="bipod_01_F_blk";
		};
	};
	magazines[]=
	{
		"100Rnd_65x39_ACME_Caseless_Black_Mag_G"
	};
};