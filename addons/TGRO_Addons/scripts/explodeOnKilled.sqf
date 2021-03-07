null = [] spawn {
_bombers = [];
	{
		if ( ['BOMBER', vehicleVarName _x] call BIS_fnc_inString ) then {
			[_bombers, _x] call BIS_fnc_arrayPush;
		};
	} forEach allUnits;

	{
		_x addEventHandler ["Killed", {
			params ["_unit", "_killer", "_instigator", "_useEffects"];
			_explosive = "R_TBG32V_F" createvehicle (getpos _unit);
			_explosive attachTo [_unit, [0,0,0]];
			_explosive setDamage 1;

		}];
	} forEach _bombers;
};