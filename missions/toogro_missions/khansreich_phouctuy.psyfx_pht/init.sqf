[] spawn {
  while{not isnull HVT} do {"respawn_west" setmarkerpos getpos HVT; sleep 30;};
};
[] spawn {
  while{not isnull HVT2} do {"respawn_west_1" setmarkerpos getpos HVT2; sleep 30;};
};

if ((!isServer) && (player != player)) then {waitUntil {player == player};};

scan_1 = true; publicVariable "scan_1";