[] execVM "logger.sqf";
[] execVM "spawn_blackfish.sqf";
[] spawn myTag_fnc_myFunction;
[BIS_Vehicle, 50, 30, true, 10] spawn BIS_fnc_UnitCapture;