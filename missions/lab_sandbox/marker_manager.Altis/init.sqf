#include "includes\tgincludes.sqf";

private _count = 0;

while {true} do {
	sleep 3;
	systemChat format ["%1", TGAT_C];
	_count = _count + 1;
	private _mrkrName = format ["DROP_%1", _count];
	private _rndPos = [] call tg_fnc_getRndPosTGAT_C;
	_mrkr = createMarker [_mrkrName, _rndPos];
	_mrkr setMarkerType "mil_triangle";
	["Bo_Mk82", _rndPos] call tg_fnc_dropVehicle;
};