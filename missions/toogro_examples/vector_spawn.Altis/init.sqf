SpawnVectorMarker = "SPAWN_VECTOR_MARKER"; // name of your spawn vector marker
SpawnARC = 90;
SpawnDistMin = 50;
SpawnDistAvg = 100;
SpawnDistMax = 150;

while {true} do {
	sleep 1;
	// _theVector = [SpawnVectorMarker] call tgro_fnc_vectorMarkerDir;
	// _theArc = [_theVector, SpawnARC] call tgro_fnc_vectorArc;
	// _theRandomDir = _theArc call tgro_fnc_selectRandomOnARC;
	// _theRandomDist = [SpawnDistMin, SpawnDistAvg, SpawnDistMax] call tgro_fnc_selectRandomDistance;
	// _theXYComponents = [_theRandomDir] call tgro_fnc_getXYComponents;
	// _theAbsoluteSpawnPosition = [_theXYComponents, _theRandomDist] call tgro_fnc_getSpawnPos;
	// systemChat format ["VEC: %1, ARC: %2, RNDIR: %3, RNDDIST: %4, XY: %5", _theVector,  _theArc, _theRandomDir, _theRandomDist, _theXYComponents];
	// systemChat format ["%1", _theAbsoluteSpawnPosition];
};