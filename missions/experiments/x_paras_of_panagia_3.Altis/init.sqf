_objective = getMissionConfigValue "GlobalObjectiveMarker";
_iSpawnMinDis = getMissionConfigValue "InsertpawnMinDist";
_iSpawnAvgDis = getMissionConfigValue "InsertpawnAvgDist";
_iSpawnMaxDis = getMissionConfigValue "InsertpawnMaxDist";

while {true} do {
	sleep 1;
	_panagiaDZ = [_objective] call tgro_fnc_getRndLoc;
	_insertSpawnPos = [_panagiaDZ, _iSpawnMinDis, _iSpawnAvgDis, _iSpawnMaxDis] call tgro_fnc_getRndLocRel;
	systemChat format ["%1", _insertSpawnPos];
};