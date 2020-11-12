_objective = getMissionConfigValue "GlobalObjectiveMarker";
_fleeing = getMissionConfigValue "FLEEING";
_courage = getMissionConfigValue "COURAGE";
_aimingAccuracy = getMissionConfigValue "AIMING_ACCURACY";
_aimingShake = getMissionConfigValue "AIMING_SHAKE";
_aimingSpeed = getMissionConfigValue "AIMING_SPEED";
_reloadSpeed = getMissionConfigValue "AIMING_SPEED"; 

// The Brits
_alpha_1 = createGroup WEST;

_alpha_1_classes = [
	"CUP_B_BAF_Soldier_Officer_DPM",
	"CUP_B_BAF_Soldier_Rifleman_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_RiflemanAT_DPM",
	"CUP_B_BAF_Soldier_AT_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_Medic_DPM",
	"CUP_B_BAF_Soldier_Paratrooper_DPM"
];

{
	_x createUnit [[23580, 18378], _alpha_1];
} forEach _alpha_1_classes;

[
	units _alpha_1, 
	[
		_fleeing, 
		_courage, 
		_aimingAccuracy, 
		_aimingShake, 
		_aimingSpeed, 
		_reloadSpeed
	]
] call tgro_fnc_setUnitSkills;

// The Germans
_alpha_2 = createGroup WEST;

_alpha_2_classes = [
	"gm_dk_army_squadleader_gvm95_p2a1_90_m84",
	"gm_dk_army_demolition_gvm95_90_m84",
	"gm_dk_army_antiair_gvm95_fim43_90_m84",
	"gm_dk_army_machinegunner_mg3_90_m84",
	"gm_dk_army_antitank_gvm95_pzf84_90_m84",
	"gm_dk_army_marksman_g3a3_90_m84",
	"gm_dk_army_machinegunner_mg3_90_m84",
	"gm_ge_army_engineer_g3a4_80_ols",
	"gm_dk_army_antitank_gvm95_pzf84_90_m84",
	"gm_dk_army_antitank_gvm95_pzf84_90_m84",
	"gm_dk_army_medic_gvm95_90_m84",
	"gm_ge_army_engineer_g3a4_80_ols"
];

{
	_x createUnit [[23580, 18378], _alpha_2];
} forEach _alpha_2_classes;

[
	units _alpha_2, 
	[
		_fleeing, 
		_courage, 
		_aimingAccuracy, 
		_aimingShake, 
		_aimingSpeed, 
		_reloadSpeed
	]
] call tgro_fnc_setUnitSkills;

// Horizon Islands Legionaires
_alpha_3 = createGroup WEST;

_alpha_3_classes = [
	"CUP_B_HIL_SL",
	"CUP_B_HIL_MMG",
	"CUP_B_HIL_Soldier",
	"CUP_B_HIL_GL",
	"CUP_B_HIL_MMG",
	"CUP_B_HIL_Soldier_MAT",
	"CUP_B_HIL_Soldier_LAT",
	"CUP_B_HIL_Medic",
	"CUP_B_HIL_M"
];

{
	_x createUnit [[23580, 18378], _alpha_3];
} forEach _alpha_3_classes;

[
	units _alpha_3, 
	[
		_fleeing, 
		_courage, 
		_aimingAccuracy, 
		_aimingShake, 
		_aimingSpeed, 
		_reloadSpeed
	]
] call tgro_fnc_setUnitSkills;

[_alpha_1, _alpha_2, _alpha_3];