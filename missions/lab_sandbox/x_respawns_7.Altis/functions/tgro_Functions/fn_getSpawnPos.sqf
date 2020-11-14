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