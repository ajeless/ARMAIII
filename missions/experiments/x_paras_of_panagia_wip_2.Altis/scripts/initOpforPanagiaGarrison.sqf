private _numTeams = round random [2, 4, 6];
private _numDudes = 0;
private _group = nil;
private _groupClasses = nil;
private _groups = [];

for "_i" from 1 to _numTeams do {
	_numDudes = round random [8, 10, 12];
	_group = createGroup EAST;
	_groupClasses = [];

	for "_i" from 1 to _numDudes do {
		private _unit = selectRandom IonMen;
		_unit createUnit [[[GlobalObjective], ["water"]] call BIS_fnc_randomPos, _group];
	};

	[_groups, _group] call BIS_fnc_arrayPush;
};

{
	_group = _x;
	{
		private _unit = _x;
		_unit setSkill ["aimingAccuracy", .2];
		_unit setSkill ["aimingShake", .2];
		_unit setSkill ["aimingSpeed", .2];
		_unit setSkill ["courage", 1];
		_unit setSkill ["reloadSpeed", .2];
	} forEach units _group;
	_group allowFleeing 0;
} forEach _groups;

IonGroups = _groups;

 _objective = [[GlobalObjective]] call BIS_fnc_randomPos;

private _veh = (selectRandom IonVehicles) createVehicle _objective;
_crew = createVehicleCrew _veh;
IonVehicleCrew = createGroup EAST;

{
		[_x] joinSilent IonVehicleCrew;
} forEach units _crew;

