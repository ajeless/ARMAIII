# Flak Generator

Generate Flak around a vehicle from a script or a trigger.

## From Trigger

### Dependencies
* scripts\generateFlak.sqf
```bash
mission_root_directory\
    |-scripts\
        |-generateFlak.sqf
```

### generateFlak.sqf 
```SQF
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
```
### How To Use It
* Create a folder inside your mission called scripts and file called generateFlak.sqf inside the scripts folder.
* Create a trigger with the following code inside it.  
```SQF
null = [BLACKFISH_1, "SatchelCharge_Remote_Ammo", 1000, 2] execVM "scripts\generateFlak.sqf";
```

### Arguments
[BLACKFISH_1, "SatchelCharge_Remote_Ammo", 1000, 2]  
["_vehicle",  "_shellClass", _numberOfShells, _maxDelayBetweenShells]  

That should be self explanatory, but the in case it's not:

**_vehicle** The variable name of your vehicle.

**_shellClass** The ammo class, not the magazine class, from: https://community.bistudio.com/wiki/Arma_3_CfgMagazines.  For flak it's gest to use the remote ammo types like satchel charges or demo charges because the detonate when setDamage = 1;

**_numberOfShells** How many flak shells in the barrage

**_maxDelayBetweenShells** Random delay (seconds) between shells in barrage. Maximum delay.