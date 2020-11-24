#include "config.sqf";

if (!isServer) exitWith {};

60 setOvercast (random 1);
60 setFog (random .35);

skipTime (4.5 - daytime + 24 ) % 24;// Skip forward to a specific time, irrespective of the current mission time

// Create Carnage
for "_i" from 1 to 30 do { 
	[selectRandom CarnageClasses, [[GlobalObjective]] call BIS_fnc_randomPos ] call TGRO_fnc_dropObject;
 };

 [GlobalObjective, 3] call TGRO_fnc_ambientDestruction;

[] execVM "scripts\updateFriendFoeRatioInPanagia.sqf";
[] execVM "scripts\checkPanagiaInsertCapture.sqf";

[] execVM "scripts\initInsertionTeamsWest.sqf";
[] execVM "scripts\doInsertionWest.sqf";
[] execVM "scripts\initOpforPanagiaGarrison.sqf";
[] execVM "scripts\doInsertionEast.sqf";
[] execVM "scripts\shellPanagia.sqf";

null = [] spawn {
	
};