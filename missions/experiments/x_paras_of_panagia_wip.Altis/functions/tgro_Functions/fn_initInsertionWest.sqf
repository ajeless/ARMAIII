null = [] spawn {

	_objective = getMissionConfigValue "GlobalObjectiveMarker";
	_iSpawnMinDis = getMissionConfigValue "InsertSpawnMinDist";
	_iSpawnAvgDis = getMissionConfigValue "InsertSpawnAvgDist";
	_iSpawnMaxDis = getMissionConfigValue "InsertSpawnMaxDist";

	_dropMinDist = getMissionConfigValue "DropMinDist";
	_dropAvgDist = getMissionConfigValue "DropAvgDist";
	_dropMaxDist= getMissionConfigValue "DropMaxDist";
	_timeBetweenJumpsMin = getMissionConfigValue "TimeBetweenJumpsMin";
	_timeBetweenJumpsAvg = getMissionConfigValue "TimeBetweenJumpsAvg";
	_timeBetweenJumpsMax = getMissionConfigValue "TimeBetweenJumpsMax";
	_distanceCheckFrequencyMin = getMissionConfigValue "DistanceCheckFrequencyMin";
	_distanceCheckFrequencyAvg = getMissionConfigValue "DistanceCheckFrequencyAvg";
	_distanceCheckFrequencyMax = getMissionConfigValue "DistanceCheckFrequencyMax";


	_insertTeamDropped = false;

	// Pick a location in the panagia objective marker at random
	_panagiaRndLoc = [_objective] call tgro_fnc_getRndLoc;

	// Make that ^^ the center and pick a spawn location anywhere in a 360 degree radius
	_insertSpawnPos = [_panagiaRndLoc, _iSpawnMinDis, _iSpawnAvgDis, _iSpawnMaxDis] call tgro_fnc_getRndLocRel;

	// Create the insertion vehicle and load teams in
	_insertAirFrame = [_insertSpawnPos] call tgro_fnc_spawnPlayerBlackfish;
	_airFramePasengerCapacity = [_insertAirFrame] call tgro_fnc_getVehiclePassengerCapacity;
	_insertionTeams = [] call tgro_fnc_createInsertionTeams;
	[_insertionTeams, _insertAirFrame] call tgro_fnc_loadInsertTeamsInVehicles;

	_dropDistanceSelected = random [_dropMinDist, _dropAvgDist, _dropMaxDist];

	while {!_insertTeamDropped} do {
		sleep random [_distanceCheckFrequencyMin, _distanceCheckFrequencyAvg, _distanceCheckFrequencyMax];
		_distanceToDZ = _insertAirFrame distance (getMarkerPos _objective);

		if (_distanceToDZ <= _dropDistanceSelected) then {
			{
				if ( ((assignedVehicleRole _x) select 0) == "Cargo" ) then {
					systemChat format["%1", assignedVehicleRole _x];
					moveOut _x;
					sleep random [.025, .05, .075];
					_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
					_sp setPos getPos _x; 
					_x moveIndriver _sp; 
					sleep (random [_timeBetweenJumpsMin, _timeBetweenJumpsAvg, _timeBetweenJumpsMax]);
				};
			} forEach crew _insertAirFrame;
			_insertTeamDropped = true;
		};
	};

	{ 
		private _rndPosPanagia = [[_objective], ["water"]] call BIS_fnc_randomPos;
		_wp = _x addWaypoint [_rndPosPanagia, 0];
		_wp setWaypointType "HOLD";
		_wp setWaypointSpeed "FULL";
	} forEach _insertionTeams;
};