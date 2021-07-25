[] spawn {
	while {true} do {
		while {alive player} do {	
			if(!(primaryWeapon player == "")) then {
				player setVariable["ACME_Player_Current_Loadout", getUnitLoadout player];
			};	
			sleep .5;
		};
	};
};
