_allMapMarkers = allMapMarkers;

{
	// systemChat _x;
	_isCIV = [ '_CIV', _x,  true ] call BIS_fnc_inString;
	_isIND = [ '_IND', _x,  true ] call BIS_fnc_inString;
	_isEAST = [ '_EAST', _x,  true ] call BIS_fnc_inString;
	_isWEST = [ '_WEST', _x,  true ] call BIS_fnc_inString;

	if (_isCIV) then {
		systemChat "WE HAVE CIV :)";
	};

	if (_isIND) then {
		systemChat "WE HAVE IND :)";
	};

	if (_isEAST) then {
		systemChat "WE HAVE EAST :)";
	};

	if (_isWEST) then {
		systemChat "WE HAVE WEST :)";
	};
	
} forEach _allMapMarkers;