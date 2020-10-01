posPollIntrvl = 15;
mobileMarkerColor = "ColorWEST";

playerMarkerMappings = [];

[] spawn {
	_headlessClients = entities "HeadlessClient_F";
	_humanPlayers = allPlayers - _headlessClients;

	{
		_playerName =  name _x;
		_x setVehicleVarName (_playerName);
		_mobileMarkerIdentifier = format ["respawn_west_%1", _playerName];
		_mobileMarker = createMarker [_mobileMarkerIdentifier, _x];
		_mobileMarker setMarkerType "respawn_unknown";
		_mobileMarker setMarkerText _playerName;
		_mobileMarker setMarkerColor mobileMarkerColor;
		_playerMapping = [_x, _mobileMarker];
		playerMarkerMappings set [count playerMarkerMappings, _playerMapping];
	} forEach _humanPlayers;

	[] spawn {
		{
			_player = _x select 0;
			_marker = _x select 1;

			while {!isNull _player} do {
				_marker setMarkerPos getPos player;
				sleep posPollIntrvl;
			};	
		} forEach playerMarkerMappings;
	};
};

[] execVM "scripts\telosTownSequence.sqf";