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

    #include "modules\TGRO_ModuleRandomArtillery.hpp"
    #include "modules\TGRO_ModuleRandomSmokeAndFlares.hpp"
    #include "modules\TGRO_ModuleRandomCarnage.hpp"
};