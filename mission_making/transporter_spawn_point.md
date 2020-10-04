# Player Transporter Spawn Point

This code allows a player to select a spawn location anywhere on the map. The scripts that require modification are `onPlayerKilled.sqf`, and `onPlayerRespawn.sqf`. So the mission folder should contain these scripts.  

```bash
mission_root_directory
    |-onPlayerKilled.sqf
    |-onPlayerRespawn.sqf
```

## onPlayerKilled.sqf
```SQF
playerMobileSpawnPoint = createMarker [format ["respawn_west_%1", name player], player];
playerMobileSpawnPoint setMarkerType "mil_triangle";
playerMobileSpawnPoint setMarkerAlpha 0;
playerMobileSpawnPoint setMarkerText name player;
onMapSingleClick "playerMobileSpawnPoint setMarkerPos _pos";
```

When the player is killed create a marker called `respawn_west_player_name`.  Recall that any marker beginning with `respawn_<side>` receives special treatment by the game engine as a spawn point, so whatever interpolation is done must have a `respawn_<side>` prefix. Display it on the map as `player name`.  When the respawn screen is shown click anywhere on the map, and then click the respawn button to spawn at that location.

## onPlayerRespawn.sqf
```SQF
deleteMarker format ["respawn_west_%1", name player];
```

We delete said marker on player respawn b/c we don't want it to show the last spawn position on the map.