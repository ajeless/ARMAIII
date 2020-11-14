// while {true} do {
// 	sleep 1;
// 	// [] call tgro_fnc_getWaveSpawnAnchors;
// 	// [] call tgro_fnc_getAllConfigClasses;
// };

sleep 10;



// !!!!VEHICLES!!!!
// private ["_cfgArray", "_xPos", "_yPos", "_veh"];

// _cfgArray = "( 
// 	(getNumber (_x >> 'scope') >= 2) && 
// 	{
// 		getNumber (_x >> 'side') == 1 && 
// 		{ getText (_x >> 'vehicleClass') in ['Men'] }
// 	}
// )" configClasses (configFile >> "CfgVehicles");

// _xPos = 0;
// _yPos = 0;

// {
//     _yPos = _yPos + 3;
//     _veh = createVehicle [(configName _x), player modelToWorld [_xPos, _yPos, 0], [], 0, "None"];
//     if (_yPos >= 100) then {
//         _yPos = 0;
//         _xPos = _xPos + 3;
//     };
// } forEach _cfgArray;



// !!!!GROUPS!!!!
// _allgrps = 'true' configClasses (configFile >> 'CfgGroups' >> 'West' >> 'CUP_B_USMC');
// systemChat format ["%1", _allgrps];
// _xPos = getPos player select 0;
// _yPos = getPos player select 1;

// {
// 	_yPos = _yPos + 10;
// 	_xPos = _xPos + 10;
// 	_grp = [[_xPos, _yPos], WEST, _x ] call BIS_fnc_spawnGroup
// 	// Current result is saved in variable _x
	
// } forEach _allgrps;