class CfgPatches
{
    class TGRO_Addons
    {
        units[] = 
        {
            "TGRO_ModuleRandomArtilleryOnArea",
            "TGRO_ModuleRandomArtilleryOnTarget"
        };
        requiredVersion = 0.01;
        requiredAddons[] = {"A3_Modules_F"};
    };
};

class CfgFactionClasses
{
    class NO_CATEGORY;
    class TGRO_Modules: NO_CATEGORY
    {
        displayName = "Toogro's Modules";
    };
};

class CfgFunctions 
{
    class TGRO 
    {
        class TGRO_Modules {

            file = "\TGRO_Addons\functions";

            class moduleRandomArtilleryOnArea {
                description = "Drops artillery randomly on designated areas on the map";
            };

            class moduleRandomArtilleryOnTarget {
                description = "Drops artillery randomly in a radius around selected targets";
            };
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

    class TGRO_ModuleRandomArtilleryOnArea: Module_F
    {
        scope = 2;
        displayName = "Random Artillery on Area"; 
        category = "TGRO_Modules";
        function = "TGRO_fnc_moduleRandomArtilleryOnArea";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
		isDisposable = 1;

        class Attributes: AttributesBase
        {
            class Units: Units
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_Units";
            };

            class Persistent: Checkbox 
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_Persistent";
                displayName = "Persistent/Ambient/Constant";
                tooltip = "Persistent ordnance dropped throughout the mission.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class MarkerAreas: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_MarkerAreas";
                displayName = "Marker(s)";
                tooltip = "Marker(s) area(s) to drop ordnance";
                typeName = "ARRAY";
                defaultValue = [];
            };

            class ObjectClass: Combo
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_ObjectClass";
                displayName = "Ordnance Classes";
                tooltip = "Type of ordnance dropped";
                typeName = "STRING";
                defaultValue = "Bo_Mk82";
                class values 
                {
                    class Bo_Mk82 
                    {
                        name = "Mk82 - 500lb HE, unguided bomb"; 
                        value = "Bo_Mk82";
                        default = 1;
                    };
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
                    class Sh_82mm_AMOS
                    {
                        name = "Mortar - 82mm HE Shells"; 
                        value = "Sh_82mm_AMOS";
                    };
                    class Smoke_82mm_AMOS_White
                    {
                        name = "Mortar - 82mm Smoke White"; 
                        value = "Smoke_82mm_AMOS_White";
                    };
                };
            };
            class NumberOfShells: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_NumberOfShells";
                displayName = "# Shells/Bombs";
                tooltip = "Number of shells to be dropped";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class DropHeight: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_DropHeight";
                displayName = "Drop Height";
                tooltip = "Height from which ordnance is to be dropped";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class RandomDelayMax: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_RandomDelayMax";
                displayName = "Random Delay Max (seconds)";
                tooltip = "Random delay in seconds between 0 to Max";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class ModuleDescription: ModuleDescription
			{
			};
        };
        class ModuleDescription: ModuleDescription
		{
			description[] = 
            {
                "Drop artillery/ordnance on an area defined in the editor",
                "May be triggered, or persistent, or both"
            }; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
            duplicate = 1; // Multiple entities of this type can be synced
		};
    }; 

    class TGRO_ModuleRandomArtilleryOnTarget: Module_F
    {
        scope = 2;
        displayName = "Random Artillery on Target"; 
        category = "TGRO_Modules";
        function = "TGRO_fnc_moduleRandomArtilleryOnTarget";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
		isDisposable = 1;

        class Attributes: AttributesBase
        {
            class Units: Units
            {
                property = "TGRO_ModuleRandomArtilleryOnTarget_Units";
            };

            class Persistent: Checkbox 
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_Persistent";
                displayName = "Persistent/Ambient/Constant";
                tooltip = "Persistent ordnance dropped throughout the mission.";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class Follow: Checkbox 
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_Follow";
                displayName = "Track/Follow Target";
                tooltip = "Follows/tracks target for duration of bombardment";
                typeName = "BOOLEAN";
                defaultValue = false;
            };

            class ObjectClass: Combo
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_ObjectClass";
                displayName = "Ordnance Classes";
                tooltip = "Type of ordnance dropped";
                typeName = "STRING";
                defaultValue = "Bo_Mk82";
                class values 
                {
                    class Bo_Mk82 
                    {
                        name = "Mk82 - 500lb HE, unguided bomb"; 
                        value = "Bo_Mk82";
                        default = 1;
                    };
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
                    class Sh_82mm_AMOS
                    {
                        name = "Mortar - 82mm HE Shells"; 
                        value = "Sh_82mm_AMOS";
                    };
                    class Smoke_82mm_AMOS_White
                    {
                        name = "Mortar - 82mm Smoke White"; 
                        value = "Smoke_82mm_AMOS_White";
                    };
                };
            };
            class NumberOfShells: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_NumberOfShells";
                displayName = "# Shells/Bombs";
                tooltip = "Number of shells to be dropped";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class DropHeight: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_DropHeight";
                displayName = "Drop Height";
                tooltip = "Height from which ordnance is to be dropped";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class RandomDelayMax: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_RandomDelayMax";
                displayName = "Random Delay Max (seconds)";
                tooltip = "Random delay in seconds between 0 to Max";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class MaxDistanceToTarget: Edit
            {
                property = "TGRO_ModuleRandomArtilleryOnArea_MaxDistanceToTarget";
                displayName = "Max Distance/Radius (meters)";
                tooltip = "Random distance in meters (radius) around target between 0 to Max";
                typeName = "NUMBER";
                defaultValue = 0;
            };
            class ModuleDescription: ModuleDescription
			{
			};
        };

        class ModuleDescription: ModuleDescription
		{
			description[] = 
            {
                "Drop artillery/ordnance at random in a radius around designated targets",
                "May be triggered, or persistent, or both"
            }; // Short description, will be formatted as structured text
			sync[] = {"LocationArea_F"}; // Array of synced entities (can contain base classes)
            duplicate = 1; // Multiple entities of this type can be synced
		};
    };
};