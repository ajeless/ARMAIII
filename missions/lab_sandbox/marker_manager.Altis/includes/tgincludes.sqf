TGAO_W = []; // west vehicle spawn areas
TGAT_W = []; // west bomb/arty target areas
TGAS_W = []; // west AI spawn areas
TGAO_E = []; // east vehicle spawn areas
TGAT_E = []; // east bomb/arty target areas
TGAS_E = []; // east AI spawn areas
TGAO_I = []; // ind vehicle spawn areas
TGAT_I = []; // ind bomb/arty target areas
TGAS_I = []; // ind AI spawn areas
TGAO_C = []; // civ vehicle spawn areas
TGAT_C = []; // civ bomb/arty target areas
TGAS_C = []; // civ AI spawn areas

{
	if ( ["TGAO_W", _x] call BIS_fnc_inString ) then {
		[TGAO_W, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAT_W", _x] call BIS_fnc_inString ) then {
		[TGAT_W, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAS_W", _x] call BIS_fnc_inString ) then {
		[TGAS_W, _x] call BIS_fnc_arrayPush;
	};
	
	if ( ["TGAO_E", _x] call BIS_fnc_inString ) then {
		[TGAO_E, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAT_E", _x] call BIS_fnc_inString ) then {
		[TGAT_E, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAS_E", _x] call BIS_fnc_inString ) then {
		[TGAS_E, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAO_I", _x] call BIS_fnc_inString ) then {
		[TGAO_I, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAT_I", _x] call BIS_fnc_inString ) then {
		[TGAT_I, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAS_I", _x] call BIS_fnc_inString ) then {
		[TGAS_I, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAO_C", _x] call BIS_fnc_inString ) then {
		[TGAO_C, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAT_C", _x] call BIS_fnc_inString ) then {
		[TGAT_C, _x] call BIS_fnc_arrayPush;
	};

	if ( ["TGAS_C", _x] call BIS_fnc_inString ) then {
		[TGAS_C, _x] call BIS_fnc_arrayPush;
	};
} forEach allMapMarkers;