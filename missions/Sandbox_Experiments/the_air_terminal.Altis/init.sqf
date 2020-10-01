[] spawn {
	while {!isnull bha_01 } do 
	{
		"respawn_west_bha_01" setmarkerpos getpos bha_01; 
		sleep 10;
	};
};

[] spawn {
	while {!isnull bha_02 } do 
	{
		"respawn_westbha_02" setmarkerpos getpos bha_02; 
		sleep 10;
	};
};