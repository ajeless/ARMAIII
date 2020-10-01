systemChat 'Calling for reinforcements!';
[ getMarkerPos 'EAST_GRP_1_SPAWN',  east, (configfile >> 'CfgGroups' >> 'East' >> 'CUP_O_RU' >> 'Infantry_EMR' >> 'CUP_O_RU_InfSquad_EMR')] call BIS_fnc_spawnGroup;
