// reinforcement spawn areas
_reinforcmentSpawnAreas = ['EAST_AREA_1_SPAWN', 'EAST_AREA_2_SPAWN'];

for "_i" from 1 to 5 do {
	_areaSpawnMarker = selectRandom _reinforcmentSpawnAreas;
	_cup_RU_Fireteam = [ getMarkerPos _areaSpawnMarker,  east, (configfile >> 'CfgGroups' >> 'East' >> 'CUP_O_RU' >> 'Infantry_EMR' >> 'CUP_O_RU_InfSquad_EMR')] call BIS_fnc_spawnGroup;
	_cup_RU_Fireteam allowFleeing 0;
	_wp1 = _cup_RU_Fireteam addWaypoint [getMarkerPos 'AO_TERMINAL_COMPOUND', 0];
	_wp1 setWaypointType 'HOLD';
	_wp1 setWaypointSpeed 'FULL';
	_wp1 setWaypointBehaviour 'AWARE';
	_wp1 setWaypointFormation 'VEE';
	systemChat format ["Spawning Initial Garrison Units @ %1", _areaSpawnMarker];
};