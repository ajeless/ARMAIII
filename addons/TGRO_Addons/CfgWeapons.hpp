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
	
	#include "weapons\arifle_ACME_base_F.hpp"
	#include "weapons\arifle_ACME_AK12_M.hpp"

	class HeadgearItem;
	class ItemCore;
	class H_HelmetB: ItemCore
	{
		class ItemInfo;
	};

	#include "weapons\H_Balaclava_Magic.hpp"
};