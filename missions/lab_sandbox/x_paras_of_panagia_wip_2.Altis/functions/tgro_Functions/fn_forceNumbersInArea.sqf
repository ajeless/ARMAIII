// return array counting number of units alive in: [blufor, opfor, independent, civilian] 

params ["_area"];

_countB = 0; // # blufor units
_countO = 0; // # opfor units
_countI = 0; // # indepent units 
_countC = 0; // # civilian units

{
	if (alive _x) then {
		if (side _x == west) then {
			_countB = _countB + 1
		};
		if (side _x == east) then {
			_countO = _countO + 1
		};
		if (side _x == independent) then {
			_countI = _countI + 1
		};
		if (side _x == civilian) then {
			_countC = _countC + 1
		};
	};	
} forEach (allUnits inAreaArray _area);

[_countB, _countO, _countI, _countC];