		// spawn and initialize group 1 and vehicle
		private _sp1 = [[FriendlySpawnSupportMarker], ["water"]] call BIS_fnc_randomPos;
		private _g1Vehicle = selectRandom ETeamVehicleClasses;
		{
			private _unitClass = _x;
			private _unit_x = ETeamAlpha1 createUnit [_unitClass, _sp1,  [], 0, "FORM"];
			_unit_x setSkill ["aimingAccuracy", .2];
			_unit_x setSkill ["aimingShake", .2];
			_unit_x setSkill ["aimingSpeed", .2];
			_unit_x setSkill ["courage", 1];
			_unit_x setSkill ["reloadSpeed", .2];
		} forEach ETeamAlpha1Classes;

		private _g1VehiclePos = [getPos ( (units ETeamAlpha1) select 0 ), 50, 150] call BIS_fnc_findSafePos;
		private _g1VehicleFrame = _g1Vehicle createVehicle _g1VehiclePos;
		private _g1VehcileCrew = createVehicleCrew _g1VehicleFrame;

		// spawn and initialize group 2 and vehicle
		private _sp2 = [[FriendlySpawnSupportMarker], ["water"]] call BIS_fnc_randomPos;
		private _g2Vehicle = selectRandom ETeamVehicleClasses;
		{
			private _unitClass = _x;
			private _unit_x = ETeamAlpha2 createUnit [_unitClass, _sp2,  [], 0, "FORM"];
			_unit_x setSkill ["aimingAccuracy", .2];
			_unit_x setSkill ["aimingShake", .2];
			_unit_x setSkill ["aimingSpeed", .2];
			_unit_x setSkill ["courage", 1];
			_unit_x setSkill ["reloadSpeed", .2];
		} forEach ETeamAlpha2Classes;

		private _g2VehiclePos = [getPos ( (units ETeamAlpha2) select 0 ), 50, 150] call BIS_fnc_findSafePos;
		private _g2VehicleFrame = _g2Vehicle createVehicle _g2VehiclePos;
		private _g2VehcileCrew = createVehicleCrew _g2VehicleFrame;

		// spawn and initialize group 3 and vehicle
		private _sp3 = [[FriendlySpawnSupportMarker], ["water"]] call BIS_fnc_randomPos;
		private _g3Vehicle = selectRandom ETeamVehicleClasses;
		{
			private _unitClass = _x;
			private _unit_x = ETeamAlpha3 createUnit [_unitClass, _sp3,  [], 0, "FORM"];
			_unit_x setSkill ["aimingAccuracy", .2];
			_unit_x setSkill ["aimingShake", .2];
			_unit_x setSkill ["aimingSpeed", .2];
			_unit_x setSkill ["courage", 1];
			_unit_x setSkill ["reloadSpeed", .2];
		} forEach ETeamAlpha3Classes;

		private _g3VehiclePos = [getPos ( (units ETeamAlpha3) select 0 ), 50, 150] call BIS_fnc_findSafePos;
		private _g3VehicleFrame = _g3Vehicle createVehicle _g3VehiclePos;
		private _g3VehcileCrew = createVehicleCrew _g3VehicleFrame;

		[ETeamVehicleGroupCrews, _g1VehcileCrew] call BIS_fnc_arrayPush;
		[ETeamVehicleGroupCrews, _g2VehcileCrew] call BIS_fnc_arrayPush;
		[ETeamVehicleGroupCrews, _g3VehcileCrew] call BIS_fnc_arrayPush;

		private _earlySupportTeams = [ETeamAlpha1, ETeamAlpha2, ETeamAlpha3];

		{
			private _wpPos = [[GlobalObjective], ["water"]] call BIS_fnc_randomPos;
			private _wp = _x addWaypoint[_wpPos, 0];
			_wp setWaypointType "HOLD";
		} forEach _earlySupportTeams;

		{
			private _vZone = selectRandom PanagiaVZones; 
			private _vWpPos = [[_vZone], ["water"]] call BIS_fnc_randomPos;
			private _vWp = _x addWaypoint [_vWpPos, 0];
			_vWp setWaypointType "MOVE";
		} forEach ETeamVehicleGroupCrews;