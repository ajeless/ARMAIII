TRIGGER_SHOW_COMM_STATION = 0;
TRIGGER_CALL_SUPPORT = 0;
TRIGGER_SHOW_SUPPORT_UNITS = 0;

_telosControl = false;

// Sleep 5 minutes
sleep 300;
systemChat "!!!!!!!!SEQUENCE START!!!!!!!!!";
while {!_telosControl} do {
	sleep 5;
	_unitsInTelos = allUnits inAreaArray "AO_TELOS";
	_westCount = west countSide _unitsInTelos;
	_eastCount = east countSide _unitsInTelos;
	_combatantCount =  _westCount + _eastCount;
	_westRatio = _westCount / _combatantCount;
	if ( _westRatio >= .70 ) then {
		TRIGGER_SHOW_COMM_STATION = 1;
		_telosControl = true;
		_markerID = "Field_HQ_Marker";
		_fieldHQMarker = createMarker [_markerID, COMMS];
		_fieldHQMarker setMarkerType "DMP_marker_move";
		_fieldHQMarker setMarkerText "Field HQ";
		_fieldHQMarker setMarkerColor "ColorOrange";
	};
};