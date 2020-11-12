# Preserving Player Inventory on Death

This code saves the player's loadout when they're killed and adds it back when they respawn.  This is necessary for preserving inventory counts for ammo, medkits, explosives, etc...

## Dependencies  
Customize this as you see fit (if you know what you're doing).  The following constitutes a working example so it can be copied/pasted as is.
```bash
mission_root_directory
    |-onPlayerKilled.sqf
    |-onPlayerRespawn.sqf
```

### onPlayerKilled.sqf
```SQF
player setVariable["Saved_Loadout",getUnitLoadout player];
```

### onPlayerRespawn.sqf
```SQF
removeAllWeapons player;
removeGoggles player;
removeHeadgear player;
removeVest player;
removeUniform player;
removeAllAssignedItems player;
clearAllItemsFromBackpack player;
removeBackpack player;
player setUnitLoadout(player getVariable["Saved_Loadout",[]]);
deleteMarker format ["respawn_west_%1", name player];
```