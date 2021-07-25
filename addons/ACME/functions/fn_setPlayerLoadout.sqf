[] spawn {
	removeAllWeapons player;
	removeGoggles player;
	removeHeadgear player;
	removeVest player;
	removeUniform player;
	removeAllAssignedItems player;
	clearAllItemsFromBackpack player;
	removeBackpack player;
	player setUnitLoadout(player getVariable "ACME_Player_Current_Loadout");
};