// looks for SVLoc marker on map 
// returns direction relative to player on map

params ["_spawnVectorMarker"];
_vectorMarkerPos = getMarkerPos _spawnVectorMarker;
_vectorMarkerDir = player getDir _vectorMarkerPos;
_vectorMarkerDir;