# Paradropping Unit by Adding a Sterrable Parachute

This code adds a function that moves a unit out of a vehicle and attaches a steerable parachute to them.

## Dependencies
* description.ext
* Functions Library

## description.ext  
Pay attention to the class CfgFunctions section.  Any precomplied function we want to add needs to be declared there.
```SQF
author			= "The Republic of Curdestan and Private Floydy";
onLoadName		= "Marker mayhem";
onLoadMission	= "Dat poor town :p";

class Header
{
	gameType =  Coop;	// Game type
	minPlayers =  1;	// minimum number of players the mission supports
	maxPlayers = 2;	// maximum number of players the mission supports
};

respawnOnStart=-1;
respawnDelay=10;

class CfgFunctions
{
	file = "functions";
	class tg
	{
		class TG_Functions
		{

			class paraDropUnit
			{
				description = "Takes any unit, moves them out of vehicle and puts them in a steerable parachute.";
			};

		};
	};
};
```

## Functions Library
```bash
mission_root_directory\
    |-functions\
        |-TG_Functions\
            |-fn_paraDropUnit.sqf
```

### fn_paraDropUnit.sqf
```SQF
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
```