InsertionVehicle = IV1;
PanagiaObjectivePos = getMarkerPos "PANAGIA_OBJECTIVE";
private _randomPos = [[[PanagiaObjectivePos, random[3000, 5000, 7000]]],[]] call BIS_fnc_randomPos;
_randomPos set [2, 300];

waitUntil 
{
	((getPos InsertionVehicle) select 2) >= 50;
};

InsertionVehicle setPosATL _randomPos;
