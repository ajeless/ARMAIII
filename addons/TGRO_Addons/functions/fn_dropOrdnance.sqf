params ["_pos", "_altitude", "_ordnance"];

_pos set [2, _altitude];
private _shell = _ordnance createVehicle _pos;
_shell setDir (random 360);
if ( ["F_40mm", _ordnance] call BIS_fnc_inString) then 
{
	_shell setvelocity [0,0,-7];
} else 
{
	_shell setvelocity [0,0,-150];	
};