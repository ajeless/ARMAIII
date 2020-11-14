// takes an initial direction and a length of arc in degrees
// returns a random direction between _arcStart and up to 
// _arcStart + _arcLength

params ["_arcStart", "_arcLength"];
_randomOffset = floor  (random _arcLength);
_randomDirection = (_arcStart + _randomOffset) % 360;
_randomDirection;