player setVariable["Saved_Loadout",getUnitLoadout player];
playerMobileSpawnPoint = createMarker [format ["respawn_west_%1", name player], player];
playerMobileSpawnPoint setMarkerType "mil_triangle";
playerMobileSpawnPoint setMarkerAlpha 0;
playerMobileSpawnPoint setMarkerText name player;
onMapSingleClick "playerMobileSpawnPoint setMarkerPos _pos";