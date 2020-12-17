params ["_markerArea", "_corpses", "_wrecks", "_fires", "_smolderingBodies"];
private [
	"_entityTypes",
	"_mTypes", 
	"_vTypes", 
	"_grp", 
	"_obj", 
	"_alt", 
	"_randomPos", 
	"_currentPos", 
	"_currentAlt", 
	"_vDir", 
	"_vUp", 
	"_carnageTypes", 
	"_carnageObjects", 
	"_cargnageObjectPos", 
	"_effect", 
	"_class"
	];

_carnageTypes = [];
_carnageObjects = [];

[60, 2.5] call TGRO_fnc_waitForPopulateMapEntities;
_entityTypes = [] call TGRO_fnc_getMenAndVehicleClasses;

_mTypes = _entityTypes select 0;
_vTypes = _entityTypes select 1;
_alt = 20; // spawn objects 20m up in the air

// select corpse classes
for "_i" from 1 to _corpses do {
	_class = selectRandom _mTypes;
	_carnageTypes pushBack _class;
};

// select wreck classes
for "_i" from 1 to _wrecks do {
	_class = selectRandom _vTypes;
	_carnageTypes pushBack _class;
};

// spawn-create carnage objects
{
	_randomPos = [[_markerArea]] call BIS_fnc_randomPos;
	_randomPos set [2, _alt];
	
	_vDir = [
		random [-1, 0, 1],
		random [-1, 0, 1],
		1
	];

	_vUp = [
		random [-1, 0, 1],
		random [-1, 0, 1],
		random [-1, 0, 1]
	];

	if (_x in _mTypes) then {
		_grp = createGroup CIVILIAN;
		_obj = _grp createUnit [_x, _randomPos, [], 0, "FORM"];
	} else {
		_obj = _x createVehicle _randomPos;
	};

	_carnageObjects pushBack _obj;

	_obj setDir random 360;
	_obj setvelocity [0,0,-10];	
	_obj setVectorDir _vDir;
	_obj setVectorUp _vUp;
	_obj setDamage 1;
	sleep .1;
} forEach _carnageTypes;

removeFromRemainsCollector _carnageObjects;

sleep 10;

{
	_effect = nil;
	_cargnageObjectPos = getPos _x;
	if (_x isKindOf "Man") then {
		if ( _smolderingBodies > (random 100)) then {
			_effect = "test_EmptyObjectForFireBig" createVehicle _cargnageObjectPos;
			_effect setPos _cargnageObjectPos;
		};
	} else {
		if ( _fires > (random 100)) then {
			_effect = "test_EmptyObjectForFireBig" createVehicle _cargnageObjectPos;
			_effect setPos _cargnageObjectPos;
		};
	};

} forEach _carnageObjects;