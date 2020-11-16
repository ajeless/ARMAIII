playerMobileSpawnPoint = createMarker [format ["respawn_west_%1", name player], player];
playerMobileSpawnPoint setMarkerType "mil_triangle";
playerMobileSpawnPoint setMarkerAlpha 0;
playerMobileSpawnPoint setMarkerText name player;
_theSpawnVector = [SpawnVectorMarker] call tgro_fnc_vectorMarkerDir;
_theSpawnARC = [_theSpawnVector, SpawnARC] call tgro_fnc_vectorArc;
_theSpawnDir = _theSpawnARC call tgro_fnc_selectRandomOnARC;
_theRandomDist = [SpawnDistMin, SpawnDistAvg, SpawnDistMax] call tgro_fnc_selectRandomDistance;
_theXYComponents = [_theSpawnDir] call tgro_fnc_getXYComponents;
_theAbsoluteSpawnPosition = [_theXYComponents, _theRandomDist] call tgro_fnc_getSpawnPos;
playerMobileSpawnPoint setMarkerPos _theAbsoluteSpawnPosition;
systemChat format ["%1", _theAbsoluteSpawnPosition];

// onMapSingleClick "playerMobileSpawnPoint setMarkerPos _pos";