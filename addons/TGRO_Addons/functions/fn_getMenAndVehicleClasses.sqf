params [["_unique", false]];

private _men = [];
private _vehicles = [];

private _allowableEntities = ["Tank", "Car", "Air", "Ship", "Man"];

{
	if (_unique) then {
		if (_x isKindOf "Man") then {
			_men pushBackUnique (typeOf _x);
		} else {
			_vehicles pushBackUnique (typeOf _x);
		};
	} else {
		if (_x isKindOf "Man") then {
			_men pushBack (typeOf _x);
		} else {
			_vehicles pushBack (typeOf _x);
		};
	};
} forEach ( entities [_allowableEntities, [], false, true] );

[_men, _vehicles];