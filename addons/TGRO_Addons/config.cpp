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
            //  "TGRO_ModuleTemplate",
            "TGRO_ModuleRandomArtillery"
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

            // class moduleTemplate{};
            class moduleRandomArtillery {};
            class dropOrdnance {};
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

    // class TGRO_ModuleTemplate: Module_F
    // {
    //     scope = 2;
    //     displayName = "Module Template";
    //     category = "TGRO_Modules";
    //     function = "TGRO_fnc_moduleTemplate";
    //     functionPriority = 1;
    //     isGlobal = 0;
    //     isTriggerActivated = 1;
    //     isDisposable = 1;

    //     class Attributes: AttributesBase
    //     {
    //         class Persistent: Checkbox 
    //         {
    //             property = "TGRO_ ModuleTemplate_Persistent";
    //             displayName = "Persistent";
    //             tooltip = "Effect persists (constant) throughout the mission.";
    //             typeName = "BOOLEAN";
    //             defaultValue = false;
    //         };

    //         class MarkerArea: Edit
    //         {
    //             property = "TGRO_ ModuleTemplate_MarkerArea";
    //             displayName = "Marker";
    //             tooltip = "Marker area to be affected. Only 1 marker may be specified.";
    //             typeName = "STRING";
    //             defaultValue = nil;
    //         };

    //         class Radius: Edit
    //         {
    //             property = "TGRO_ ModuleTemplate_Radius";
    //             displayName = "Radius(m)";
    //             tooltip = "If module is synced to object, this is the radius around the object the module effects.";
    //             typeName = "NUMBER";
    //             defaultValue = 0;
    //         };

    //         class Follow: Checkbox 
    //         {
    //             property = "TGRO_ ModuleTemplate_Follow";
    //             displayName = "Follow";
    //             tooltip = "If synced to an object this determines whther effect will follow object for the duration of the effect.";
    //             typeName = "BOOLEAN";
    //             defaultValue = false;
    //         };

    //         class ModuleDescription: ModuleDescription
	// 		{
	// 		};
    //     };
    //     class ModuleDescription: ModuleDescription
	// 	{
	// 		description[] = {
    //             "This is the description.",
    //             "This module doesn't really do anything.",
    //             "Use as many lines as you need",
    //             "This may be used as the template for a module."
    //         }; // Short description, will be formatted as structured text
	// 		sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
    //         duplicate = 1; // Multiple entities of this type can be synced
	// 	};
    // };

    class TGRO_ModuleRandomArtillery: Module_F
    {
        scope = 2;
        displayName = "Random Artillery";
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
                displayName = "# Shells/Bombs";
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
                    // 40mm smoke
                    class G_40mm_Smoke
                    {
                        name = "GL - 40mm Smoke White"; 
                        value = "G_40mm_Smoke";
                        default = 1;
                    };
                    class G_40mm_SmokeRed
                    {
                        name = "GL - 40mm Smoke Red"; 
                        value = "G_40mm_SmokeRed";
                    };
                    class G_40mm_SmokeGreen
                    {
                        name = "GL - 40mm Smoke Green"; 
                        value = "G_40mm_SmokeGreen";
                    };
                    class G_40mm_SmokeYellow
                    {
                        name = "GL - 40mm Smoke Yellow"; 
                        value = "G_40mm_SmokeYellow";
                    };
                    class G_40mm_SmokePurple
                    {
                        name = "GL - 40mm Smoke Purple"; 
                        value = "G_40mm_SmokePurple";
                    };
                    class G_40mm_SmokeBlue
                    {
                        name = "GL - 40mm Smoke Blue"; 
                        value = "G_40mm_SmokeBlue";
                    };
                    class G_40mm_SmokeOrange
                    {
                        name = "GL - 40mm Smoke Orange"; 
                        value = "G_40mm_SmokeOrange";
                    };
                    
                    // 40mm flares
                    class F_40mm_White
                    {
                        name = "GL - 40mm Flare White"; 
                        value = "F_40mm_White";
                    };
                    class F_40mm_Red
                    {
                        name = "GL - 40mm Flare Red"; 
                        value = "F_40mm_Red";
                    };
                    class F_40mm_Green
                    {
                        name = "GL - 40mm Flare Green"; 
                        value = "F_40mm_Green";
                    };
                    class F_40mm_Yellow
                    {
                        name = "GL - 40mm Flare Yellow"; 
                        value = "F_40mm_Yellow";
                    };
                    
                    // 40mm HE
                    class G_40mm_HE
                    {
                        name = "GL - 40mm HE Grenade"; 
                        value = "G_40mm_HE";
                    };

                    // 82mm HE and Smoke
                    class Smoke_82mm_AMOS_White
                    {
                        name = "Mortar - 82mm Smoke White"; 
                        value = "Smoke_82mm_AMOS_White";
                    };
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
                "Bombardment will start immediately when not activated by trigger.",
                "When not synced, and no marker is provided, bombardment is centered in radius around module position.",
                "Target an object by syncing it to the module.",
                "Or use area/marker for bombardment. IE: provide module with marker name.",
                "Tick the follow checkbox for bombardment to follow synced entity/object.",
                "Tick the 'Use trigger area' checkbox to use the tigger's area for bombardment.  Marker takes precedence (use trigger is ignored) if marker is entered."
            }; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
            duplicate = 1; // Multiple entities of this type can be synced
            position = 1;
		};
    };

};