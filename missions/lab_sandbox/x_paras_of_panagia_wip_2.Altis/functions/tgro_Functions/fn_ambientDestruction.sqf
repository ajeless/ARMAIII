params ["_areaMarker", "_numWrecks"];

private _wreckObjects = [
	"Land_Wreck_HMMWV_F",
	"Land_Wreck_Skodovka_F",
	"Land_Wreck_CarDismantled_F",
	"Land_Wreck_Truck_F",
	"Land_Wreck_Car2_F",
	"Land_Wreck_Car_F",
	"Land_Wreck_Car3_F",
	"Land_Wreck_Hunter_F",
	"Land_Wreck_Van_F",
	"Land_Wreck_Offroad_F",
	"Land_Wreck_Offroad2_F",
	"Land_Wreck_UAZ_F",
	"Land_Wreck_Truck_dropside_F",
	"Land_V3S_wreck_F",
	"Land_Mi8_wreck_F",
	"Land_Wreck_Heli_Attack_02_F",
	"Land_Wreck_Heli_02_Wreck_01_F",
	"Land_UWreck_MV22_F",
	"Land_Wreck_MBT_04_F",
	"Land_Wreck_LT_01_F",
	"Land_Wreck_Slammer_F",
	"Land_Wreck_Slammer_turret_F",
	"Land_Wreck_T72_hull_F",
	"Land_Wreck_T72_turret_F",
	"Land_Wreck_BRDM2_F",
	"Land_Wreck_BMP2_F",
	"Land_Wreck_AFV_Wheeled_01_F"
];

for "_i" from 1 to _numWrecks do {
	private _wreckPos = [[_areaMarker]] call BIS_fnc_randomPos;
	private _fire = "test_EmptyObjectForFireBig" createVehicle _wreckPos;
	private _wreckClass = selectRandom _wreckObjects;
	private	_wreckObject = _wreckClass createVehicle _wreckPos;
	_fire attachTo [_wreckObject, [0, 0, 1]];
};