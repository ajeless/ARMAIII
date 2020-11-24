class CfgPatches
{
	class TGRO_Addons
	{
		units[] = {
            "TGRO_HelloWorld", 
            "TGRO_RandomArtillery"
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
		displayName = "Toogro Modules";
	};
};

class CfgFunctions {
    class TGRO {
        class TGRO_Modules {

            file = "\TGRO_Addons\functions";

            class helloWorld {
                description = "Hello world for figuring out module mechanincs";
            };

            class RandomArtillery {
                description = "Drops objects onto the map!";
            };
        };
    };
};

class CfgVehicles{
    class Logic;
    class Module_F: Logic {
    };

    class TGRO_HelloWorld: Module_F {
        // Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Hello World"; // Name displayed in the menu
        category = "TGRO_Modules";
        function = "TGRO_fnc_helloWorld";
    };

    class TGRO_RandomArtillery: Module_F {
        // Standard object definitions
		scope = 2; // Editor visibility; 2 will show it in the menu, 1 will hide it.
        displayName = "Random Artillery"; // Name displayed in the menu
        category = "TGRO_Modules";
        function = "TGRO_fnc_randomArtillery";
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
		isDisposable = 1;

        class Arguments
        {
            class ObjectClass 
            {
                displayName = "Artillery Classes";
                description = "Type of ordnance dropped";
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
            class NumberOfShells 
            {
                displayName = "# Shells/Bombs";
                description = "Number of shells to be dropped";
                typeName = "NUMBER";
            };
            class DropHeight 
            {
                displayName = "Drop Height";
                description = "Height from which ordnance is to be dropped";
                typeName = "NUMBER";
            };
            class RandomDelayMax 
            {
                displayName = "Random Delay Max";
                description = "Random delay between 0 to Max";
                typeName = "NUMBER";
            };
        };
    };
};