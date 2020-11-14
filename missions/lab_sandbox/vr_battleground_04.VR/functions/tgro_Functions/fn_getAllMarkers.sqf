_allMapMarkers = allMapMarkers;
_allSpawnWaveMarkers = [];

_all_SWM_E = [];
_all_SWM_W = [];
_all_SWM_I = [];

{

	if ([SWM_E_TMP, _x] call BIS_fnc_inString) then {
		_all_SWM_E pushBack _x;
	};
	
	if ([SWM_W_TMP, _x] call BIS_fnc_inString) then {
		_all_SWM_W pushBack _x;
	};

	if ([SWM_I_TMP, _x] call BIS_fnc_inString) then {
		_all_SWM_I pushBack _x;
	};
} forEach _allMapMarkers;

[_all_SWM_E, _all_SWM_W, _all_SWM_I];
