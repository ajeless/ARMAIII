// _playerPos_X = (getPos player) select 0;
// _playerPos_Y = (getPos player) select 1;
// _playerPos_Z = (getPos player) select 2;

// _objectPos = [_playerPos_X + 300, _playerPos_Y + 50, _playerPos_Z + 300];

// _airFrame = createVehicle ['CUP_B_CH53E_GER', _objectPos, [], 0, 'FLY'];
// _airFrame setPosATL _objectPos;
// _crew = createVehicleCrew _airFrame;
// _airFrame setDir 180;

// _wp1 = _crew addWaypoint [[_playerPos_X, _playerPos_Y, _playerPos_Z + 100], 0];
// _wp1 setWaypointType "MOVE";
// _wp1 setWaypointSpeed "LIMITED";

// _wp2 = _crew addWaypoint [[_playerPos_X - 100, _playerPos_Y, _playerPos_Z + 50], 0];
// _wp2 setWaypointType "MOVE";
// _wp2 setWaypointSpeed "LIMITED";

// // _airFrame land "LAND";

// _dynamicAirport1 = "DynamicAirport_01_F" createVehicle _objectPos;
// // _airFrame landAt _dynamicAirport1;

_posPlayer = getPos player;



