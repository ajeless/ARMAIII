// must start with respawn_<SIDE> in order to create a spawn marker
PlayerSpawnVarTemplate = format ["respawn_%1_%2", playerSide, '%1'];

// marker variable scripts look here to determine direction of the spawn location
// players will always spawn in this general direction
SpawnVectorMarker = "SPAWN_VECTOR_MARKER"; // name of your spawn vector marker

// # degrees for spawn direction random variation
// bisected by direction of spawn vector marker
SpawnARC = 90;

// minimum spawn distance from location of death
SpawnDistMin = 50;

// average spawn distance from location of death
SpawnDistAvg = 100;

// maximum spawn distance from location of death
SpawnDistMax = 150;

// true = keep inventory at time of death 
// false = don't keep ... spawn with replenished inventory
PreserveInventory = true;

// resupply vehicle/container/vessel class ... to customize the container vessel
ResupplyVehicle = "Land_MetalCase_01_small_F";

// change classes and numbers here 
// for magazine names use loadout editor 
// or https://community.bistudio.com/wiki/Arma_3_CfgMagazines
// max number of random resupply units (random up to that #)
// don't delete any variables
RessuplyFAK = ["FirstAidKit", 1];
ResupplyPrimaryMag = ["100Rnd_65x39_caseless_mag", 1];
RessuplyGrenade = ["HandGrenade", 1];

if ((!isServer) && (player != player)) then {waitUntil {player == player};};

scan_1 = true; publicVariable "scan_1";