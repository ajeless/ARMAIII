// Argument 0 is module logic.
_logic = param [0,objNull,[objNull]];
_activated = param [2];

systemChat "Before!";

if (_activated) then 
{
	systemChat "After!";
	null = [_logic, _activated] spawn 
	{
		params ["_logic", "_activated"];

		private _modulePos = getPos _logic;
		private _synchronizedObjects = synchronizedObjects _logic; 
		private _synchronizedObjectsCount = count _synchronizedObjects;
		private _marker = _logic getVariable "Marker";
		private _radius = _logic getVariable "Radius";
		private _wrecks = _logic getVariable "Wrecks";
		private _corpses = _logic getVariable "Corpses";
		private _fires = _logic getVariable "Fires";

		while {true} do {
			sleep 1;
			systemChat format ["%1, %2,  %3, %4, %5,", _marker, _radius, _wrecks, _corpses, _fires];
		};
		
		// Get all carnage classes from map
	};
}; 

// private _class = "O_Heli_Attack_02_dynamicLoadout_F";
// private _class = "B_T_VTOL_01_armed_F";
// private _class = "O_MBT_04_command_F";
// private _class = "C_Van_01_fuel_F";
// private _class = "B_Soldier_A_F";

// [_class, [4431.69,4153.82,0], 20 ] spawn
// {
// 	params ["_class", "_pos", ["_alt", 200]];

// Select carnage classes - get all units and vehicles on map
// 	private _carnageClasses = [];

// 	{
// 		private _parentClasses = [ (configFile >> "CfgVehicles" >> (typeOf _x)), true ] call BIS_fnc_returnParents;

// 		if ( not ("Thing" in _parentClasses) ) then {
// 			if ("_AI_" in typeOf _x) then {
// 				systemChat format ["WE HAVE AI: %1", typeof _x];
// 			};
// 			[_carnageClasses, typeOf _x] call BIS_fnc_arrayPush;
// 		};
// 	} forEach allUnits;

// 	{
// 		private _parentClasses = [ (configFile >> "CfgVehicles" >> (typeOf _x)), true ] call BIS_fnc_returnParents;

// 		if ( not ("Thing" in _parentClasses) ) then {
// 			[_carnageClasses, typeOf _x] call BIS_fnc_arrayPush;
// 		};
// 	} forEach vehicles;

// 	systemChat format ["%1", _carnageClasses];


// 	private _obj = nil;
// 	private _3dPos = _pos;
// 	_3dPos set [2, _alt];

// 	private _vectorDir = 
// 	[
// 		random [-1, 0, 1],
// 		random [-1, 0, 1],
// 		1
// 	];

// 	private _vectorUp = 
// 	[
// 		random [-1, 0, 1],
// 		random [-1, 0, 1],
// 		random [-1, 0, 1]
// 	];

// 	if (_class isKindOf "Man") then 
// 	{  
// 		private _grp = createGroup CIVILIAN;
// 		_obj = _grp createUnit [_class, _3dPos,  [], 0, "FORM"];
// 	} 
// 	else 
// 	{
// 		_obj = _class createVehicle _3dPos;
// 		_obj setPos _3dPos;
// 	};

// 	private _parentClasses = [ (configFile >> "CfgVehicles" >> (typeOf _obj)), true ] call BIS_fnc_returnParents;

// 	waitUntil
// 	{
// 		_pos = getPos _obj;
// 		_alt = _pos select 2;
// 		_alt <= 5;
// 	};

// 	_obj setVectorDir _vectorDir;
// 	_obj setVectorUp _vectorUp;
// 	_obj setDamage 1;
// 	_obj setVelocity [0, 0, -10];

// 	sleep 10;

// 	if ( not (_class isKindOf "Man") ) then 
// 	{
// 		for "_vec" from 1 to 3 do
// 		{
// 			private _explosive = "SatchelCharge_Remote_Ammo" createVehicle ( _obj modelToWorld [0,0,0] );
// 			_explosive attachTo [_obj, [0, 0, 1]];
// 			_explosive setDamage 1;
// 			sleep 1;
// 		};
// 	};