params ["_unit"];

unassignVehicle _unit;
moveOut _unit;
private _unitPos = getPos _unit;
private _unitPosX = _unitPos select 0;
private _unitPosY = _unitPos select 1;
private _unitPosZ = (_unitPos select 2) - 5;
private _dropPos = [_unitPosX, _unitPosY, _unitPosZ];
_sp = "Steerable_Parachute_F" createVehicle [0,0,0];
_unit setPos _dropPos;
_sp setPos _dropPos; 
_unit moveIndriver _sp; 