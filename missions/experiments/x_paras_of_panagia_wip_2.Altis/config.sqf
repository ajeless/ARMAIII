GlobalObjective = "PANAGIA_OBJECTIVE";

FriendFoeRatioInPanagia = 0;

InsertWestHasCapturedPanagia = false;
InsertWestCaptureRatio = .1; 

PanagiaVZones = ["PANAGIA_V_ZONE_1", "PANAGIA_V_ZONE_2", "PANAGIA_V_ZONE_3"];
HQSetup = 0;

EnemySpawnMarkerArray = ["AI_SPAWN_OPFOR_1", "AI_SPAWN_OPFOR_2", "AI_SPAWN_OPFOR_3" ];

FriendlySpawnSupportMarker = "AI_SPAWN_BLUFOR_1";

InsertionVehicle = "B_T_VTOL_01_infantry_F";
IVehicleAirFrame = nil;
IVehicleCrew = nil;

// Insert spawn distance [min, max] Kilometers
ISpawnDist = [ 3000, 5000 ];

// Insert spawn altitude meters
ISpawnAlt = 400;


// Insertion teams
IteamAlpha1 = createGroup WEST;
IteamAlpha2 = createGroup WEST;
IteamAlpha3 = createGroup WEST;

IteamAlpha1Classes = [
	"CUP_B_BAF_Soldier_Officer_DPM",
	"CUP_B_BAF_Soldier_Rifleman_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_RiflemanAT_DPM",
	"CUP_B_BAF_Soldier_AT_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_Medic_DPM",
	"CUP_B_BAF_Soldier_Paratrooper_DPM"
];

IteamAlpha2Classes = [
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

IteamAlpha3Classes = [
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

// Drop parameters
DropMinDist = 250;
DropAvgDist = 500;
DropMaxDist = 750; // 1Km

TimeBetweenJumpsMin = .1; // seconds
TimeBetweenJumpsAvg = .2; // seconds
TimeBetweenJumpsMax = .3; // seconds

DistanceCheckFrequencyMin = .1; // seconds
DistanceCheckFrequencyAvg = .25; // seconds
DistanceCheckFrequencyMax = .5; // seconds

// Panagia Opfor Garrison
IonMen = [
	"CUP_I_PMC_Bodyguard_AA12",
	"CUP_I_PMC_Bodyguard_M4",
	"CUP_I_PMC_Contractor1",
	"CUP_I_PMC_Contractor2",
	"CUP_I_PMC_Sniper",
	"CUP_I_PMC_Medic",
	"CUP_I_PMC_Soldier_MG",
	"CUP_I_PMC_Soldier_MG_PKM",
	"CUP_I_PMC_Soldier_AT",
	"CUP_I_PMC_Engineer",
	"CUP_I_PMC_Soldier_M4A3",
	"CUP_I_PMC_Soldier",
	"CUP_I_PMC_Soldier_GL",
	"CUP_I_PMC_Soldier_GL_M16A2",
	"CUP_I_PMC_Crew",
	"CUP_I_PMC_Pilot",
	"CUP_I_PMC_Sniper_KSVK",
	"CUP_I_PMC_Soldier_AA",
	"CUP_I_PMC_Soldier_TL"
];

IonVehicles = [
	"CUP_I_SUV_Armored_ION",
	"CUP_I_FENNEK_ION",
	"CUP_I_FENNEK_GMG_ION",
	"CUP_I_MATV_HMG_ION",
	"CUP_I_4WD_LMG_ION",
	"CUP_I_LSV_02_Minigun_ION",
	"CUP_I_RG31_Mk19_ION",
	"CUP_I_RG31_M2_GC_ION",
	"CUP_I_Van_Transport_ION"
];

IonGroups = [];

IonVehicleCrew = nil;


// Blufor first support teams

ETeamAlpha1 = createGroup WEST;
ETeamAlpha2 = createGroup WEST;
ETeamAlpha3 = createGroup WEST;

ETeamAlpha1Classes = [
	"CUP_B_BAF_Soldier_Officer_DPM",
	"CUP_B_BAF_Soldier_Rifleman_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_RiflemanAT_DPM",
	"CUP_B_BAF_Soldier_AT_DPM",
	"CUP_B_BAF_Soldier_RiflemanLAT_DPM",
	"CUP_B_BAF_Soldier_Medic_DPM",
	"CUP_B_BAF_Soldier_Paratrooper_DPM"
];

ETeamAlpha2Classes = [
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

ETeamAlpha3Classes = [
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

ETeamVehicleClasses = [
	"CUP_B_FENNEK_GER_Wdl", "CUP_B_FENNEK_GER_Wdl", "CUP_B_FENNEK_GER_Wdl", "CUP_B_FENNEK_GER_Wdl", "CUP_B_FENNEK_GER_Wdl",
	"B_CTRG_LSV_01_light_F", "B_CTRG_LSV_01_light_F", "B_CTRG_LSV_01_light_F", "B_CTRG_LSV_01_light_F", "B_CTRG_LSV_01_light_F", 
	"CUP_B_Wolfhound_LMG_GB_W", "CUP_B_Wolfhound_LMG_GB_W", "CUP_B_Wolfhound_LMG_GB_W", "CUP_B_Wolfhound_LMG_GB_W", "CUP_B_Wolfhound_LMG_GB_W", 
	"CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", "CUP_B_Mastiff_LMG_GB_W", 
	"CUP_B_Ridgback_LMG_GB_W", "CUP_B_Ridgback_LMG_GB_W", "CUP_B_Ridgback_LMG_GB_W", "CUP_B_Ridgback_LMG_GB_W", "CUP_B_Ridgback_LMG_GB_W", 
	"CUP_B_LAV25_HQ_green", "CUP_B_LAV25_HQ_green", "CUP_B_LAV25_HQ_green", "CUP_B_LAV25_HQ_green", "CUP_B_LAV25_HQ_green", 
	"CUP_B_M1165_GMV_USMC", "CUP_B_RG31_M2_OD_USMC", "CUP_B_BAF_Coyote_L2A1_W", "CUP_B_Dingo_GER_Wdl", "CUP_B_HMMWV_M2_USMC", "CUP_B_M151_M2_HIL", "gm_dk_army_m113a2dk", "CUP_B_M60A3_TTS_USMC", "CUP_B_Leopard2A6_GER"
];

ETeamVehicleGroupCrews = [];




