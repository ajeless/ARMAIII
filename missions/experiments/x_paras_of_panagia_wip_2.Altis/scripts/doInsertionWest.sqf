private _insertTeamsDropped = false;
private _dz = waypointPosition [IVehicleCrew, 1];
private _dropTimingDistance = random [DropMinDist, DropAvgDist, DropMaxDist];

while {!_insertTeamsDropped} do {

	sleep random [DistanceCheckFrequencyMin, DistanceCheckFrequencyAvg, DistanceCheckFrequencyMax];
	_distanceToDZ = IVehicleAirFrame distance _dz;

	if (_distanceToDZ <= _dropTimingDistance) then {

		{
			unassignVehicle _x;
			moveOut _x;
			sleep random [.5, 1, 2];
			_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
			_sp setPos getPos _x; 
			_x moveIndriver _sp; 
			sleep random [TimeBetweenJumpsMin, TimeBetweenJumpsAvg, TimeBetweenJumpsMax];
		} forEach allPlayers;
			
		{
			_iTeamGroup = _x;
			{
				unassignVehicle _x;
				moveOut _x;
				private _unitPos = getPos _x;
				private _unitPosX = _unitPos select 0;
				private _unitPosY = _unitPos select 1;
				private _unitPosZ = (_unitPos select 2) - 10;
				private _dropPos = [_unitPosX, _unitPosY, _unitPosZ];
				_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
				_x setPos _dropPos;
				_sp setPos _dropPos; 
				_x moveIndriver _sp; 
				sleep random [TimeBetweenJumpsMin, TimeBetweenJumpsAvg, TimeBetweenJumpsMax];	
			} forEach units _iTeamGroup;
		} forEach [IteamAlpha1, IteamAlpha2, IteamAlpha3];
			_insertTeamsDropped = True;
	};
};

private _iTeam1TargetObj = [[GlobalObjective]] call BIS_fnc_randomPos;
private _iTeam2TargetObj = [[GlobalObjective]] call BIS_fnc_randomPos;
private _iTeam3TargetObj = [[GlobalObjective]] call BIS_fnc_randomPos;

private _wp1 = IteamAlpha1 addWaypoint [_iTeam1TargetObj, 0];
_wp1 setWaypointType "HOLD";
_wp1 setWaypointSpeed "FULL";

private _wp2 = IteamAlpha2 addWaypoint [_iTeam2TargetObj, 0];
_wp2 setWaypointType "HOLD";
_wp2 setWaypointSpeed "FULL";

private _wp3 = IteamAlpha3 addWaypoint [_iTeam3TargetObj, 0];
_wp3 setWaypointType "HOLD";
_wp3 setWaypointSpeed "FULL";

waitUntil { 
	_distanceToDZ = IVehicleAirFrame distance _dz;
	_distanceToDZ >= 2000;
 };
{
	deleteVehicle _x;
} forEach units IVehicleCrew;

deleteVehicle IVehicleAirFrame;
