// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
_activated = param [2];

if (_activated) then {
	null = [_logic, _activated] spawn 
	{
		params ["_logic", "_activated"];
		systemChat format ["%1, %2", _logic, _activated];

		// Arguments passed in by module
		private _objectClass = _logic getVariable "ObjectClass";
		private _numberOfShells = _logic getVariable "NumberOfShells";
		private _dropHeight = _logic getVariable "DropHeight";
		private _randomDelayMax = _logic getVariable "RandomDelayMax";
		private _synchronizedObjects = [];

		// Read in all synced objects for future
		{
			[_synchronizedObjects, _x] call BIS_fnc_arrayPush;			
		} forEach synchronizedObjects _logic;

		// Use only first synced object for now
		private _artilleryZone = _synchronizedObjects select 0;

		for "_i" from 1 to _numberOfShells do 
		{ 
			private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
			_randomPos set [2, _dropHeight];
			private _ordnance = _objectClass createVehicle _randomPos;
			_ordnance setvelocity [0,0,-150];
			sleep random _randomDelayMax;
		};
	};
};

true;