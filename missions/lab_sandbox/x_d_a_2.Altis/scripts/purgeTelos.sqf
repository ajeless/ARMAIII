_telosPurged = false;

while {!_telosPurged} do {
	_unitsInTelos = allUnits inAreaArray "AO_TELOS";

	{
		if ( (side _x) == east ) then {
			_pause = random [1, 2, 3];
			sleep _pause;
			systemChat format["SLEEP: %1", _pause];
			_x setDamage 1;
			systemChat format ["KILLED: %1", _x];
		};
	} forEach _unitsInTelos;

	_unitsInTelos = allUnits inAreaArray "AO_TELOS";
	_eastCount = east countSide _unitsInTelos;
	if (_eastCount < 1) then {
		_telosPurged = true;
	};
};
TRIGGER_SHOW_SUPPORT_UNITS = 1;
systemChat "!!!!!!!!PURGE ENDED!!!!!!!!!";