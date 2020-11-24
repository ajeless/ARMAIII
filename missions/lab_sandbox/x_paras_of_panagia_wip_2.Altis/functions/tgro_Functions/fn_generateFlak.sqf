params ["_vehicle",  "_shellClass", "_numberOfShells", "_maxDelayBetweenShells"];

for "_i" from 1 to _numberOfShells do {

	// Vehicle Stats
	private _3dPosWS = _vehicle modelToWorld [0,0,0];
	private _alt = _3dPosWS select 2;

	// Generate Flak
	private _flakClass = _shellClass;
	private _flakSpawnRange = [40, 60, 80]; // min, avg, max distance to spawn flak from aircraft
	private _flakDistance = random _flakSpawnRange;
	private _flakSpawnAngleRange = 360;
	private _flakAltOffsetRange = [-50, 0, 50];
	private _flakAlt = _alt + random _flakAltOffsetRange;
	private _flakAngle = random _flakSpawnAngleRange;
	private _flakPos = _vehicle getRelPos [_flakDistance, _flakAngle];
	_flakPos set [2, _flakAlt];
	private _flakShell = _flakClass createVehicle _flakPos;
	_flakShell setDamage 1;

	sleep random _maxDelayBetweenShells;
};