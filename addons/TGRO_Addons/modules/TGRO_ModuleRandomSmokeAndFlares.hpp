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