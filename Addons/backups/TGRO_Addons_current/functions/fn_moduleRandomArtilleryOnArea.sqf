// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
_activated = param [2];
if (_activated) then 
{
	null = [_logic, _activated] spawn 
	{
		params ["_logic", "_activated"];

		// Arguments passed in by module
		private _objectClass = _logic getVariable "ObjectClass";
		private _numberOfShells = _logic getVariable "NumberOfShells";
		private _dropHeight = _logic getVariable "DropHeight";
		private _randomDelayMax = _logic getVariable "RandomDelayMax";
		private _persistent = _logic getVariable "Persistent";
		private _markerAreas = parseSimpleArray (_logic getVariable "MarkerAreas");
		private _synchronizedObjects = synchronizedObjects _logic; 
		private _triggerCount = count _synchronizedObjects;
		private _markerAreaCount = count _markerAreas;
		private _artilleryZone = nil;

		if (_triggerCount > 0) then // If trigger synced check if persistent 
		{

			if (_markerAreaCount > 0) then // If using marker, use marker area for bombardment
			{
				_artilleryZone = _markerAreas select 0;
			}
			else // Otehrwise use trigger area for bombardment 
			{
				_artilleryZone = _synchronizedObjects select 0;
			};

			if (_persistent) then // If persistent ignore shell count, use while loop
			{
				while {true} do 
				{
					private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					private _ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;	
				};
			} else // Otherwise shell count matters, use for loop
			{
				for "_i" from 1 to _numberOfShells do 
				{ 
					private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					private _ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;
				};
			};
		}
		else // Otherwise assume marker area used and check if persistent
		{

			_artilleryZone = _markerAreas select 0;
			if (_persistent) then // If persistent ignore shell count, use while loop
			{
				while {true} do 
				{
					private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					private _ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;	
				};
			} else // Otherwise shell count matters, use for loop
			{
				for "_i" from 1 to _numberOfShells do 
				{ 
					private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					private _ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;
				};
			};
		};
	};	
};

true; 