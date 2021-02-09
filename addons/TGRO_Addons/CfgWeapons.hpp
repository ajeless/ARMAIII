class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
// class UnderBarrelSlot;
class UnderBarrelSlot: SlotInfo
{
	linkProxy="\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
	compatibleItems[]=
	{
		"bipod_01_F_snd",
		"bipod_01_F_blk",
		"bipod_01_F_mtp",
		"bipod_01_F_khk",
		"bipod_02_F_blk",
		"bipod_02_F_tan",
		"bipod_02_F_hex",
		"bipod_03_F_blk",
		"bipod_03_F_oli"
	};
	iconPicture="\A3\Weapons_F_Mark\Data\UI\attachment_under.paa";
	iconPinpoint="Bottom";
};
class CfgWeapons
{
	
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};

	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	// #include "weapons\arifle_ACME_MCR21.hpp"
	#include "weapons\mmg_ACME_ZK21.hpp"
	#include "weapons\arifle_ACME_HAR22.hpp"
	#include "weapons\arifle_ACME_MX_V.hpp"
	
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	#include "weapons\H_Balaclava_Armored.hpp"
	#include "weapons\H_HelmetB_ACME_Stealth_Helmet.hpp"
};