waitUntil {
	sleep 1;
	!isNil {IonVehicleCrew;};
};

{
	private _group = _x;
	private _objective = [[GlobalObjective]] call BIS_fnc_randomPos;

	private _wp = _group addWaypoint[ _objective, 0];
	_wp setWaypointType "HOLD";
	
} forEach IonGroups;

private _vZone = selectRandom PanagiaVZones;
private _vWpPos = [[_vZone], ["water"]] call BIS_fnc_randomPos;
private _opforVehicleWaypoint = [getMarkerPos GlobalObjective, 50, 150] call BIS_fnc_findSafePos;
private _oVehWp1 = IonVehicleCrew addWaypoint [_vWpPos, 0];
_oVehWp1 setWaypointType "HOLD";