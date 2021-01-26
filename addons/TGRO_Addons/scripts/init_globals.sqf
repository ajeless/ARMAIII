// Create player vector respawn anchors
TGRO_VECTOR_RESPAWN_ANCHORS = [];
{		
	_player = _x;
	_playerName = name _player;
	_anchorName = format ["RESPAWN_ANCHOR_%1", _playerName];
	_respawnAnchor = createMarker [_anchorName, getPos _player];
	// START DEBUG
	// _respawnAnchor setMarkerType "respawn_unknown";
	// _respawnAnchor setMarkerText _anchorName;
	// END DEBUG
	TGRO_VECTOR_RESPAWN_ANCHORS pushBack _respawnAnchor;
} forEach allPlayers;

// Set default vector spawn parameters
TGRO_VECTOR_RESPAWN_ARC = 75;
TGRO_VECTOR_RESPAWN_MIN_DIST = 75;
TGRO_VECTOR_RESPAWN_AVG_DIST = 125;
TGRO_VECTOR_RESPAWN_MAX_DIST = 175;