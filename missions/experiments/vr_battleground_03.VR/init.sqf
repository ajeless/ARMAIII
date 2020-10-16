cleanupRate = 1;
cleanupInterval = 1;

[] spawn tgro_fnc_deleteTheDead;

_waveGroups = [] call tgro_fnc_readWaveGroups;
_waveGroupsO = _waveGroups select 0;
_waveGroupsB = _waveGroups select 1;
_waveGroupsI = _waveGroups select 2;
  
while {true} do {
	sleep 30;
	[_waveGroupsInd] call tgro_fnc_spawnRandomGroup;
};
