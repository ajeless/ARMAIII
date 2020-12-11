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
		private _follow = _logic getVariable "Follow";
		private _maxDistanceToTarget = _logic getVariable "MaxDistanceToTarget"; 
		private _synchronizedObjects = synchronizedObjects _logic; 
		private _synchronizedObjectsCount = count _synchronizedObjects;
		private _target = nil;
		private _targetPos = nil;

		private _modelInfo = nil;
		private _e1 = nil;
		private _e1Length = nil;

		private _dropDistance = nil;
		private _randomPos = nil;
		private _ordnance = nil;

		private _allUnits = nil;
		private _targetObj = nil;

		{
			_modelInfo = getModelInfo _x;
			_e1 = _modelInfo select 0;
			_e1Length = count _e1;
			
			if (_e1Length != 0) then {
				_target = _x;
			};
		} forEach _synchronizedObjects;

		if (_persistent) then // If persistent use while loop igonre shell count
		{
			if (_follow) then // Bombardment follows/tracks the target
			{
				while {true} do 
				{
					{
						if ( [str _target, str _x] call BIS_fnc_inString ) then 
						{
							_targetObj = _x;
						};
						
					} forEach allUnits;

					_targetPos = getPos _targetObj;
					_dropDistance = random _maxDistanceToTarget;
					_randomPos = [[[_targetPos, _dropDistance]],[]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					_ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;	
				};
			} else // Bombardment falls on target's initial position
			{
				{
					if ( [str _target, str _x] call BIS_fnc_inString ) then 
					{
						_targetObj = _x;
					};
						
				} forEach allUnits;
				
				_targetPos = getPos _targetObj;

				while {true} do 
				{
					_dropDistance = random _maxDistanceToTarget;
					_randomPos = [[[_targetPos, _dropDistance]],[]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					_ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;	
				};
			};
			
		} else // If not persistent use for loop igonre shell count
		{
			if (_follow) then // Bombardment follows/tracks the target
			{
				for "_i" from 1 to _numberOfShells do
				{
					{
						if ( [str _target, str _x] call BIS_fnc_inString ) then 
						{
							_targetObj = _x;
						};
						
					} forEach allUnits;

					_targetPos = getPos _targetObj;
					_dropDistance = random _maxDistanceToTarget;
					_randomPos = [[[_targetPos, _dropDistance]],[]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					_ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;
				};
				
			} else // Bombardment falls on target's initial position
			{
				{
					if ( [str _target, str _x] call BIS_fnc_inString ) then 
					{
						_targetObj = _x;
					};
						
				} forEach allUnits;
				
				_targetPos = getPos _targetObj;

				for "_i" from 1 to _numberOfShells do 
				{
					_dropDistance = random _maxDistanceToTarget;
					_randomPos = [[[_targetPos, _dropDistance]],[]] call BIS_fnc_randomPos;
					_randomPos set [2, _dropHeight];
					_ordnance = _objectClass createVehicle _randomPos;
					_ordnance setDir (random 360);
					_ordnance setvelocity [0,0,-150];
					sleep random _randomDelayMax;	
				};
			};
		};
	};	
};

true; 