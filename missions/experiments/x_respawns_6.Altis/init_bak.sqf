dirSpawnMarker = 0;

// vector marker- the general direction in which spawn points will be created
spvMarkerPos = getMarkerPos "SVLoc";

// min,avg,max distance to spawn at
minSpawnDist = 10;
avgSpawnDist = 20;
maxSpawnDist = 30;

// this is the central point around which a spawn marker will randomly be placed
spawnLocus = [];

// get the direction of the spawn vector marker relative to the player on map
// and its x, y components
getSPVMarkerDir = {
	// Direction in which player to spawn
	dirSpawnMarker = player getDir spvMarkerPos; // towards spawn vector marker
	dirSpawnMarker;
};

getPlayerSpawnLocus = {
	// Direction in which player to spawn
	dirSpawnMarker = player getDir spvMarkerPos; // towards spawn vector marker
	_sin_A = sin dirSpawnMarker; // x component
	_cos_A = cos dirSpawnMarker; // y component

	// spawn locus is 1/2 times the spawn distance (... a radius)
	// spawn locus (center of our spawn area)
	// it's in the direction of our spawn vector marker
	_spawnRadius = .5 * ( ( floor ( random [minSpawnDist, avgSpawnDist, maxSpawnDist] ) ) + 1 );
	_xLocusDist = _spawnRadius * _sin_A;
	_yLocusDist = _spawnRadius * _cos_A;
	_locusX = ( (getPos player) select 0 ) + _xLocusDist;
	_locusy = ( (getPos player) select 1 ) + _yLocusDist;
	// This is the center of our spawn area
	_spawnLocus = [_locusX, _locusy];
	_spawnLocus;

	// systemChat format["Trig: [%1,%2], Locus: %3", _xLocusDist, _yLocusDist, spawnLocus];
};

getRandLocInRadius = {
	params [ "_pos", "_radius" ];
	_dir = floor (random 360);
	systemChat format ["DIRECTION: %1, DISTANCE: %2", _dir, _radius];
	_sin_A = sin dirSpawnMarker; // x component
	_cos_A = cos dirSpawnMarker; // y component  
};

// returns a random arc of certain number of degrees towards a certain direction
getRandARC = {
	params ["_dir", "_arc"];

	// Direction in which player to spawn
	dirSpawnMarker = player getDir spvMarkerPos; // towards spawn vector marker
	_sin_A = sin dirSpawnMarker; // x component
	_cos_A = cos dirSpawnMarker; // y component
};

[] spawn {
	while { true } do {
		sleep 2;
		spawnLocus = [] call getPlayerSpawnLocus;
		[ getPos player, 1000 ] call getRandLocInRadius;
		// systemChat format ["LOCUS: %1", spawnLocus];
		systemChat format ["DEGREES: %1", -370 % 360];
	};
};

		// _xspawnDist = spawnDist * _sin_A; // max distance west-east;
		// _yspawnDist = spawnDist * _cos_A; // max distance south-north; 

		// _spawnVec = (getPos player) vectorFromTo spvMarkerPos;
		// _spawnVec_X = abs (_spawnVec select 0) / (_spawnVec select 0);
		// _spawnVec_Y = abs (_spawnVec select 1) / (_spawnVec select 1);
		// systemChat format["DIRECTION: %1, VECTOR [%2,%3], TRIG: [%4,%5]", dirSpawnMarker, _spawnVec_X, _spawnVec_Y, _sin_A, _cos_A];  