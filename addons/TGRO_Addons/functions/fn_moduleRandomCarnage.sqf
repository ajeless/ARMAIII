params ["_module", "_units", "_activated"];
private [ "_center", "_radius", "_markerArea", "_corpses", "_wrecks", "_fires", "_smolderingBodies"];

_center = getPos _module;
_radius = _module getVariable "Radius";
_markerArea = _module getVariable "MarkerArea";
_corpses = _module getVariable "Corpses";
_wrecks = _module getVariable "Wrecks";
_fires = _module getVariable "FiresPercent";
_smolderingBodies = _module getVariable "SmolderingBodiesPercent";

if (_activated) then {
	if ( !(_markerArea == "") ) then {
		[_markerArea, _corpses, _wrecks, _fires, _smolderingBodies] execVM "\TGRO_Addons\scripts\randomCarnageInArea.sqf";
	} else {
		[_center, _radius, _corpses, _wrecks, _fires, _smolderingBodies] execVM "\TGRO_Addons\scripts\randomCarnageInRadius.sqf";
	};
};