params ["_module", "_units", "_activated"];

private _synchronizedObjects = synchronizedObjects _module;
private _syncrhonizedObjectsCount = count _synchronizedObjects;
private _markerArea = _module getVariable ["MarkerArea", objNull];
private _hasMarker = false;
private _hasTarget = false;
private _hasTrigger = false;
private _persistent = _module getVariable "Persistent";
private _follow = _module getVariable "Follow";
private _trigIsZone = _module getVariable "TrigIsZone";
private _radius = _module getVariable "Radius";
private _shells = _module getVariable "Shells";
private _altitude = _module getVariable "Altitude";
private _delay = _module getVariable "Delay";
private _target = nil;
private _triggerArea = nil;
private _ordnance = [];

if ( (_module getVariable "G_40mm_Smoke") == true ) then {
	_ordnance pushBack "G_40mm_Smoke";
};

if ( (_module getVariable "G_40mm_SmokeRed") == true ) then {
	_ordnance pushBack "G_40mm_SmokeRed";
};

if ( (_module getVariable "G_40mm_SmokeGreen") == true ) then {
	_ordnance pushBack "G_40mm_SmokeGreen";
};

if ( (_module getVariable "G_40mm_SmokeYellow") == true ) then {
	_ordnance pushBack "G_40mm_SmokeYellow";
};

if ( (_module getVariable "G_40mm_SmokePurple") == true ) then {
	_ordnance pushBack "G_40mm_SmokePurple";
};

if ( (_module getVariable "G_40mm_SmokeBlue") == true ) then {
	_ordnance pushBack "G_40mm_SmokeBlue";
};

if ( (_module getVariable "G_40mm_SmokeOrange") == true ) then {
	_ordnance pushBack "G_40mm_SmokeOrange";
};

if ( (_module getVariable "F_40mm_White") == true ) then {
	_ordnance pushBack "F_40mm_White";
};

if ( (_module getVariable "F_40mm_Red") == true ) then {
	_ordnance pushBack "F_40mm_Red";
};

if ( (_module getVariable "F_40mm_Green") == true ) then {
	_ordnance pushBack "F_40mm_Green";
};

if ( (_module getVariable "F_40mm_Yellow") == true ) then {
	_ordnance pushBack "F_40mm_Yellow";
};

if ( (_module getVariable "Smoke_82mm_AMOS_White") == true ) then {
	_ordnance pushBack "Smoke_82mm_AMOS_White";
};

{
	if ( count((getModelInfo _x) select 0) !=  0 ) then 
	{
		_target = _x;
		_hasTarget = true;
	} else {
		_triggerArea = _x;
		_hasTrigger = true;
	};
} forEach _synchronizedObjects;

if ( !(_markerArea == "") ) then 
{
	_hasMarker = true;
};

// sanity checks
if (_syncrhonizedObjectsCount > 2) exitWith 
{
	hint "Error: TGRO_ModuleRandomSmokeAndFlares. Cannot sync more than 2 entities.";
};

if ( (_syncrhonizedObjectsCount == 2) AND !_hasTarget ) exitWith {
	hint "Error: TGRO_ModuleRandomSmokeAndFlares. If 2 entities are synced, one must be target object and the other a trigger.";
};

if ( (_syncrhonizedObjectsCount == 2) AND !_hasTrigger ) exitWith {
	hint "Error: TGRO_ModuleRandomSmokeAndFlares. If 2 entities are synced, one must be target object and the other a trigger.";
};

if (_hasTarget AND _hasMarker) exitWith {
	hint "Error: TGRO_ModuleRandomSmokeAndFlares. Cannot specify marker while target synced.  Choose either marker area or target entity.";
};

// do artillery bombardment no synced entities
if (_syncrhonizedObjectsCount == 0) then {
	if (_hasMarker) then { // drop in marker area
		[_persistent, _shells, _altitude, _delay, _ordnance, _markerArea] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnArea.sqf";
	} else { // target module position
		[_persistent, _follow, _shells, _altitude, _delay, _ordnance, _radius, _module] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnTarget.sqf";
	};
};

// do artillery bombardment 1 synced entity
if (_syncrhonizedObjectsCount == 1) then {
	if (_hasTarget) then { // drop artillery on target
		[_persistent, _follow, _shells, _altitude, _delay, _ordnance, _radius, _target] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnTarget.sqf";
	} else { // assume trigger synced - marker takes precedence over trigger if exists
		if (_hasMarker) then { // drop in marker area
			[_persistent, _shells, _altitude, _delay, _ordnance, _markerArea] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnArea.sqf";
		} else {
			if (_trigIsZone) then { // use the trigger area as the artillery area
				[_persistent, _shells, _altitude, _delay, _ordnance, _triggerArea] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnArea.sqf";
			} else { // default to using the module and it's radius
				[_persistent, _follow, _shells, _altitude, _delay, _ordnance, _radius, _module] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnTarget.sqf";
			};
		};
	};
};

// do artillery bombardment 2 synced entities
if (_syncrhonizedObjectsCount == 2) then { // drop artillery on target
	[_persistent, _follow, _shells, _altitude, _delay, _ordnance, _radius, _target] execVM "\TGRO_Addons\scripts\randomSmokeFlareOnTarget.sqf";
};