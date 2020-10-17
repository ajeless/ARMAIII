
_rndPosInSWM = 'SWM_EAST' call BIS_fnc_randomPosTrigger;
_rndPosInAWM = 'AWM_EAST' call BIS_fnc_randomPosTrigger;

systemChat format ["%1", _rndPosInSWM];

_grp = [_rndPosInSWM, EAST, (configfile >> "CfgGroups" >> "East" >> "gm_gc_army" >> "gm_infantry_80" >> "gm_ge_army_infantry_mggroup_str")] call BIS_fnc_spawnGroup;
_wp =_grp addWaypoint [_rndPosInAWM, 1];
_wp setWaypointType "HOLD";

_rndPosInSWM
// [ 
// 	[
// 		[position player, 50]
// 	], 
// 	[] 
// ] call BIS_fnc_randomPos;  