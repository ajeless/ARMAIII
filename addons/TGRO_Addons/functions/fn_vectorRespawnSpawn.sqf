if (TGRO_PRESERVE_LOADOUT) then {
	removeAllWeapons player;
	removeGoggles player;
	removeHeadgear player;
	removeVest player;
	removeUniform player;
	removeAllAssignedItems player;
	clearAllItemsFromBackpack player;
	removeBackpack player;
	player setUnitLoadout(player getVariable["Loadout",[]]);
};
deleteMarker PlayerRespawnPoint;
missionNamespace setVariable ["PlayerRespawnPoint", nil];