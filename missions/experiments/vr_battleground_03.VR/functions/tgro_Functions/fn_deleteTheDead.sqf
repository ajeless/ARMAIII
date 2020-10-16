
while {true} do {
	{ 
		sleep cleanupInterval;
		_randomValue = random 1;
		if ( _randomValue <= cleanupRate ) then {
			systemChat format ["DELETING: %1", _x];
			deleteVehicle _x;
		};
	} forEach allDeadMen;	
};