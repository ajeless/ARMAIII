_fleeing = getMissionConfigValue "FLEEING";
_courage = getMissionConfigValue "COURAGE";
_aimingAccuracy = getMissionConfigValue "AIMING_ACCURACY";
_aimingShake = getMissionConfigValue "AIMING_SHAKE";
_aimingSpeed = getMissionConfigValue "AIMING_SPEED";
_reloadSpeed = getMissionConfigValue "AIMING_SPEED"; 

params ["_spawnPosition"];

_spawnAirFrame = getMissionConfigValue "InsertAirFrame";
_spawnAltitude = getMissionConfigValue "InsertSpawnAlt";
_objective = getMissionConfigValue "GlobalObjectiveMarker";

_airFramePos = [_spawnPosition, _spawnAltitude] call BIS_fnc_arrayPush;

_airFrame =  createVehicle [_spawnAirFrame, _airFramePos, [], 0, "FLY"];
_airFrame setPosASL _airFramePos;
_crew = createVehicleCrew _airFrame;

_dzPos = [_objective] call tgro_fnc_getRndLoc;

_relDir = _airFrame getRelDir _dzPos;
_airFrame setDir _relDir;

_wp1 = _crew addWaypoint [_dzPos, 0];
_wp1 setWaypointType "MOVE";
_wp1 setWaypointSpeed "FULL";

_wp2 = _crew addWaypoint [[30231 ,387, 2000], 0];
_wp2 setWaypointType "MOVE";
_wp2 setWaypointSpeed "LIMITED";

[
	units _crew, 
	[
		_fleeing, 
		_courage, 
		_aimingAccuracy, 
		_aimingShake, 
		_aimingSpeed, 
		_reloadSpeed
	]
] call tgro_fnc_setUnitSkills;

_airFrame;