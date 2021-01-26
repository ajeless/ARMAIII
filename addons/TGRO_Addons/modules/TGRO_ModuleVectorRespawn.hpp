class TGRO_ModuleVectorRespawn: Module_F
{
    scope = 2;
    displayName = "Vector Respawn";
    category = "TGRO_Modules";
    function = "TGRO_fnc_moduleVectorRespawn";
    functionPriority = 1;
    isGlobal = 0;
    isTriggerActivated = 0;
    isDisposable = 1;
    icon="\a3\Modules_f\data\iconRespawn_ca.paa";
	portrait="\a3\Modules_f\data\portraitRespawn_ca.paa";

    class Attributes: AttributesBase
    {
        class SpawnArc: Edit
        {
            property = "TGRO_ModuleVectorRespawn_SpawnArc";
            displayName = "Spawn arc(deg.)";
            tooltip = "Maximum Arc/degrees in the direction of player's initial position that is the direction for the spawn vector.";
            typeName = "NUMBER";
            defaultValue = 75;
        };

        class MinDist: Edit
        {
            property = "TGRO_ModuleVectorRespawn_MinDist";
            displayName = "Min distance(m)";
            tooltip = "The minimum distance along the spawn vector to place the spawn point.";
            typeName = "NUMBER";
            defaultValue = 75;
        };

        class AvgDist: Edit
        {
            property = "TGRO_ModuleVectorRespawn_AvgDist";
            displayName = "Avg distance(m)";
            tooltip = "The average distance along the spawn vector to place the spawn point.";
            typeName = "NUMBER";
            defaultValue = 125;
        };

        class MaxDist: Edit
        {
            property = "TGRO_ModuleVectorRespawn_MaxDist";
            displayName = "Max distance(m)";
            tooltip = "The maximum distance along the spawn vector to place the spawn point.";
            typeName = "NUMBER";
            defaultValue = 175;
        };

        class PreserveLoadout: Checkbox   
        {
            property = "TGRO_ModuleVectorRespawn_PreserveLoadout";
            displayName = "PreserveLoadout";
            tooltip = "Player respawns with inventory they had at time of death.  Ammo gets used up over course of mission, etc...";
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
            "Vector Respawn",  
            " ",
            "Add description here."
        };
        sync[] = {"LocationArea_F"};
        duplicate = 1;
        position = 1;
    };
};