deleteMarker format [PlayerSpawnVarTemplate, name player];

if (PreserveInventory) then {
	removeAllWeapons player;
	removeGoggles player;
	removeHeadgear player;
	removeVest player;
	removeUniform player;
	removeAllAssignedItems player;
	clearAllItemsFromBackpack player;
	removeBackpack player;
	player setUnitLoadout( player getVariable ["PlayerLoadout", []] );	
};