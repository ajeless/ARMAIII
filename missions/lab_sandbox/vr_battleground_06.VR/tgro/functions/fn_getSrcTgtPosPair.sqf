// Takes names of source and target marker and returns 
// [_randomPositionInSourceMarker, _randomPositionInTargetMarker]

params ["_sourceMarker", "_targetMarker"];

private _randomPosSrc = [[_sourceMarker], ["water"]] call BIS_fnc_randomPos;
private _randomPosTgt = [[_targetMarker], ["water"]] call BIS_fnc_randomPos;

[_randomPosSrc, _randomPosTgt];