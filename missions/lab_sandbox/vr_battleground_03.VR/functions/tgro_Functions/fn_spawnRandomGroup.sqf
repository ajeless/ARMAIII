params ["_groups"];
_randomElement = round (random (count _groups));
_grp = [getPos player, EAST, _groups select _randomElement] call BIS_fnc_spawnGroup;

{
	// systemChat format ["%1", _x];
} forEach units _grp;
_grp;
