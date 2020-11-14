#include "config.sqf";

if (!isServer) exitWith {};

60 setOvercast (random 1);
60 setFog (random .5);

skipTime (5.0 - daytime + 24 ) % 24;// Skip forward to a specific time, irrespective of the current mission time

[] execVM "scripts\updateFriendFoeRatioInPanagia.sqf";
[] execVM "scripts\checkPanagiaInsertCapture.sqf";

[] execVM "scripts\initInsertionTeamsWest.sqf";
[] execVM "scripts\doInsertionWest.sqf";
[] execVM "scripts\initOpforPanagiaGarrison.sqf";
[] execVM "scripts\doInsertionEast.sqf";
[] execVM "scripts\shellPanagia.sqf";

null = [] spawn {
	
};