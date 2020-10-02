// Compare strength of factions within terminal compound
// Call for reinforcements when east appears to be losing

// compare frequency (seconds)
_compareFrequency = 180;

// min groups to reinforce
_minReinforceGroups = 3;

// max groups to reinforce
_maxReinforceGroups = 9;

// reinforcement spawn areas
_reinforcmentSpawnAreas = ['EAST_AREA_1_SPAWN', 'EAST_AREA_2_SPAWN'];

_callReinforcements = {
	params ['_compareFrequency', '_minReinforceGroups', '_maxReinforceGroups'];
	_approxAvgGroups = ceil ( (_minReinforceGroups + _maxReinforceGroups) / 2 );
	_numReinforceGroups = floor ( random [_minReinforceGroups, _approxAvgGroups, _maxReinforceGroups] );
	systemChat format ["Calling %1 reinforcement groups.", _numReinforceGroups];
	for "_i" from 1 to _numReinforceGroups do {
		_areaSpawnMarker = selectRandom _reinforcmentSpawnAreas;
		_cup_RU_Fireteam = [ getMarkerPos _areaSpawnMarker,  east, (configfile >> 'CfgGroups' >> 'East' >> 'CUP_O_RU' >> 'Infantry_EMR' >> 'CUP_O_RU_InfSquad_EMR')] call BIS_fnc_spawnGroup;
		_cup_RU_Fireteam allowFleeing 0;
		_wp1 = _cup_RU_Fireteam addWaypoint [getMarkerPos 'AO_TERMINAL_COMPOUND', 0];
		_wp1 setWaypointType 'HOLD';
		_wp1 setWaypointSpeed 'FULL';
		_wp1 setWaypointBehaviour 'AWARE';
		_wp1 setWaypointFormation 'VEE';
		systemChat format ["Spawning @ %1", _areaSpawnMarker];
	};
};

while { true } do {
	sleep _compareFrequency;
	_unitsInAirTerminal = allUnits inAreaArray 'AO_TERMINAL_COMPOUND';
	_westUnits = west countSide _unitsInAirTerminal;
	_eastUnits = east countSide _unitsInAirTerminal;
	if (_eastUnits <= _westUnits) then {
		 [_compareFrequency, _minReinforceGroups, _maxReinforceGroups] call _callReinforcements;
	};
};