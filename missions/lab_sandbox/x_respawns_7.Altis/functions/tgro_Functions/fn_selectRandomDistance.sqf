// takes min, avg, max distance
// returns a random distance between min and max 
// but usually closer to avg

params ["_minDist", "_avgDist", "_maxDist"];
_randomDist = random [_minDist, _avgDist, _maxDist];
_randomDist;