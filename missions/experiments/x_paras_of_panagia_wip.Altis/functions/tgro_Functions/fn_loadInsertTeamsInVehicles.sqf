params ["_arrayOfGroups", "_vehicle"];

{
	_x moveInCargo _vehicle;
} forEach allPlayers;

{
	_groupUnits = units _x;
	{
		_x moveInCargo _vehicle;
		
		
	} forEach _groupUnits;
	
} forEach _arrayOfGroups;
