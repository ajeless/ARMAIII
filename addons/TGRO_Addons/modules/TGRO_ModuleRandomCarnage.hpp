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