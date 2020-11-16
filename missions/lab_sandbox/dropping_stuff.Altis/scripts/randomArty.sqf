
params ["_markerArea", "_shellClass", "_numberOfShells", "_maxDelayBetweenShells"];

for "_i" from 1 to _numberOfShells do { 
	// Get the random position of a shell within the marker area and raise it 100 meters.
	private _3dPos = [[_markerArea]] call BIS_fnc_randomPos;
	_3dPos set [2, 100];

	// Create the shell at that position
	private _shell = _shellClass createVehicle _3dPos;

	// Give it a push towards the ground
	_shell setvelocity [0,0,-150];

	// Random delay between artillery shells
	sleep random _maxDelayBetweenShells;
};