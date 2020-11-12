private _panagiaInEnemyHands = true;
sleep 30;

while {!InsertWestHasCapturedPanagia} do {
	sleep 1;
	if (FriendFoeRatioInPanagia >= InsertWestCaptureRatio) then {
		InsertWestHasCapturedPanagia = true;

		// purge panagia 
		{
			if (alive _x) then {
				if (side _x == east) then {
					_x setDamage 1;
				};
			};	
		} forEach (allUnits);


		hint parseText "<t font='tahomaB' size='1.5' align='center' color='#eb8034'>Panagia Captured!<br/>Hold The Town.<br/HQ Setup.</t>"; 
		private _hqMarker = createMarker ["HQ_MARKER", [20516.553, 8904.362]];
		_hqMarker setMarkerType "DMP_marker_move";
		_hqMarker setMarkerColor "ColorOrange";
		_hqMarker setMarkerText "HQ 2nd Flr.";
		[] execVM "scripts\sendEarlySupportTeamsWest.sqf";
		HQSetup = 1;
	};
};
