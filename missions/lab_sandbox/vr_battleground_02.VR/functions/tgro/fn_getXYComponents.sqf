// takes min, avg, max distance
// returns a random distance between min and max 
// but usually closer to avg

params ["_dir"];
_sin_A = sin _dir; // x component
_cos_A = cos _dir; // y component 
[_sin_A, _cos_A];