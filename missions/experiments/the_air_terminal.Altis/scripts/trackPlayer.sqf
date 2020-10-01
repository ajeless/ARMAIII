
_playerTrackerMarker = createMarker [format ["%1", name player], player];
_playerTrackerMarker setMarkerColor "ColorWest";
_playerTrackerMarker setMarkerType "mil_triangle";
_playerTrackerMarker setMarkerText name player;

while {!isNull player} do {
	sleep 1;
	_playerTrackerMarker setMarkerPos player;
};