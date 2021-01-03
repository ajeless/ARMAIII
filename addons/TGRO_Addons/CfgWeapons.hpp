// CfgMagazineWells Starts Here
class CfgMagazineWells
{

	class ACME_85x64
	{
		ACME_Magazines[]=
		{
			"30Rnd_85x64_Mag_F",
			"30Rnd_85x64_ACME_MCR21_Mag",
			"50Rnd_85x64_ACME_MCR21_Mag"
		};
	};
};

// Cfg Weapons Starts Here
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
	
	#include "weapons\arifle_ACME_MCR21.hpp"
	
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	#include "weapons\H_Balaclava_Magic.hpp"
	#include "weapons\H_HelmetB_ACME_Stealth_Helmet.hpp"
};