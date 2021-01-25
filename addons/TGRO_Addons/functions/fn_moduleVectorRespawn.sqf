params ["_module", "_units", "_activated"];

_spawnArc = _module getVariable "SpawnArc";
_minDist = _module getVariable "MinDist";
_avgDist = _module getVariable "AvgDist";
_maxDist = _module getVariable "MaxDist";

if (_activated) then {
// Create global player vector respawn anchors
	missionNamespace setVariable ["TGRO_VECTOR_RESPAWN_ANCHORS", []];
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

	// Set global default vector spawn parameters
	missionNamespace setVariable ["TGRO_VECTOR_RESPAWN_ARC", _spawnArc];
	missionNamespace setVariable ["TGRO_VECTOR_RESPAWN_MIN_DIST", _minDist];
	missionNamespace setVariable ["TGRO_VECTOR_RESPAWN_AVG_DIST", _avgDist];
	missionNamespace setVariable ["TGRO_VECTOR_RESPAWN_MAX_DIST", _maxDist];

	// Add 'killed' event handlers for each player
	{
		_player = _x;
		_player addEventHandler ["Killed", {
			[] execVM "\TGRO_Addons\functions\fn_vectorRespawnKilled.sqf";
		}];
				
	} forEach allPlayers;

	// Add 'Respawn' event handlers for each player
	{
		_player = _x;
		_player addEventHandler ["Respawn", {
			[] execVM "\TGRO_Addons\functions\fn_vectorRespawnSpawn.sqf";
		}];
		
	} forEach allPlayers;
};