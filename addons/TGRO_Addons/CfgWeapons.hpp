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
		// class GunParticles;
	};

	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
		class GunParticles;
	};
	class UGL_F;

	// #include "weapons\arifle_ACME_MCR21.hpp"
	#include "weapons\mmg_ACME_ZK21.hpp"
	#include "weapons\arifle_ACME_MCR22.hpp"
	
	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	#include "weapons\H_Balaclava_Magic.hpp"
	#include "weapons\H_HelmetB_ACME_Stealth_Helmet.hpp"
};