while {true} do {
	sleep 1;
	if (ShellPanagia) then {
		for "_i" from 1 to RandomArtilleryBarageCount do {
			private _basePos = [[CarnageField]] call BIS_fnc_randomPos;
			private _artilleryRound = RandomArtilleryOrdnance createVehicle _basePos;
			_artilleryRound setPosASL [_basePos select 0, _basePos select 1, 500];
			private _delay = random RandomArtilleryDelayRange;
			sleep _delay;
		};
		ShellPanagia = false;
	};
};