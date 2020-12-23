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