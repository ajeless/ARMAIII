private _count = 0;

private _carnageClasses = [
	"B_Soldier_A_F",
	"B_soldier_M_F",
	"C_man_p_beggar_F",
	"C_man_1",
	"C_Man_casual_1_F",
	"C_Man_casual_3_F",
	"C_man_sport_3_F",
	"C_man_polo_1_F",
	"C_man_polo_4_F",
	"C_man_1_1_F",
	"C_Man_ConstructionWorker_01_Black_F",
	"C_Driver_3_F",
	"C_Marshal_F",
	"C_man_polo_2_F",
	"C_man_p_beggar_F_afro",
	"C_Man_casual_3_F_afro",
	"C_man_sport_2_F_afro",
	"C_Man_casual_4_F_afro",
	"C_IDAP_Offroad_02_unarmed_F",
	"C_IDAP_Van_02_vehicle_F",
	"C_Van_01_fuel_F",
	"C_Hatchback_01_F",
	"C_Offroad_02_unarmed_F",
	"C_Offroad_01_repair_F",
	"C_Van_01_transport_F",
	"C_Van_01_box_F",
	"C_Van_02_vehicle_F",
	"C_Truck_02_box_F",
	"C_Truck_02_fuel_F",
	"C_Truck_02_covered_F",
	"C_Heli_Light_01_civil_F"
];

while {true} do {
	sleep 10;
	_count = _count + 1;
	private _mrkrName = format ["DROP_%1", _count];
	private _rndPos = [["TGAT_C"]] call BIS_fnc_randomPos;
	_mrkr = createMarker [_mrkrName, _rndPos];
	_mrkr setMarkerType "mil_triangle";
	["Smoke_120mm_AMOS_White", _rndPos] call TG_fnc_dropObject;
};

