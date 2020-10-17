swmEast = 'SWM_EAST';
awmEast = 'AWM_EAST';

while {true} do {
	sleep 20;
	_rndLoc = [] call tgro_fnc_getRndswmEastLoc;
	// systemChat format ["%1", _rndLoc];
};