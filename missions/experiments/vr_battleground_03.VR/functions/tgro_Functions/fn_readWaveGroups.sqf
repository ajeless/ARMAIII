_waveGroupsO = [
	(configfile >> "CfgGroups" >> "East" >> "gm_gc_army" >> "gm_infantry_80" >> "gm_ge_army_infantry_mggroup_str"),
	(configfile >> "CfgGroups" >> "East" >> "CUP_O_RU" >> "Infantry_M_EMR" >> "CUP_O_RU_InfSquad_M_EMR"),
	(configfile >> "CfgGroups" >> "East" >> "CUP_O_RU" >> "Infantry_VDV_EMR" >> "CUP_O_RU_InfSquad_VDV_EMR"),
	(configfile >> "CfgGroups" >> "East" >> "CUP_O_TK_MILITIA" >> "Infantry" >> "CUP_O_TK_MILITIA_Group"),
	(configfile >> "CfgGroups" >> "East" >> "UNSUNG_E_NVA" >> "NVA68Infantry" >> "NVA_68heavyweaponsquad1")
];

_waveGroupsB = [
	(configfile >> "CfgGroups" >> "West" >> "CUP_B_US_Army" >> "Infantry" >> "CUP_B_US_Army_RifleSquad_UCP"),
	(configfile >> "CfgGroups" >> "West" >> "CUP_B_USMC" >> "Infantry" >> "CUP_B_USMC_InfSquad"),
	(configfile >> "CfgGroups" >> "West" >> "UNSUNG_NZ" >> "nzInfantry1" >> "nz_weaponsquad1"),
	(configfile >> "CfgGroups" >> "West" >> "FFAA" >> "SpecOps" >> "ffaa_FGNE_SpecialTeam_ds"),
	(configfile >> "CfgGroups" >> "West" >> "BLU_F" >> "Infantry" >> "BUS_InfAssault")
];

_waveGroupsI = [
	(configfile >> "CfgGroups" >> "Indep" >> "CUP_I_PMC_ION" >> "Infantry" >> "CUP_I_PMC_ION_Security_Detail"),
	(configfile >> "CfgGroups" >> "Indep" >> "LIB_US_RANGERS" >> "Infantry" >> "LIB_US_Rangers_infantry_squad"),
	(configfile >> "CfgGroups" >> "Indep" >> "IND_G_F" >> "Infantry" >> "HRG_InfSquad_Weapons"),
	(configfile >> "CfgGroups" >> "Indep" >> "UNSUNG_G_ARVN" >> "uns_grpARVN_Infantry"),
	(configfile >> "CfgGroups" >> "Indep" >> "CUP_I_UN" >> "Infantry_FST" >> "CUP_I_UN_Patrol_FST")
];

[_waveGroupsO, _waveGroupsB, _waveGroupsI]