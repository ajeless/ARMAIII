# Drop Object - Scripted

This code adds a functions library that enables the dropping of random objects.

## Dependencies
* description.ext
* Functions Library
* init.sqf

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

			class dropObject
			{
				description = "Takes vehicle class, 2d position, optional altitude (200 m default).  Spawns vehicle and pushes towards ground";
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
            |-fn_dropObject.sqf
```

### fn_dropObject.sqf
```SQF
// Default altitude for dropped objects is 200m
params ["_class", "_pos", ["_alt", 200]];

private _obj = nil;
private _3dPos = _pos;
_3dPos set [2, _alt];

// We spawn/create the class accordging to it's type
if (_class isKindOf "Man") then {
	systemChat "IN MAN";
	private _grp = createGroup CIVILIAN;
	_obj = _grp createUnit [_class, _3dPos,  [], 0, "FORM"];
} else {
	_obj = _class createVehicle _3dPos;
};

// Set direction, kill unit and give it a push towards ground
_obj setDir random 360;
_obj setDamage 1;
_obj setvelocity [0,0,-150];
```

## Call it from init.sqf or other script
In this example we are dropping at random from any one of the carnage classes and placing a marker on the map so we can see where said object was dropped.
```SQF
private _count = 0;

private _carnageClasses = [
	"B_Soldier_A_F",
	"B_soldier_M_F",
	"C_man_p_beggar_F",
	"C_man_1",
	"C_Man_casual_1_F",
	"C_Man_casual_3_F",
	"C_man_sport_3_F",
	"C_man_polo_1_F",
	"C_man_polo_4_F",
	"C_man_1_1_F",
	"C_Man_ConstructionWorker_01_Black_F",
	"C_Driver_3_F",
	"C_Marshal_F",
	"C_man_polo_2_F",
	"C_man_p_beggar_F_afro",
	"C_Man_casual_3_F_afro",
	"C_man_sport_2_F_afro",
	"C_Man_casual_4_F_afro",
	"C_IDAP_Offroad_02_unarmed_F",
	"C_IDAP_Van_02_vehicle_F",
	"C_Van_01_fuel_F",
	"C_Hatchback_01_F",
	"C_Offroad_02_unarmed_F",
	"C_Offroad_01_repair_F",
	"C_Van_01_transport_F",
	"C_Van_01_box_F",
	"C_Van_02_vehicle_F",
	"C_Truck_02_box_F",
	"C_Truck_02_fuel_F",
	"C_Truck_02_covered_F",
	"C_Heli_Light_01_civil_F"
];

while {true} do {
	sleep 10;
	_count = _count + 1;
	private _mrkrName = format ["DROP_%1", _count];
	private _rndPos = [["TGAT_C"]] call BIS_fnc_randomPos;
	_mrkr = createMarker [_mrkrName, _rndPos];
	_mrkr setMarkerType "mil_triangle";
	["Smoke_120mm_AMOS_White", _rndPos] call TG_fnc_dropObject;
};
```