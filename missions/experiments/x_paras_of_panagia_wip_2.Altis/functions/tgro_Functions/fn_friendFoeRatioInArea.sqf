params ["_area"];

private _forceNums = [_area] call tgro_fnc_forceNumbersInArea;
private _numFriends = _forceNums select 0;
private _numFoes = _forceNums select 1;

private _ratio = 0;

if (_numFoes < 1) then {
	_ratio = 1;
} else {
	_ratio = _numFriends / _numFoes;
};

_ratio;