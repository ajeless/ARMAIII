null = [] spawn {
	_objective = getMissionConfigValue "GlobalObjectiveMarker";
	_fleeing = getMissionConfigValue "FLEEING";
	_courage = getMissionConfigValue "COURAGE";
	_aimingAccuracy = getMissionConfigValue "AIMING_ACCURACY";
	_aimingShake = getMissionConfigValue "AIMING_SHAKE";
	_aimingSpeed = getMissionConfigValue "AIMING_SPEED";
	_reloadSpeed = getMissionConfigValue "AIMING_SPEED"; 

	private _ion_men = [
		"CUP_I_PMC_Bodyguard_AA12",
		"CUP_I_PMC_Bodyguard_M4",
		"CUP_I_PMC_Contractor1",
		"CUP_I_PMC_Contractor2",
		"CUP_I_PMC_Sniper",
		"CUP_I_PMC_Medic",
		"CUP_I_PMC_Soldier_MG",
		"CUP_I_PMC_Soldier_MG_PKM",
		"CUP_I_PMC_Soldier_AT",
		"CUP_I_PMC_Engineer",
		"CUP_I_PMC_Soldier_M4A3",
		"CUP_I_PMC_Soldier",
		"CUP_I_PMC_Soldier_GL",
		"CUP_I_PMC_Soldier_GL_M16A2",
		"CUP_I_PMC_Crew",
		"CUP_I_PMC_Pilot",
		"CUP_I_PMC_Sniper_KSVK",
		"CUP_I_PMC_Soldier_AA",
		"CUP_I_PMC_Soldier_TL"
	];

	private _numberOfTeams = round ( random [2, 4, 6] );
	private _numDudes = 0;

	while {_numberOfTeams > 0} do {

		_numDudes = round (random [6, 9, 12]);
		_group = createGroup EAST;

		_groupClasses = [];

		while {_numDudes > 0} do {
			_currentUnit = selectRandom _ion_men;
			_currentUnit createUnit  [[[_objective], ["water"]] call BIS_fnc_randomPos, _group];
			_numDudes = _numDudes - 1;
		};

		[
			units _group, 
			[
				_fleeing, 
				_courage, 
				_aimingAccuracy, 
				_aimingShake, 
				_aimingSpeed, 
				_reloadSpeed
			]
		] call tgro_fnc_setUnitSkills;
		
		_numberOfTeams = _numberOfTeams - 1;
	};

	private _vehicles = [
		"CUP_I_SUV_Armored_ION",
		"CUP_I_FENNEK_ION",
		"CUP_I_FENNEK_GMG_ION",
		"CUP_I_MATV_HMG_ION",
		"CUP_I_4WD_LMG_ION",
		"CUP_I_LSV_02_Minigun_ION",
		"CUP_I_RG31_Mk19_ION",
		"CUP_I_RG31_M2_GC_ION",
		"CUP_I_Van_Transport_ION"
	];
	
	private _basePos = [[_objective], ["water"]] call BIS_fnc_randomPos;
	private _vehiclePos = [  _basePos, 200, 300, 10, 0, 5, 0 ] call BIS_fnc_findSafePos;
	private _veh = (selectRandom _vehicles) createVehicle _vehiclePos;
	_crew = createVehicleCrew _veh;
	_group = createGroup EAST;

	{
		[_x] joinSilent _group;
	} forEach units _crew;

	_wp = _crew addWaypoint[ [  [[_objective], ["water"]] call BIS_fnc_randomPos, 20, 30, 10, 0, 5, 0 ] call BIS_fnc_findSafePos , 0];
	_wp setWaypointType "MOVE";
	_wp setWaypointSpeed "LIMITED";
};
