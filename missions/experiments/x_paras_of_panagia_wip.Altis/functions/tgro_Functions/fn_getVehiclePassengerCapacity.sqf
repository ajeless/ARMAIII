_vehicleClass = getMissionConfigValue "InsertAirFrame";

_fullComplement = [_vehicleClass, true] call BIS_fnc_crewCount;
_justCrew = [_vehicleClass, false] call BIS_fnc_crewCount;

_fullComplement - _justCrew;