class BLUFOR { 
	class baseUnit {
		ace_earplugs = 1;
		headgearRandom = 1;
		gogglesRandom = 0;
		uniformRandom = 0;
		backpackRandom = 1;
		vestRandom = 1;			
		
		weapons[] = {"rhs_weap_hk416d10_LMT_d",};
		priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhsusf_acc_eotech_552_d","rhsusf_acc_anpeq15_top",};
		secKit[] = {};
		pisKit[] = {};
		
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		
		headgear[] = {
			"rhsusf_ach_helmet_ocp","rhsusf_ach_helmet_ocp_alt","rhsusf_ach_helmet_ESS_ocp","rhsusf_ach_helmet_ESS_ocp_alt","rhsusf_ach_helmet_headset_ocp","rhsusf_ach_helmet_headset_ocp_alt","rhsusf_ach_helmet_headset_ess_ocp","rhsusf_ach_helmet_headset_ess_ocp_alt","rhsusf_ach_helmet_camo_ocp","rhsusf_ach_helmet_ocp_norotos"
		};
		goggles[] = {};
		
		uniform[] = {
			"rhs_uniform_g3_mc",
		};
			uniformContents[] = {
				{"ACE_fieldDressing",5},
				{"ACE_packingBandage",5},
				{"ACE_quikclot",5},
				{"ACE_splint",1},
				{"ACE_morphine",1},
				{"ACE_salineIV_500",1},
				{"ACE_MapTools",1},
			};
			
		vest[] = {
			"rhsusf_spcs_ocp_rifleman","rhsusf_spcs_ocp_rifleman_alt",						
		};
			vestContents[] = {					
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},
				{"HandGrenade",2},
				{"SmokeShell",2},
				{"rhsusf_ANPVS_15",1},
			};
			
		backpack[] = {
			"rhsusf_falconii_mc"
		};
		backpackContents[] = {
				
		};
			
		magazines[] = {}; items[] = {};
	};
	
	class R: baseUnit {
		backpackContents[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},	
			{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2},
			{"HandGrenade",2},
			{"SmokeShell",2},			
		};
	};
	
	class TL: baseUnit {
			vestContents[] = {					
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},
				{"HandGrenade",2},
				{"SmokeShell",2},
				{"rhsusf_ANPVS_15",1},
				{"ACRE_PRC152",1},
			};
		backpackContents[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",3},	
			{"HandGrenade",2},
			{"SmokeShell",2},
			{"SmokeShellRed",2},
			{"SmokeShellBlue",2},
			{"SmokeShellGreen",2},
		};
	};
	
	class FSO: baseUnit {
		assignedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","B_UavTerminal"};
			vestContents[] = {					
				{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},
				{"HandGrenade",2},
				{"SmokeShell",2},
				{"SmokeShellRed",2},
				{"ACRE_PRC152",1},
				{"rhsusf_ANPVS_15",1},
			};
		backpackContents[] = {
				{"ITC_Land_B_AR2i_Packed",1},
				{"SmokeShellBlue",2},
				{"SmokeShellGreen",2},
		};
	};
	
	class MED: baseUnit {
		backpackContents[] = {
					{"ACE_fieldDressing",15},
					{"ACE_morphine",15},
					{"ACE_tourniquet",5},	
					{"ACE_epinephrine",15},
					{"ACE_packingBandage",10},
					{"ACE_quikclot",15},
					{"ACE_elasticBandage",20},
					{"ACE_splint",8},
					{"ACE_salineIV_250",8},
					{"ACE_surgicalkit",1},				
		};
	};
	
	class AR: baseUnit {
		weapons[] = {"rhs_weap_m249_pip_L",};
		priKit[] = {"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp","rhsusf_acc_eotech_552","rhsusf_acc_anpeq15side_bk"};
		vestContents[] = {					
			{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2},
			{"HandGrenade",2},
			{"SmokeShell",2},
			{"rhsusf_ANPVS_15",1},
		};
		backpackContents[] = {
			{"rhsusf_200Rnd_556x45_M855_mixed_soft_pouch_ucp",2},	
			{"HandGrenade",2},
			{"SmokeShell",2},			
		};
	};
	
	class MARK: baseUnit {
		weapons[] = {"rhs_weap_hk416d145_d",};
		priKit[] = {"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan","rhsusf_acc_su230a_mrds_c","rhsusf_acc_anpeq15side_bk"};
		vestContents[] = {					
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},
			{"HandGrenade",2},
			{"SmokeShell",2},
			{"rhsusf_ANPVS_15",1},
		};
		backpackContents[] = {
			{"rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan",6},	
			{"HandGrenade",2},
			{"SmokeShell",2},			
		};
	};
	
	class PILOT: baseUnit {
		weapons[] = {"rhsusf_weap_MP7A2",};
		priKit[] = {"rhsusf_mag_40Rnd_46x30_FMJ"};
		headgear[] = {
			"rhsusf_hgu56p_black","rhsusf_hgu56p_visor_black","rhsusf_hgu56p_mask_black","rhsusf_hgu56p_visor_mask_Empire_black","rhsusf_hgu56p_visor_black","rhsusf_hgu56p_green","rhsusf_hgu56p_mask_green_mo","rhsusf_hgu56p_visor_green","rhsusf_hgu56p_visor_mask_green_mo","rhsusf_hgu56p","rhsusf_hgu56p_mask","rhsusf_hgu56p_mask_mo","rhsusf_hgu56p_mask_skull","rhsusf_hgu56p_visor","rhsusf_hgu56p_visor_mask","rhsusf_hgu56p_visor_mask_mo","rhsusf_hgu56p_visor_mask_skull","rhsusf_hgu56p_pink","rhsusf_hgu56p_visor_pink","rhsusf_hgu56p_mask_smiley","rhsusf_hgu56p_visor_mask_smiley"
		};
		uniform[] = {
			"rhs_uniform_g3_tan",
		};
		vest[] = {
			"rhsusf_mbav_light",				
		};
		vestContents[] = {					
			{"rhsusf_mag_40Rnd_46x30_FMJ",6},
			{"SmokeShellRed",2},
			{"ACRE_PRC152",1},
			{"rhsusf_ANPVS_15",1},
		};	
		backpack[] = {
			"rhsusf_falconii_coy","rhsusf_falconii_mc"
		};
		backpackContents[] = {
			{"ToolKit",1}
		};
	};
	
};