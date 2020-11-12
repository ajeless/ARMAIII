/* 
	TGRO PREFIXES
	Define area - marker/trigger prefixes here
	These are recognized and read automatically by scripts

	EG: A marker whose variable name starts with named TGRO_AC_E_
		indicates a marker that belongs to the Toogro addon/mod,
		that is an area of control marker (AC),
		that represents an area controlled by side EAST/OPFOR
*/

TagPrefix = "TGRO_";
AreaOfControl = "AC_";
AreaOfOperation = "AO_";
SideWest = "W_";
SideEast = "E_";
SideIndy = "I_";
SideCivi = "C_";

AreaType = [AreaOfControl, AreaOfOperation];
AreaSide = [SideWest, SideEast, SideIndy, SideCivi];

// generate all prefixes
private _arrayOfRecognizedPrefixes = [];
	{
		_at = _x;
		{
			_as = _x;
			_currentPrefix = format ["%1%2%3", TagPrefix, _at, _as];
			[_arrayOfRecognizedPrefixes, _currentPrefix] call BIS_fnc_arrayPush;
		} forEach AreaSide;
		 
	} forEach AreaType;
_arrayOfRecognizedPrefixes;

ArrayOfRecognizedPrefixes = _arrayOfRecognizedPrefixes;

AllAreas = [] call tgro_fnc_allAreas;


/*
	TGRO DEFINING SOURCE AND TARGET MARKERS 
	[sourceMarkerForSpawning, targetMarkerForWaypoint]

	The scripts will use these later to return random positions in each 
*/

SourceAndTarget = ["TGRO_AO_E_001", "TGRO_AC_W_001"];