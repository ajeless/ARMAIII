//*** READING FILES / MAKING GLOBAL CONSTANTS AND VARIABLES ***//

// We can read config and globals like this
#include "config.sqf"

// Read all markers
// null = [] spawn {
// 	while {true} do {
// 		sleep 1;
// 		systemChat format ["PREFIXES %1", AllAreas];	
// 	};
// };

// [] execVM "subscript.sqf";





//*** GETTING POSITIONS INSIDE MARKERS ***//

// null = [] spawn {
// 	private _count = 0;
// 	while {true} do {
// 		sleep 2;
// 		private _markerName = format["rndLoc_%1", _count]; _count = _count+1;
// 		private _rndPos = [["MARKER1", "MARKER2", TRIGGER1, TRIGGER2], nil, nil] call BIS_fnc_randomPos;
// 		private _theMarker = createMarker [_markerName, _rndPos];
// 		_theMarker setMarkerType "mil_triangle";
// 	};
// };


// null = [] spawn {
// 	private _count = 0;
// 	while {true} do {
// 		sleep 2;
// 		private _markerName = format["rndLoc_%1", _count]; _count = _count+1;
// 		private _rndPos = [["OUTER_BOUND"], ["INNER_BOUND"], nil] call BIS_fnc_randomPos;
// 		private _theMarker = createMarker [_markerName, _rndPos];
// 		_theMarker setMarkerType "mil_triangle";
// 	};
// };




//*** GETTING RANDOM POSITIONS ***/
// null = [] spawn {
// 	while {true} do {
// 		sleep 1;
// 		private _srcMarker = SourceAndTarget select 0;
// 		private _tgtMarker = SourceAndTarget select 1;
// 		systemChat format [ "%1", [_srcMarker, _tgtMarker] call tgro_fnc_getSrcTgtPosPair];
// 	};
// };

//*** GETTING ALL UNITS AND VEHICLES IN AREA ***/
null = [] spawn {
	while {true} do {
		_unitClasses = [];
		sleep 1;
		{
			 [_unitClasses, typeOf _x] call BIS_fnc_arrayPush;		
		} forEach allUnits inAreaArray "TGRO_FACTION_E";
		systemChat format ["%1", _unitClasses];
	};
};
