// Get individual player's vector respawn anchor
_playerRespawnAnchor = nil;
{
	_respawnAnchor = _x;
	_playerName = name player;
	_anchorMatches = [_playerName, _respawnAnchor] call BIS_fnc_inString;
	if (_anchorMatches) then {
		_playerRespawnAnchor =_respawnAnchor;
	} else {
	};
} forEach TGRO_VECTOR_RESPAWN_ANCHORS;

// Get random vector respawn position
_spawnAnchorDir = player getDir (getMarkerPos _playerRespawnAnchor);
_spawnPointDir = _spawnAnchorDir - (.5 * TGRO_VECTOR_RESPAWN_ARC) + (random TGRO_VECTOR_RESPAWN_ARC);
_spawnPointDistance = random [TGRO_VECTOR_RESPAWN_MIN_DIST, TGRO_VECTOR_RESPAWN_AVG_DIST, TGRO_VECTOR_RESPAWN_MAX_DIST];
_respawnPointPosition = [player, _spawnPointDistance, _spawnPointDir] call BIS_fnc_relPos;

// Create player vector respawn point
_playerName = name player;
_spawnPointName = format ["respawn_%1_%2", playerSide, _playerName];
missionNamespace setVariable ["PlayerRespawnPoint", createMarker [_spawnPointName, player]];
PlayerRespawnPoint setMarkerText _playerName;
PlayerRespawnPoint setMarkerAlpha 0; // Comment out to debug
PlayerRespawnPoint setMarkerPos _respawnPointPosition;
// START DEBUG
// PlayerRespawnPoint setMarkerType "mil_triangle";
// PlayerRespawnPoint setMarkerText _spawnPointName;
// END DEBUG