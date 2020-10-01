# Player Mobile Spawn Point  

This code allows a player to select a spawn location anywhere on the map. The scripts that require modification are `onPlayerKilled.sqf`, and `onPlayerRespawn.sqf`.

## onPlayerKilled.sqf
When the player is killed we create a marker called `respawn_west_player_name`.  We display it on the screen as `player name`.  When the respawn screen is shown we can click anywhere in the map to spawn there.
```SQF
playerMobileSpawnPoint = createMarker [format ["respawn_west_%1", name player], player];
playerMobileSpawnPoint setMarkerType "mil_triangle";
playerMobileSpawnPoint setMarkerAlpha 0;
playerMobileSpawnPoint setMarkerText name player;
onMapSingleClick "playerMobileSpawnPoint setMarkerPos _pos";
```

## onPlayerRespawn.sqf
We delete said marker on player respawn b/c we don't want it to show the last spawn position on the map.
```SQF
deleteMarker format ["respawn_west_%1", name player];
```
