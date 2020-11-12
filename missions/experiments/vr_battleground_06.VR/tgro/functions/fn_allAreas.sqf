// Read all map markers and return matching ones

private _tgroAreas = [];

{
	_currentMarker = _x;
	{
		_prefix = _x;
		_prefixFound = [_prefix, _currentMarker] call BIS_fnc_inString;
		if (_prefixFound) then {
			[_tgroAreas, _currentMarker] call BIS_fnc_arrayPush;
		};
		
	} forEach ArrayOfRecognizedPrefixes;
	
} forEach allMapMarkers;

_tgroAreas;