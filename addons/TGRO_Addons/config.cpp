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