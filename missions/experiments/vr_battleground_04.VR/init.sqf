
// marker templates for spawn waves (can be multiple for each)
SWM_E_TMP = "SWM_E_";
SWM_W_TMP = "SWM_W_";
SWM_I_TMP = "SWM_I_";

// marker groups/lists
SWM_E_List = [];
SWM_W_List = [];
SWM_I_List = [];

// markers for attack (only one for each side for now)
AWM_E = "AWM_E";
AWM_W = "AWM_W";
AWM_I = "AWM_I";

// min, avg, max spawn wave sizes (# of groups in each wave)
SW_Size_E = [1, 2, 3];
SW_Size_W = [1, 2, 3];
SW_Size_I = [1, 2, 3];

// spawn wave timing 
// C - continuous only for now.  
// Spawns waves continuously at defined intervals
// with breaks between intervals throughout the duration.
SW_Initial_Pause = [60,120,180]; // how long before spawning initially starts
SW_Duration = [180, 240, 300]; // how long spawn perods last
SW_Frequency = [60, 60, 60]; // how often spawning occurs within that period
SW_Break = [60, 120, 180]; // how long to rest/stop between periods



while {true} do {
	sleep 1;
	systemChat format ["%1", [] call tgro_fnc_getAllMarkers];
// 	_rndLoc = [] call tgro_fnc_getRndswmEastLoc;
// 	systemChat format ["%1, %2, %3, %4", EAST, WEST, INDEPENDENT, CIVILIAN];
// 	// systemChat format ["%1", _rndLoc];
};