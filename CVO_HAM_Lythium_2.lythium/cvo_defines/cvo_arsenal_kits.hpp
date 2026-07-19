/*
*   CVO Arsenal Define File
*   https://github.com/CVO-Org/CVO-Auxiliary/blob/main/addons/arsenal/readme.md
*   Example File: https://github.com/CVO-Org/CVO-Auxiliary/blob/main/.hemtt/missions/Arsenal.Altis/cvo_arsenal_kits.hpp
*/

class cvo_arsenal_kits
{
    editor_layer_name = "cvo_arsenal_boxes";
    object_variable_names[] = {"source"};

    // Imports Base from configFile
    import baseKit from cvo_arsenal_kits;

    //  MISCELLANEOUS
    class NVGs: baseKit {
        class items {
            class rhs_1PN138 {};
        };
    };

    class GreenMagStuff: baseKit {
        addon_dependency = "greenmag_main";
        class items {
			//class greenmag_ammo_556x45_basic_60Rnd {};
			//class greenmag_ammo_556x45_basic_30Rnd {};

			//class greenmag_ammo_762x51_basic_60Rnd {};
			//class greenmag_ammo_762x51_basic_30Rnd {};

			class greenmag_ammo_545x39_basic_60Rnd {};
			class greenmag_ammo_545x39_basic_30Rnd {};

			class greenmag_ammo_762x39_basic_60Rnd {};
			class greenmag_ammo_762x39_basic_30Rnd {};

			class greenmag_ammo_9x19_basic_60Rnd {};
			class greenmag_ammo_9x19_basic_30Rnd {};

			class greenmag_ammo_765x17_basic_30Rnd {};
			class greenmag_ammo_765x17_basic_60Rnd {};

			class greenmag_ammo_762x54_basic_60Rnd {};
			class greenmag_ammo_762x54_basic_30Rnd {};
			
			class greenmag_beltlinked_762x54_basic_50 {};
			class greenmag_beltlinked_762x54_tracer_50 {};
			class greenmag_beltlinked_762x54_basic_100 {};
			class greenmag_beltlinked_762x54_tracer_100 {};
			class greenmag_beltlinked_762x54_basic_150 {};
			class greenmag_beltlinked_762x54_tracer_150 {};
			class greenmag_beltlinked_762x54_basic_200 {};
			class greenmag_beltlinked_762x54_tracer_200 {};

			class greenmag_item_speedloader {};
        };
    };
	
    class Rations: baseKit {
        condition = "missionNamespace getVariable ['ace_field_rations_enabled', true]";
        class items {
	        class ACE_MRE_BeefStew {};
	        class ACE_MRE_ChickenTikkaMasala {};
	        class ACE_MRE_ChickenHerbDumplings {};
	        class ACE_MRE_CreamChickenSoup {};
	        class ACE_MRE_CreamTomatoSoup {};
	        class ACE_MRE_LambCurry {};
	        class ACE_MRE_MeatballsPasta {};
	        class ACE_MRE_SteakVegetables {};
        };
    };

    class Binoculars: baseKit {
        class items {
            class Binocular {};

            class Old_Camera_HUD {};
            class Old_Camera {};
            class Old_Camera_Color_HUD {};
            class Old_Camera_Color {};
			class rhs_tr8_periscope_pip {};
			class rhs_tr8_periscope {};
        };
    };

    class Immersion_Cigs: baseKit {
        addon_dependency = "cigs_core";
        class items {
            class cigs_Apollo_cigpack {};
            class cigs_black_devil_cigpack {};
            class cigs_cigars_cigarbox_5 {};
            class cigs_craven_cigpack {};
            class cigs_eckstein_cigpack {};
            class cigs_Kosmos_cigpack {};
            class cigs_pops_poppack {};
            class cigs_lucky_strike_cigpack {};
            class cigs_morley_cigpack {};
            class cigs_baja_blast_cigpack {};
            //class cigs_crayons_crayonpack {};
        };
    };

    // RADIOS
    class Radios_Base: baseKit {
        class items {
            class ACRE_PRC343 {};
        };
    };

    class Radios_Leadership: baseKit {
        role = "Leadership";
        class items {
            class ACRE_PRC148 {};
        };
    };

    // Wearables / Gear
    class Base_Uniforms: baseKit {
        class items {
            class UK3CB_TKP_B_U_CIB_CombatUniform_BLK {};
            class UK3CB_TKP_B_U_CIB_CombatUniform_Shortsleeve_BLK {};
            class UK3CB_TKP_I_U_CIB_CombatUniform_DBLU {};
            class UK3CB_TKP_O_U_CIB_CombatUniform_Ten_1 {};
            class UK3CB_TKP_I_U_CombatUniform_BLK {};
            class UK3CB_TKP_I_U_QRF_CombatUniform_BLK {};
            class UK3CB_TKP_I_U_Officer_BLK {};
            class UK3CB_TKP_O_U_Officer_Blk {};
            class UK3CB_TKP_O_U_QRF_CombatUniform_Blk {};
            class UK3CB_TKP_O_U_CombatUniform_Blk {};
        };
    };

    class Base_Vests: baseKit {
        class items {
            class rhs_belt_AK4_back {};
            class UK3CB_TKP_B_V_TacVest_Tan {};
            class UK3CB_TKP_B_V_TacVest_Blk {};
            class UK3CB_TKP_B_V_GA_HEAVY_BLK {};
            class UK3CB_TKP_B_V_GA_LITE_BLK {};
            class UK3CB_TKP_I_V_6Sh92_Radio_Tan {};
            class UK3CB_TKP_I_V_6Sh92_Tan {};
            class UK3CB_TKP_I_V_6Sh92_Radio_Des {};
            class UK3CB_TKP_I_V_6Sh92_Des {};
            class UK3CB_TKP_I_V_6Sh92_Radio_Khk {};
            class UK3CB_TKP_I_V_6Sh92_Khk {};
            class UK3CB_TKP_I_V_6Sh92_Radio_Blk {};
            class UK3CB_TKP_I_V_6Sh92_Blk {};
            class UK3CB_TKP_O_V_6b23_medic_BLK {};
            class UK3CB_TKP_O_V_6b23_ML_6sh92_radio_BLK {};
            class UK3CB_TKP_O_V_6b23_ml_BLK {}; 
        };
    };

    class Base_Backpacks: baseKit {
        class items {
			class UK3CB_TKA_O_B_ENG_Khk {};
        	class UK3CB_TKA_O_B_RIF_Khk {};
        	class UK3CB_TKP_O_B_ASS_BLK {};
			class UK3CB_UN_B_B_ASS {};
        	class B_LegStrapBag_black_F {};
        	class B_Messenger_Black_F {};
        	class B_Messenger_Coyote_F {};
			class B_Messenger_Gray_F {};
			class rhs_rpg_empty {};
        	class rhs_rpg_2 {};
			class rhs_rpg_6b2 {};
			class rhs_rpg_6b3 {};
        };
    };

    class Base_Headgear: baseKit {
        class items {
            class UK3CB_TKP_I_H_Beret {};
            class UK3CB_TKP_O_H_Beret {};
            class UK3CB_TKP_O_H_Patrolcap_Blk {};
            class UK3CB_TKP_B_H_Patrolcap_TAN {};
            class UK3CB_TKA_O_H_6b7_1m_bala1_TAN {};
            class UK3CB_TKA_O_H_6b7_1m_ess_bala1_TAN {};
            class UK3CB_TKA_O_H_6b7_1m_bala2_DES {};
            class UK3CB_ARD_B_H_Crew_Cap_Ess {};
            class UK3CB_H_Crew_Cap_Ess {};
            class UK3CB_H_Crew_Cap {};
            class UK3CB_ARD_B_H_Crew_Cap {};
            class H_Cap_tan {};
            class H_Cap_blk {};
			class rhs_gssh18 {};
            class UK3CB_TKA_O_H_6b27m_Tan {};
            class UK3CB_TKA_O_H_6b27m_ESS_Tan {};
            class UK3CB_ADA_B_H_6b27m_ml_ESS_OLI {};
            class UK3CB_ADA_B_H_6b27m_ml_OLI {};
			class UK3CB_H_Beanie_02_GRY {};
			class UK3CB_H_Beanie_02_BRN {};
			class UK3CB_H_Beanie_02_BLK {};
			class rhs_beanie_green {};
        };
    };

    class Base_Facewear: baseKit {
        class items {
            class G_Aviator {}; 
            class G_Combat {}; 
            class G_Lowprofile {}; 
			class G_Respirator_white_F {};
			class G_Bandanna_blk {};
			class G_Bandanna_khk {};
			class G_Balaclava_blk {}; 
			class G_Bandanna_tan {};
			class rhs_googles_yellow {};
			class rhs_googles_orange {};
			class rhs_googles_clear {};
			class rhs_googles_black {};
			class rhs_ess_black {};
			class rhsusf_shemagh_od {};
			class rhsusf_shemagh2_od {};
			class rhsusf_shemagh_tan {};
			class rhsusf_shemagh2_tan {};
			class rhs_scarf {};
			class UK3CB_G_Balaclava2_DES {};
			class UK3CB_G_Balaclava2_BLK {};
			class UK3CB_G_KLR_TAN {};
			class UK3CB_G_KL_BLK {};
			class UK3CB_G_KL_TAN {};
			class UK3CB_G_Neck_Shemag {};
			class UK3CB_G_Neck_Shemag_Tan {};
			class UK3CB_G_Neck_Shemag_KLR_blk {};
			class UK3CB_G_Neck_Shemag_KLR_tan {};
			class UK3CB_G_Neck_Shemag_KL_blk {};

        };
    };

    // Weapons
    class Weapons_Primary_SMGs: baseKit {
        class items {
			//Vz. 61
			class rhs_weap_savz61 {};
			class rhsgref_20rnd_765x17_vz61 {};
			//PP2000
			class rhs_weap_pp2000 {};
			class rhs_mag_9x19mm_7n21_44 {};
			class rhs_mag_9x19mm_7n21_20 {};
        };
    };


    class Weapons_Primary_AKs: baseKit {
        class items {
			//5.45x39mm rifles
            class rhs_weap_ak74m_fullplum {};
            class rhs_weap_ak74m_desert {};
            class rhs_weap_ak74m_camo {};
            class rhs_weap_ak74m {};
			class rhs_weap_ak105 {};
			class rhs_weap_aks74u {};
			class rhs_weap_aks74un {};
			class rhs_weap_aks74n {};
			class rhs_weap_aks74n_2 {};
			class rhs_weap_aks74 {};
			class rhs_weap_aks74_2 {};
			class rhs_weap_ak74n {};
			class rhs_weap_ak74n_2 {};
            //5.45x39mm magazines
            class rhs_30Rnd_545x39_7N10_AK {};
            class rhs_30Rnd_545x39_7N10_plum_AK {};
            class rhs_30Rnd_545x39_7N10_desert_AK {};
            class rhs_30Rnd_545x39_7N10_camo_AK {};
            class rhs_30Rnd_545x39_AK_plum_green {};
            class rhs_30Rnd_545x39_7N6M_plum_AK {};
			class rhs_30Rnd_545x39_7N10_2mag_plum_AK {};
			class rhs_30Rnd_545x39_7N10_2mag_desert_AK {};
			class rhs_30Rnd_545x39_7N10_2mag_camo_AK {};
			class rhs_30Rnd_545x39_7N10_2mag_AK {};
			class rhs_30Rnd_545x39_7N6_AK {};
			class rhs_30Rnd_545x39_7N6M_AK {};
			class rhs_30Rnd_545x39_AK_green {};
			//7.62x39mm rifles
			class rhs_weap_ak104 {};
			class rhs_weap_ak103 {};
			class rhs_weap_akm {};
			class rhs_weap_akms {};
			//7.62x39mm magazines
			class rhs_30Rnd_762x39mm_89 {};
			class rhs_30Rnd_762x39mm_tracer {};
			class rhs_30Rnd_762x39mm_polymer_89 {};
			class rhs_30Rnd_762x39mm_polymer_tracer {};
			class rhs_30Rnd_762x39mm_bakelite_89 {};
			class rhs_30Rnd_762x39mm_bakelite_tracer {};
			//SKS
			class uk3cb_sks_01_sling {};
			class uk3cb_sks_01 {};
			class uk3cb_10rnd_magazine_sks {};
			class uk3cb_muzzle_sks_bayonet {};
			//Enfield
			class UK3CB_Enfield_Rail {};
			class UK3CB_Enfield_10rnd_Mag {};
			class UK3CB_Enfield_10rnd_Mag_YT {};
			/*Fancy weapons
			class rhs_weap_ak74m_zenitco01 {};
			class rhs_weap_ak104_zenitco01 {};
			class rhs_weap_ak103_zenitco01 {};
			class rhs_weap_ak105_zenitco01 {};
			class rhs_30Rnd_545x39_7N22_AK {};
			class rhs_30Rnd_545x39_7N22_plum_AK {};
			class rhs_30Rnd_545x39_7N22_desert_AK {};
			class rhs_30Rnd_545x39_7N22_camo_AK {};
			class rhs_weap_asval {};
			class rhs_weap_vss {};
			class rhs_weap_pkp {};
			class rhs_100Rnd_762x54mmR_7BZ3 {};
			*/
        };
    };

    /*
    class Weapons_Primary_Shotty: baseKit {
        class items {
	        class sgun_Mp153_black_F {};
	        class 4Rnd_12Gauge_Pellets {};
	        class 4Rnd_12Gauge_Slug {};
        };
    };
    */

    class Weapons_Sidearms_Pistols: baseKit {
        class items {
			class rhs_weap_pb_6p9 {};
			class rhs_weap_makarov_pm {};
			class rhs_mag_9x18_8_57N181S {};
			class rhs_weap_6p53 {};
			class rhs_18rnd_9x21mm_7N28 {};
			class rhs_weap_pya {};
			class rhs_mag_9x19_17 {};
			class rhs_weap_rsp30_red {};
			class rhs_weap_rsp30_green {};
			class rhs_weap_rsp30_white {};
			class tsp_meleeWeapon_mpl50_black {};
			class tsp_meleeWeapon_ak {};
        };
    };

    class Weapons_Accessories: baseKit {
        class items {
			//rail
			class acc_flashlight {};
			class rhs_acc_2dpZenit {};
			class rhs_acc_2dpZenit_ris {};
			//muzzle
			class rhs_acc_6p9_suppressor {};
			class rhs_acc_dtkakm {};
			class rhs_acc_dtk {};
			class rhs_acc_dtk1983 {};
			//optics
			class rhs_acc_1p63 {};
			class rhs_acc_okp7_dovetail {};
			class rhs_acc_ekp8_02 {};
			class rhs_acc_pkas {};
			/* Fancy accessories
			class rhs_acc_grip_rk6 {};
			class rhs_acc_grip_rk2 {};
			class rhs_acc_grip_ffg2 {};
			class rhs_acc_perst1ik_ris {};
			class rhs_weap_asval_grip {};
			class rhs_acc_perst3_2dp_light_h {};
			class rhs_acc_perst3_2dp_h {};
			class rhs_weap_vss_grip {};
			class rhs_acc_pso1m21 {};
			*/
        };
    };

    class Weapons_Throwables: baseKit {
        class items {
            class ACE_CTS9 {};
            class HandGrenade {};
            class SmokeShell {};
            class SmokeShellBlue {};
            class SmokeShellGreen {};
            class SmokeShellOrange {};
            class SmokeShellPurple {};
            class SmokeShellRed {};
            class SmokeShellYellow {};
            class MiniGrenade {};
            class ACE_HandFlare_Green {};
            class ACE_HandFlare_Yellow {};
            class ACE_HandFlare_Red {};
            class ACE_HandFlare_White {};
            class Chemlight_yellow {};
            class Chemlight_red {};
            class Chemlight_blue {};
            class Chemlight_green {};
            class ACE_Chemlight_Orange {};
            class ACE_Chemlight_White {};
            class ACE_Chemlight_HiWhite {};
            class ACE_Chemlight_UltraHiOrange {};
        };
    };

    // ROLE KITS
    class EOD: baseKit {
        role = "ExplosiveSpecialist";
        class items {
            class ACE_Clacker {};
			class ACE_wirecutter {};
			class Toolkit {};
            class tsp_breach_popper_mag {};
            class tsp_breach_popper_auto_mag {};
			class ACE_DefusalKit {};
			class ACE_Fortify {};

            class tsp_breach_silhouette_mag {};
            class tsp_breach_stick_mag {};
			class tsp_breach_package_mag {};
			class DemoCharge_Remote_Mag {};
			class rhs_ec75_sand_mag {};
			class rhs_ec200_sand_mag {};
			class rhs_ec400_sand_mag {};
			
			//Minesweepers
            //class MineDetector {}; // Vanilla
			class ACE_VMM3 {};
			class ACE_VMH3 {};
        };
    };

    class MG: baseKit {
        role = "Machinegunner";
        class items {
			class ACE_SpareBarrel_Item {};
			class UK3CB_RPK_74 {};
			class UK3CB_RPK_74_BLK {};
			class UK3CB_RPK_74_PLUM {};
			class rhs_45Rnd_545X39_7N10_AK {};
			class rhs_45Rnd_545X39_AK_Green {};
			class rhs_60Rnd_545X39_7N10_AK {};
			class rhs_60Rnd_545X39_AK_Green {};
			class rhs_weap_pkm {};
			class rhs_100Rnd_762x54mmR {};
			class rhs_100Rnd_762x54mmR_green {};
			
        };
    };

    class AntiTank: baseKit {
        role = "Anti-Tank";
        class items {
            //RPG7
            class rhs_weap_rpg7 {};
			class rhs_acc_pgo7v {};
			class rhs_rpg7_PG7V_mag {};
			class rhs_rpg7_OG7V_mag {};

        };
    };

    class Marksman: baseKit {
        role = "Marksman";
        class items {
            // SVD
            class UK3CB_SVD_OLD {};
            class rhs_weap_svdp {};
            class rhs_weap_svdp_wd {};

    		//ammo
            class rhs_10Rnd_762x54mmR_7N1 {};
            class rhs_10Rnd_762x54mmR_7N14 {};

            //GreenMag
            class greenmag_ammo_762x54_basic_30Rnd {};
            class greenmag_ammo_762x54_basic_60Rnd {};

    		//accessories
            class rhs_acc_pso1m2 {};
			class rhs_acc_1pn34 {};
			//class rhs_acc_tgpv {};
			
			//Utility
			class ACE_Tripod {};
			class ACE_RangeCard {};
        };
    };

    class UAV: baseKit {
        role = "UAV";
        class items {
 
			//EWAR Kit
			class hgun_esd_01_F {};
			class acc_esd_01_flashlight {};
			class muzzle_antenna_01_f {};
			class muzzle_antenna_02_f {};
			class muzzle_antenna_03_f {};

			//ACE Groundspike & Mast
			class ACRE_VHF30108SPIKE {};
			class ACRE_VHF30108 {};
			class ACRE_VHF30108MAST {};
			
		    //AL-6 and ED-1D
            class B_UAV_06_backpack_F {};
			class B_UGV_02_Demining_backpack_F {};
			//B_UGV_02_Science_backpack_F {};
		    
            //drone terminal
            class B_UavTerminal {};
            class ACE_UAVBattery {};
        };
    };

    class Leadership: baseKit {
        role = "Leadership";
        class items {
            class rhs_acc_1p78 {};
        };
    };
};
