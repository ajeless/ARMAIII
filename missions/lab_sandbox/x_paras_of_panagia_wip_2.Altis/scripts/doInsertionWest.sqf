private _insertTeamsDropped = false;
private _dz = waypointPosition [IVehicleCrew, 1];
private _dropTimingDistance = random [DropMinDist, DropAvgDist, DropMaxDist];

while {!_insertTeamsDropped} do {

	sleep random [DistanceCheckFrequencyMin, DistanceCheckFrequencyAvg, DistanceCheckFrequencyMax];
	_distanceToDZ = IVehicleAirFrame distance _dz;

	if (_distanceToDZ <= 2000) then {
		if (FlakInProgress) then {
			FlakInProgress = false;
			[] spawn {
				[IVehicleAirFrame, "SatchelCharge_Remote_Ammo", 1000, 2] call TGRO_fnc_generateFlak;
			};
		};
	};

	if (_distanceToDZ <= _dropTimingDistance) then {

		{
			unassignVehicle player;
			moveOut player;
			sleep random [.5, 1, 2];
			_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
			_sp setPos getPos player; 
			player moveIndriver _sp; 
			sleep random [TimeBetweenJumpsMin, TimeBetweenJumpsAvg, TimeBetweenJumpsMax];
		} remoteExec ["bis_fnc_call", 0];
		
		// {
		// 	unassignVehicle _x;
		// 	moveOut _x;
		// 	sleep random [.5, 1, 2];
		// 	_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
		// 	_sp setPos getPos _x; 
		// 	_x moveIndriver _sp; 
		// 	sleep random [TimeBetweenJumpsMin, TimeBetweenJumpsAvg, TimeBetweenJumpsMax];
		// } forEach allPlayers;
			
		{
			_iTeamGroup = _x;
			{
				[_x] call TGRO_fnc_paraDropUnit;
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
