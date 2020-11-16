params ["_vClass", "_pos", ["_alt", 200]];

private _3dPos = _pos;
_3dPos set [2, _alt];
private _vehicle = _vClass createVehicle _3dPos;
_vehicle setvelocity [0,0,-150];