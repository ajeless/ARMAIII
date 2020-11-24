params ["_class", "_pos", ["_alt", 200]];

private _obj = nil;
private _3dPos = _pos;
_3dPos set [2, _alt];

if (_class isKindOf "Man") then {
	private _grp = createGroup CIVILIAN;
	_obj = _grp createUnit [_class, _3dPos,  [], 0, "FORM"];
} else {
	_obj = _class createVehicle _3dPos;
};

_obj setDir random 360;
_obj setDamage 1;
_obj setvelocity [0,0,-150];