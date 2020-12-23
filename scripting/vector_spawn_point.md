# Player Vector Spawn Point

This code will spawn a player in the direction of a vector marker.  It can be used in scenarios where spawning in a certain direction is desired while keeping the rest of the map off limits. If this will be customized it's helpful to understand the following concepts.  If the intention is to copy and paste then familiarity with these topics is not really necessary.  

* [ARMAIII Functions library](https://community.bistudio.com/wiki/Arma_3_Functions_Library)  
* [ARMAIII Event Scripts](https://community.bistudio.com/wiki/Event_Scripts)  
* [ARMAIII Initialization Order](https://community.bistudio.com/wiki/Initialization_Order)

## Dependencies  
Customize this as you see fit (if you know what you're doing).  The following constitutes a working example so it can be copied/pasted as is.
```bash
mission_root_directory
    |-description.ext
    |-init.sqf
    |-onPlayerKilled.sqf
    |-functions
        |\tgro_Functions
            |-fn_manageVectorSpawn.sqf
            |-fn_vectorMarkerDir.sqf
            |-fn_vectorArc.sqf
            |-fn_selectRandomOnARC.sqf
            |-fn_selectRandomDistance.sqf
            |-fn_getXYComponents.sqf
            |-fn_getSpawnPos.sqf
```

### description.ext
```SQF
author			= "Ajeless";
onLoadName		= "Spawn Circus";
onLoadMission	= "Keep on dyin baby! :p";

class Header
{
	gameType =  Coop;	// Game type
	minPlayers =  1;	// minimum number of players the mission supports
	maxPlayers = 2;	// maximum number of players the mission supports
};

respawnOnStart=-1;
respawnDelay=10;

class CfgFunctions
{
	file = "functions";
	class tgro
	{
		class tgro_Functions
		{
			class vectorMarkerDir {description = "Looks for SPAWN_VECTOR_LOCATOR marker on map";};
			class vectorArc {description = "Returns the start point and length in degrees of an arc, whose bisector is a direction";};
			class selectRandomOnARC {description = "Returns a random point between the start/end points of a given arc";};
			class selectRandomDistance {description = "Returns a random distance given min, avg, max parameters";};
			class getXYComponents {description = "Takes a direction in degrees and returns the x, y vector components";};
			class getSpawnPos  {description = "Takes a distance and dir x, y vectors and returns an absolute spawn position";};
			class manageVectorSpawn  {description = "Return a spawn for the player in the direction of the spawn vector marker";};
		};
	};
};
```

### init.sqf
```SQF

// must start with respawn_<SIDE> in order to create a spawn marker
PlayerSpawnVarTemplate = format ["respawn_%1_%2", playerSide, '%1'];

// marker variable scripts look here to determine direction of the spawn location
// players will always spawn in this general direction
SpawnVectorMarker = "SPAWN_VECTOR_MARKER"; // name of your spawn vector marker

// # degrees for spawn direction random variation
// bisected by direction of spawn vector marker
SpawnARC = 90;

// minimum spawn distance from location of death
SpawnDistMin = 50;

// average spawn distance from location of death
SpawnDistAvg = 100;

// maximum spawn distance from location of death
SpawnDistMax = 150;
```

### onPlayerKilled.sqf
```SQF
[] call tgro_fnc_manageVectorSpawn;
```

### fn_manageVectorSpawn.sqf
```SQF
playerMobileSpawnPoint = createMarker [format [PlayerSpawnVarTemplate, name player], player];
playerMobileSpawnPoint setMarkerType "mil_triangle";
playerMobileSpawnPoint setMarkerAlpha 0;
playerMobileSpawnPoint setMarkerText name player;
_theSpawnVector = [SpawnVectorMarker] call tgro_fnc_vectorMarkerDir;
_theSpawnARC = [_theSpawnVector, SpawnARC] call tgro_fnc_vectorArc;
_theSpawnDir = _theSpawnARC call tgro_fnc_selectRandomOnARC;
_theRandomDist = [SpawnDistMin, SpawnDistAvg, SpawnDistMax] call tgro_fnc_selectRandomDistance;
_theXYComponents = [_theSpawnDir] call tgro_fnc_getXYComponents;
_theAbsoluteSpawnPosition = [_theXYComponents, _theRandomDist] call tgro_fnc_getSpawnPos;
playerMobileSpawnPoint setMarkerPos _theAbsoluteSpawnPosition;
```

### fn_vectorMarkerDir.sqf
```SQF
// looks for SVLoc marker on map 
// returns direction relative to player on map
params ["_spawnVectorMarker"];
_vectorMarkerPos = getMarkerPos _spawnVectorMarker;
_vectorMarkerDir = player getDir _vectorMarkerPos;
_vectorMarkerDir;
```

### fn_vectorArc.sqf
```SQF
// takes an initial direction and a length of arc in degrees
// returns array [_arcStart, _arcLength] of the arc in the map
params ["_bisectorDir", "_arcLength"];
_halfArc = _arcLength / 2;
_arcStart = (_bisectorDir - _halfArc) % 360;
[_arcStart, _arcLength];
```

### fn_selectRandomOnARC.sqf
```SQF
// takes an initial direction and a length of arc in degrees
// returns array [_arcStart, _arcLength] of the arc in the map
params ["_bisectorDir", "_arcLength"];
_halfArc = _arcLength / 2;
_arcStart = (_bisectorDir - _halfArc) % 360;
[_arcStart, _arcLength];
```

### fn_selectRandomDistance.sqf
```SQF
// takes min, avg, max distance
// returns a random distance between min and max 
// but usually closer to avg
params ["_minDist", "_avgDist", "_maxDist"];
_randomDist = random [_minDist, _avgDist, _maxDist];
_randomDist;
```

### fn_getXYComponents.sqf
```SQF
// takes a direction in degrees
// returns an array with the x & y components
params ["_dir"];
_sin_A = sin _dir; // x component
_cos_A = cos _dir; // y component 
[_sin_A, _cos_A];
```

### fn_getSpawnPos.sqf
```SQF
// takes x,y components and a distance
// returns 2d absolute coordinates of spawn position on map
// relative to the player's position
params ["_XY", "_dist"];
_sin_A = _XY select 0;
_cos_A = _XY select 1;
playerPos_X = (getPos player) select 0;
playerPos_Y = (getPos player) select 1;
_offset_X = _sin_A * _dist;
_offset_Y = _cos_A * _dist;
_spawnPos_X = playerPos_X + _offset_X;
_spawnPos_Y = playerPos_Y + _offset_Y;
[_spawnPos_X, _spawnPos_Y];
```