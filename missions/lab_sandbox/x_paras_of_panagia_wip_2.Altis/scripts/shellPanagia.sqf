while {true} do {
	sleep 1;
	if (ShellPanagia) then {
		ShellPanagia = false;
		[] spawn {
			for "_i" from 1 to RandomArtilleryBarageCount do {
				[RandomArtilleryOrdnance, [[TargetArea]] call BIS_fnc_randomPos] call TGRO_fnc_dropObject;
				sleep random RandomArtilleryDelayRange;
			};
		};
	};
};

