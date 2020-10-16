// takes an initial direction and a length of arc in degrees
// returns array [_arcStart, _arcLength] of the arc in the map

params ["_bisectorDir", "_arcLength"];
_halfArc = _arcLength / 2;
_arcStart = (_bisectorDir - _halfArc) % 360;
[_arcStart, _arcLength];