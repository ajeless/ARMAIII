class CfgPatches
{
     class TGRO_Addons
     {
         name = "Toogro's Addons";
         author = "ajeless";
         requiredAddons[] = {
             "A3_Functions_F"
         };
         units[] = {
            "TGRO_ModuleRandomArtillery",
            "TGRO_ModuleRandomSmokeAndFlares",
            "TGRO_ModuleRandomCarnage"
         };
         weapons[] = {};
     };

    class TGRO_Rifles_AK12
	{
		addonRootClass="A3_Weapons_F_Exp";
		requiredAddons[]=
		{
			"A3_Weapons_F_Exp"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"arifle_AK12_M"
		};
	};
};

class cfgMods
{
	author="TGRO";
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class TGRO_Modules: NO_CATEGORY
    {
        displayName = "Toogro Modules";
    };
};

class CfgFunctions
{
    class TGRO
    {

        class TGRO_Modules
        {
            file = "\TGRO_Addons\functions";

            class moduleRandomArtillery {};
            class moduleRandomSmokeAndFlares {};
            class dropOrdnance {};
            class moduleRandomCarnage {};
            class waitForPopulateMapEntities {};
            class getMenAndVehicleClasses {};
        };

    };
};

class CfgVehicles
{
    class Logic;
    class Module_F: Logic
    {
        class AttributesBase 
        {
            class Default;
            class Edit;
            class Combo;
            class Checkbox;
            class CheckboxNumber;
            class ModuleDescription;
            class Units;
        };
        class ModuleDescription
		{
			class AnyBrain;
		};
    };

    class TGRO_ModuleRandomArtillery: Module_F
    {
        scope = 2;
        displayName = "Random Artillery";
        icon = "\A3\Modules_F_Curator\Data\iconOrdnance_ca.paa";
        category = "TGRO_Modules";
        function = "TGRO_fnc_moduleRandomArtillery";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
        isDisposable = 1;

        class Attributes: AttributesBase
        {
            class Persistent: Checkbox   
            {
                property = "TGRO_ModuleRandomArtillery_Persistent";
                displayName = "Persistent";
                tooltip = "Persistent ordnance dropped throughout the mission. Shell count infinite/ignored.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class Follow: Checkbox 
            {
                property = "TGRO_ModuleRandomArtillery_Follow";
                displayName = "Follow";
                tooltip = "Follows/tracks target for duration of bombardment.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class TrigIsZone: Checkbox 
            {
                property = "TGRO_ModuleRandomArtillery_TrigIsZone";
                displayName = "Use trigger area";
                tooltip = "When checked the trigger area will be used as the artillery zone.  Marker takes precedence.  Will be ignored if marker used.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };
      
            class MarkerArea: Edit
            {
                property = "TGRO_ModuleRandomArtillery_MarkerArea";
                displayName = "Marker";
                tooltip = "Bombardment will take place in this marker's area.";
                typeName = "STRING";
                defaultValue = nil;
            };

            class Radius: Edit
            {
                property = "TGRO_ModuleRandomArtillery_Radius";
                displayName = "Radius(m)";
                tooltip = "Radius/max-distance from center where ordnance will drop.  Random direction between '0 - Radius(m)'.  Ignored if bombardment dropped on area (IE: marker).";
                typeName = "NUMBER";
                defaultValue = 250;
            };

            class Shells: Edit
            {
                property = "TGRO_ModuleRandomArtillery_Shells";
                displayName = "Shells/bombs";
                tooltip = "Number of shells in barrage/bombardment.";
                typeName = "NUMBER";
                defaultValue = 1;
            };

            class Altitude: Edit
            {
                property = "TGRO_ModuleRandomArtillery_Altitude";
                displayName = "Altitude(m)";
                tooltip = "Altitude from which ordnance is to be dropped";
                typeName = "NUMBER";
                defaultValue = 150;
            };

            class Delay: Edit
            {
                property = "TGRO_ModuleRandomArtillery_Delay";
                displayName = "Delay(s)";
                tooltip = "Random delay between shells.  0 - Delay(s)";
                typeName = "NUMBER";
                defaultValue = 5;
            };

            class Ordnance: Combo
            {
                property = "TGRO_ModuleRandomArtillery_Ordnance";
                displayName = "Ordnance";
                tooltip = "Type of ordnance dropped";
                typeName = "STRING";
                defaultValue = "Bo_Mk82";
                class values 
                {

                    // 40mm HE
                    class G_40mm_HE
                    {
                        name = "UGL - 40mm HE Grenade"; 
                        value = "G_40mm_HE";
                        default = 1;
                    };

                    // hand grenades
                    class gm_handgrenade_frag_rgd5
                    {
                        name = "RGD 5 Fragmentation Grenade (hand grenade)"; 
                        value = "gm_handgrenade_frag_rgd5"; 
                    };

                    // 82mm HE
                    class Sh_82mm_AMOS
                    {
                        name = "Mortar - 82mm HE Shells"; 
                        value = "Sh_82mm_AMOS";
                    };
                    
                    // Howitzer
                    class Sh_155mm_AMOS
                    {
                        name = "Howitzer - 155mm HE Shells"; 
                        value = "Sh_155mm_AMOS";
                    };
                    class Mine_155mm_AMOS_range
                    {
                        name = "Howitzer - 155mm AP Mine Cluster"; 
                        value = "Mine_155mm_AMOS_range";
                    };
                    class AT_Mine_155mm_AMOS_range
                    {
                        name = "Howitzer - 155mm AT Mine Cluster"; 
                        value = "AT_Mine_155mm_AMOS_range";
                    };
                    class Cluster_155mm_AMOS
                    {
                        name = "Howitzer - 155mm Cluster Shells"; 
                        value = "Cluster_155mm_AMOS";
                    };

                    // Bombs
                    class Bo_Mk82 
                    {
                        name = "Mk82 - 500lb HE, unguided bomb"; 
                        value = "Bo_Mk82";
                    };
                };
            };

            class ModuleDescription: ModuleDescription
			{
			};
        };
        class ModuleDescription: ModuleDescription
		{
			description[] = {
                "Random Artillery/Ordnance",
                " ",
                "Choose a fixed number of shells, or check 'Persistent' for shelling that lasts for the entire mission.",
                "Choose a delay betwen shells.",
                " ", 
                "Place module on map and shelling will take place in a radius around it.",
                "Bombardment will start immediately when not activated by trigger.",
                "When not synced, and no marker is provided, bombardment is centered in radius around the module position.",
                " ", 
                "Module may be synced to an object in order to target it.",
                "Bombardment will be centered in a radius around the object.",
                "Tick the follow checkbox for bombardment to follow synced entity/object.",
                " ",
                "Provide a marker name instead in order for bombardment to take place within the marker area.",
                "Tick the 'Use trigger area' checkbox to use the tigger's area for bombardment instead of a marker.", 
                "Marker takes precedence (use trigger is ignored) if marker is entered."
            };
			sync[] = {"LocationArea_F"};
            duplicate = 1;
            position = 1;
		};
    };

    class TGRO_ModuleRandomSmokeAndFlares: Module_F
    {
        scope = 2;
        displayName = "Random smoke and flares";
        category = "TGRO_Modules";
        function = "TGRO_fnc_moduleRandomSmokeAndFlares";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
        isDisposable = 1;

        class Attributes: AttributesBase
        {
            class Persistent: Checkbox   
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Persistent";
                displayName = "Persistent";
                tooltip = "Persistent ordnance dropped throughout the mission. Shell count infinite/ignored.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class Follow: Checkbox 
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Follow";
                displayName = "Follow";
                tooltip = "Follows/tracks target for duration of bombardment.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class TrigIsZone: Checkbox 
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_TrigIsZone";
                displayName = "Use trigger area";
                tooltip = "When checked the trigger area will be used as the SmokeAndFlares zone.  Marker takes precedence.  Will be ignored if marker used.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };
      
            class MarkerArea: Edit
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_MarkerArea";
                displayName = "Marker";
                tooltip = "Bombardment will take place in this marker's area.";
                typeName = "STRING";
                defaultValue = nil;
            };

            class Radius: Edit
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Radius";
                displayName = "Radius(m)";
                tooltip = "Radius/max-distance from center where ordnance will drop.  Random direction between '0 - Radius(m)'.  Ignored if bombardment dropped on area (IE: marker).";
                typeName = "NUMBER";
                defaultValue = 250;
            };

            class Shells: Edit
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Shells";
                displayName = "Shells/bombs";
                tooltip = "Number of shells in barrage/bombardment.";
                typeName = "NUMBER";
                defaultValue = 1;
            };

            class Altitude: Edit
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Altitude";
                displayName = "Altitude(m)";
                tooltip = "Altitude from which ordnance is to be dropped";
                typeName = "NUMBER";
                defaultValue = 150;
            };

            class Delay: Edit
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Delay";
                displayName = "Delay(s)";
                tooltip = "Random delay between shells.  0 - Delay(s)";
                typeName = "NUMBER";
                defaultValue = 5;
            };

            class gm_smokeshell_blk_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_blk_gc";
                displayName = "GC - Black Smoke";
                tooltip = "GC - Black Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = true;
            };

            class gm_smokeshell_blu_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_blu_gc";
                displayName = "GC - Blue Smoke";
                tooltip = "GC - Blue Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class gm_smokeshell_grn_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_grn_gc";
                displayName = "GC - Green Smoke";
                tooltip = "GC - Green Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class gm_smokeshell_org_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_org_gc";
                displayName = "GC - Orange Smoke";
                tooltip = "GC - Orange Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class gm_smokeshell_red_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_red_gc";
                displayName = "GC - Red Smoke";
                tooltip = "GC - Red Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class gm_smokeshell_wht_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_wht_gc";
                displayName = "GC - White Smoke";
                tooltip = "GC - White Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class gm_smokeshell_yel_gc: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_gm_smokeshell_yel_gc";
                displayName = "GC - Yellow Smoke";
                tooltip = "GC - Yellow Smoke.  Global Mobilization DLC.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class Smoke_82mm_AMOS_White: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_Smoke_82mm_AMOS_White";
                displayName = "Mortar - 82mm Smoke White";
                tooltip = "82mm, white, smoke, mortar shells.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class F_40mm_White: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_F_40mm_White";
                displayName = "UGL - 40mm Flare White";
                tooltip = "40mm, white, flare shells.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class F_40mm_Red: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_F_40mm_Red";
                displayName = "UGL - 40mm Flare Red";
                tooltip = "40mm, red, flare shells.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class F_40mm_Green: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_F_40mm_Green";
                displayName = "UGL - 40mm Flare Green";
                tooltip = "40mm, green, flare shells.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class F_40mm_Yellow: CheckBox
            {
                property = "TGRO_ModuleRandomSmokeAndFlares_F_40mm_Yellow";
                displayName = "UGL - 40mm Flare Yellow";
                tooltip = "40mm, yellow, flare shells.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class ModuleDescription: ModuleDescription
			{
			};
        };
        class ModuleDescription: ModuleDescription
		{
			description[] = {
                "Random Smoke and Flares",
                " ",
                "Choose a fixed number of shells, or check 'Persistent' for smoke/flares that last for the entire mission.",
                "Choose the delay betwen drops.",
                " ", 
                "Place module on map and for smoke/flares to drop in the given radius around it.",
                "Bombardment will start immediately when not activated by trigger.",
                "When not synced, and no marker is provided, bombardment is centered in radius around module position.",
                " ", 
                "Module may be synced to an object in order to target it.",
                "Bombardment will be centered in a radius around the target.",
                "Tick the follow checkbox for the bombardment to follow the target.",
                " ",
                "Provide a marker name instead in order for bombardment to take place within the marker area.",
                "Tick the 'Use trigger area' checkbox to use the tigger's area for bombardment instead of a marker.", 
                "Marker takes precedence (use trigger is ignored) if marker is entered."
            };
			sync[] = {"LocationArea_F"};
            duplicate = 1;
            position = 1;
		};
    };

    class TGRO_ModuleRandomCarnage: Module_F
    {
        scope = 2;
        displayName = "Random Carnage";
        category = "TGRO_Modules";
        function = "TGRO_fnc_moduleRandomCarnage";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 0;
        isDisposable = 1;

        class Attributes: AttributesBase
        {
            class Radius: Edit
            {
                property = "TGRO_ModuleRandomCarnage_Radius";
                displayName = "Radius(m)";
                tooltip = "The maximum distance, centered on the module position, around which wrecks, bodies, fires will spawn.";
                typeName = "NUMBER";
                defaultValue = 10;
            };

            class MarkerArea: Edit
            {
                property = "TGRO_ModuleRandomCarnage_MarkerArea";
                displayName = "Marker";
                tooltip = "If a marker name is provided, the radius is ignored. Random positions within the marker area will be used to spawn wrecks, bodies, fires";
                typeName = "STRING";
                defaultValue = nil;
            };

            class Corpses: Edit
            {
                property = "TGRO_ModuleRandomCarnage_Corpses";
                displayName = "Corpses";
                tooltip = "The number of corpses to spawn.";
                typeName = "NUMBER";
                defaultValue = 5;
            };

            class Wrecks: Edit
            {
                property = "TGRO_ModuleRandomCarnage_Wrecks";
                displayName = "Wrecks";
                tooltip = "The number of wrecked vehicles to spawn.";
                typeName = "NUMBER";
                defaultValue = 1;
            };

            class FiresPercent: Edit
            {
                property = "TGRO_ModuleRandomCarnage_FiresPercent";
                displayName = "Wreck fires %";
                tooltip = "The %chance that a particular wreck will remain on fire.  EG: 50 means 50-50 chance of a spawned wreck being on fire. Effect persists.";
                typeName = "NUMBER";
                defaultValue = 0;
            };

            class SmolderingBodiesPercent: Edit
            {
                property = "TGRO_ModuleRandomCarnage_SmolderingBodiesPercent";
                displayName = "Corpse fires %";
                tooltip = "The % chance that a particular corpse is on fire. EG: 50 means 50-50 chance that a corpse is smoldering. Effect persists.";
                typeName = "NUMBER";
                defaultValue = 0;
            };

            class ModuleDescription: ModuleDescription
			{
			};
        };
        class ModuleDescription: ModuleDescription
		{
			description[] = {
                "Random Carnage",  
                " ",
                "Entities will spawn about 60 seconds after mission start.",
                "Entities are based on soldier and vehicle classes that are in the mission.",
                "NOTE: These objects are exempt from garbage/remains collection.  Use conservatively.",
                " ",
                "Create an area of carnage/destruction by spawning corpses, wrecks, and fires.",
                "Place the module on its own for carnage in a radius around it.",
                "Provide a marker name for carnage inside the marker area instead.",
                "The radius will be ignored when a marker is provided.  IE: The marker area is the carnage area.",
                "Provide number of corpses and wrecked vehicles.",
                "Provide the chance of vehicle wrecks being in flames and corpses Being on fire.",
            };
			sync[] = {"LocationArea_F"};
            duplicate = 1;
            position = 1;
		};
    };
};



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
	class arifle_AK12_base_F: Rifle_Base_F
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
			"30Rnd_762x39_AK12_Mag_F"
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
	class arifle_AK12_M: arifle_AK12_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="arifle_AK12_M";
		baseWeapon="arifle_AK12_M";
		scope=2;
		displayName="AK-12 M 7.62mm";
		picture="\A3\Weapons_F_Exp\Rifles\AK12\Data\UI\icon_arifle_AK12_F_X_CA.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_1_co.paa",
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_ak12_2_co.paa"
		};
	};
};