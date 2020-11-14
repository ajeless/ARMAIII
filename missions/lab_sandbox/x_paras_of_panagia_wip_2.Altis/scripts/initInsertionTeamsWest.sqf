// set initial target and spawn positions
private _targetPos = [[GlobalObjective]] call BIS_fnc_randomPos;
private _iSpawnPos2D = [_targetPos, ISpawnDist select 0, ISpawnDist select 1, 0, 1] call BIS_fnc_findSafePos; 
private _iSpawnPos3D = [_iSpawnPos2D, ISpawnAlt] call  BIS_fnc_arrayPush;

// spawn player and blufor insertion vehicle, create crew and set waypoints
IVehicleAirFrame =   createVehicle [InsertionVehicle, _iSpawnPos3D, [], 0, "Fly"];
IVehicleAirFrame allowDamage false;
IVehicleCrew = createVehicleCrew IVehicleAirFrame;

{
	_x allowDamage false;
} forEach units IVehicleCrew;

private _relDir = IVehicleAirFrame getRelDir _targetPos;
IVehicleAirFrame setDir _relDir;

private _wp1 = IVehicleCrew addWaypoint [_targetPos, 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointSpeed "LIMITED";

private _wp2 = IVehicleCrew addWaypoint [[30000, 100, 2000], 0];
_wp2 setWaypointBehaviour "CARELESS";
_wp2 setWaypointType "MOVE";
_wp2 setWaypointSpeed "FULL";

// create insertion groups and set skills
private _insertionGroups = [
	[IteamAlpha1,IteamAlpha1Classes],
	[IteamAlpha2,IteamAlpha2Classes],
	[IteamAlpha3,IteamAlpha3Classes]
];

private _unit_x = nil;
private _iGroup = nil;
private _iUnits = nil;

{
	_iGroup = _x select 0;
	_iUnits = _x select 1;
	{
		_unit_x = _iGroup createunit [_x, [23580, 18378],  [], 0, "FORM"]; 
		_unit_x setSkill ["aimingAccuracy", .2];
		_unit_x setSkill ["aimingShake", .2];
		_unit_x setSkill ["aimingSpeed", .2];
		_unit_x setSkill ["courage", 1];
		_unit_x setSkill ["reloadSpeed", .2];
	} forEach _iUnits;
	_iGroup allowFleeing 0;
} forEach _insertionGroups;

// load insertion groups in vehicles
{
	_x moveInCargo IVehicleAirFrame;
} forEach allPlayers;

private _vehicleGroups = [IteamAlpha1, IteamAlpha2, IteamAlpha3];

{  
	_units = units _x;
	{
		_x moveInCargo IVehicleAirFrame;
	} forEach _units;
} forEach _vehicleGroups;