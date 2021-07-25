class CfgPatches
{
	class ACME
	{
		// Meta information for editor
		name = "ACME";
		author = "Me";
		url = "https://github.com/ajeless/ARMAIII";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game. Note: was disabled on purpose some time late into Arma 2: OA.
		requiredVersion = .01; 

		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = { "A3_Functions_F", "CBA_main" };
		
        // List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {};
		
        // List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgFunctions
{
    class ACME
    {

        class ACME_Modules
        {
            file = "\ACME\functions";

            class setPlayerLoadout{};
			class updatePlayerLoadout{};
        };
    };
};