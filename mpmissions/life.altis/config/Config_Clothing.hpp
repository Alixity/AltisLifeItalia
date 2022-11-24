/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class civ_clothing {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_blue", "", 120, "" },
            { "U_C_Poloshirt_burgundy", "", 120, "" },
            { "U_C_Poloshirt_stripped", "", 120, "" },
            { "U_C_Poloshirt_tricolour", "", 120, "" },
            { "U_C_Poloshirt_salmon", "", 120, "" },
            { "U_C_Poloshirt_redwhite", "", 120, "" },
            { "U_OrestesBody", "", 120, "" },
            { "U_Competitor", "", 120, "" },
            { "U_BG_Guerilla2_1", "", 120, "" },
            { "U_BG_Guerilla2_2", "", 120, "" },
            { "U_BG_Guerilla2_3", "", 120, "" },
            { "U_BG_Guerilla3_1", "", 120, "" },
            { "U_C_Poor_1", "", 120, "" },
            { "U_C_HunterBody_grn", "", 120, "" },
            { "U_I_G_Story_Protagonist_F", "", 120, "" },
            { "U_C_Journalist", "", 120, "" },
            { "U_Marshal", "", 120, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 120, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 120, "" },
            { "U_C_man_sport_1_F", "", 120, "" },
            { "U_C_man_sport_2_F", "", 120, "" },
            { "U_C_man_sport_3_F", "", 120, "" },
            { "U_C_Man_casual_1_F", "", 120, "" },
            { "U_C_Man_casual_2_F", "", 120, "" },
            { "U_C_Man_casual_3_F", "", 120, "" },
            { "U_C_Man_casual_4_F", "", 120, "" },
            { "U_C_Man_casual_5_F", "", 120, "" },
            { "U_C_Man_casual_6_F", "", 120, "" },
            { "U_C_IDAP_Man_shorts_F", "", 120, "" },
            { "U_C_IDAP_Man_casual_F", "", 120, "" },
            { "U_C_IDAP_Man_cargo_F", "", 120, "" },
            { "U_C_IDAP_Man_Tee_F", "", 120, "" },
            { "U_C_IDAP_Man_Jeans_F", "", 120, "" },
            { "U_C_IDAP_Man_TeeShorts_F", "", 120, "" },
            { "U_C_Mechanic_01_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Red_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Vrana_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Black_F", "", 120, "" },
            { "U_C_ConstructionCoverall_Blue_F", "", 120, "" },
            { "U_C_Uniform_Farmer_01_F", "", 120, "" },
            { "U_C_E_LooterJacket_01_F", "", 120, "" },
            { "U_C_Uniform_Scientist_01_F", "", 120, "" },
            { "U_C_Uniform_Scientist_01_formal_F", "", 120, "" },
            { "U_C_Uniform_Scientist_02_F", "", 120, "" },
            { "U_C_Uniform_Scientist_02_formal_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 120, "" },
            { "U_I_L_Uniform_01_tshirt_olive_F", "", 120, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 120, "" },
            { "H_Booniehat_oli", "", 120, "" },
            { "H_Booniehat_mcamo", "", 120, "" },
            { "H_Booniehat_tan", "", 120, "" },
            { "H_Booniehat_dgtl", "", 120, "" },
            { "H_Booniehat_khk_hs", "", 120, "" },
            { "H_Cap_red", "", 120, "" },
            { "H_Cap_blu", "", 120, "" },
            { "H_Cap_oli", "", 120, "" },
            { "H_Cap_headphones", "", 120, "" },
            { "H_Cap_tan", "", 120, "" },
            { "H_Cap_blk", "", 120, "" },
            { "H_Cap_blk_CMMG", "", 120, "" },
            { "H_Cap_brn_SPECOPS", "", 120, "" },
            { "H_Cap_tan_specops_US", "", 120, "" },
            { "H_Cap_khaki_specops_UK", "", 120, "" },
            { "H_Cap_grn", "", 120, "" },
            { "H_Cap_grn_BI", "", 120, "" },
            { "H_Cap_blk_Raven", "", 120, "" },
            { "H_Cap_blk_ION", "", 120, "" },
            { "H_Cap_oli_hs", "", 120, "" },
            { "H_Cap_press", "", 120, "" },
            { "H_Cap_usblack", "", 120, "" },
            { "H_Cap_surfer", "", 120, "" },
            { "H_Cap_police", "", 120, "" },
            { "H_MilCap_ocamo", "", 120, "" },
            { "H_MilCap_mcamo", "", 120, "" },
            { "H_MilCap_gry", "", 120, "" },
            { "H_MilCap_dgtl", "", 120, "" },
            { "H_MilCap_blue", "", 120, "" },
            { "H_Bandanna_surfer", "", 120, "" },
            { "H_Bandanna_khk", "", 120, "" },
            { "H_Bandanna_khk_hs", "", 120, "" },
            { "H_Bandanna_cbr", "", 120, "" },
            { "H_Bandanna_sgg", "", 120, "" },
            { "H_Bandanna_sand", "", 120, "" },
            { "H_Bandanna_surfer_blk", "", 120, "" },
            { "H_Bandanna_surfer_grn", "", 120, "" },
            { "H_Bandanna_gry", "", 120, "" },
            { "H_Bandanna_blu", "", 120, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_mcamo", "", 120, "" },
            { "H_Watchcap_blk", "", 120, "" },
            { "H_Watchcap_cbr", "", 120, "" },
            { "H_Watchcap_khk", "", 120, "" },
            { "H_Watchcap_camo", "", 120, "" },
            { "H_StrawHat", "", 120, "" },
            { "H_StrawHat_dark", "", 120, "" },
            { "H_Hat_blue", "", 120, "" },
            { "H_Hat_brown", "", 120, "" },
            { "H_Hat_camo", "", 120, "" },
            { "H_Hat_grey", "", 120, "" },
            { "H_Hat_checker", "", 120, "" },
            { "H_Hat_tan", "", 120, "" },
            { "H_Cap_marshal", "", 120, "" },
            { "H_Helmet_Skate", "", 120, "" },
            { "H_MilCap_tna_F", "", 120, "" },
            { "H_MilCap_ghex_F", "", 120, "" },
            { "H_Booniehat_tna_F", "", 120, "" },
            { "H_MilCap_gen_F", "", 120, "" },
            { "H_Hat_Safari_sand_F", "", 120, "" },
            { "H_Hat_Safari_olive_F", "", 120, "" },
            { "H_Construction_basic_yellow_F", "", 120, "" },
            { "H_Construction_basic_white_F", "", 120, "" },
            { "H_Construction_basic_orange_F", "", 120, "" },
            { "H_Construction_basic_red_F", "", 120, "" },
            { "H_Construction_basic_vrana_F", "", 120, "" },
            { "H_Construction_basic_black_F", "", 120, "" },
            { "H_Construction_earprot_yellow_F", "", 120, "" },
            { "H_Construction_earprot_white_F", "", 120, "" },
            { "H_Construction_earprot_orange_F", "", 120, "" },
            { "H_Construction_earprot_red_F", "", 120, "" },
            { "H_Construction_earprot_vrana_F", "", 120, "" },
            { "H_Construction_earprot_black_F", "", 120, "" },
            { "H_Construction_headset_yellow_F", "", 120, "" },
            { "H_Construction_headset_white_F", "", 120, "" },
            { "H_Construction_headset_orange_F", "", 120, "" },
            { "H_Construction_headset_red_F", "", 120, "" },
            { "H_Construction_headset_vrana_F", "", 120, "" },
            { "H_Construction_headset_black_F", "", 120, "" },
            { "H_EarProtectors_yellow_F", "", 120, "" },
            { "H_EarProtectors_white_F", "", 120, "" },
            { "H_EarProtectors_orange_F", "", 120, "" },
            { "H_EarProtectors_red_F", "", 120, "" },
            { "H_EarProtectors_black_F", "", 120, "" },
            { "H_HeadSet_yellow_F", "", 120, "" },
            { "H_HeadSet_white_F", "", 120, "" },
            { "H_HeadSet_orange_F", "", 120, "" },
            { "H_HeadSet_red_F", "", 120, "" },
            { "H_HeadSet_black_F", "", 120, "" },
            { "H_HeadBandage_stained_F", "", 120, "" },
            { "H_HeadBandage_clean_F", "", 120, "" },
            { "H_HeadBandage_bloody_F", "", 120, "" },
            { "H_Cap_White_IDAP_F", "", 120, "" },
            { "H_Cap_Orange_IDAP_F", "", 120, "" },
            { "H_Cap_Black_IDAP_F", "", 120, "" },
            { "H_WirelessEarpiece_F", "", 120, "" },
            { "H_Hat_Tinfoil_F", "", 120, "" },
            { "H_Booniehat_mgrn", "", 120, "" },
            { "H_Booniehat_taiga", "", 120, "" },
            { "H_Booniehat_eaf", "", 120, "" },
            { "H_Booniehat_wdl", "", 120, "" },
            { "H_MilCap_grn", "", 120, "" },
            { "H_MilCap_taiga", "", 120, "" },
            { "H_MilCap_wdl", "", 120, "" },
            { "H_MilCap_eaf", "", 120, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 120, "" },
            { "G_Spectacles_Tinted", "", 120, "" },
            { "G_Combat", "", 120, "" },
            { "G_Lowprofile", "", 120, "" },
            { "G_Shades_Black", "", 120, "" },
            { "G_Shades_Green", "", 120, "" },
            { "G_Shades_Red", "", 120, "" },
            { "G_Squares", "", 120, "" },
            { "G_Squares_Tinted", "", 120, "" },
            { "G_Sport_BlackWhite", "", 120, "" },
            { "G_Sport_Blackyellow", "", 120, "" },
            { "G_Sport_Greenblack", "", 120, "" },
            { "G_Sport_Checkered", "", 120, "" },
            { "G_Sport_Red", "", 120, "" },
            { "G_Tactical_Black", "", 120, "" },
            { "G_Aviator", "", 120, "" },
            { "G_Lady_Blue", "", 120, "" },
            { "G_Goggles_VR", "", 120, "" },
            { "G_Shades_Blue", "", 120, "" },
            { "G_Sport_Blackred", "", 120, "" },
            { "G_Tactical_Clear", "", 120, "" },
            { "G_Combat_Goggles_tna_F", "", 120, "" },
            { "G_Respirator_white_F", "", 120, "" },
            { "G_Respirator_yellow_F", "", 120, "" },
            { "G_Respirator_blue_F", "", 120, "" },
            { "G_EyeProtectors_F", "", 120, "" },
            { "G_EyeProtectors_Earpiece_F", "", 120, "" },
            { "G_WirelessEarpiece_F", "", 120, "" },
            { "G_Blindfold_01_white_F", "", 120, "" },
            { "G_Blindfold_01_black_F", "", 120, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Plain_medical_F", "", 120, "" },
            { "V_Plain_crystal_F", "", 120, "" },
            { "V_Safety_yellow_F", "", 120, "" },
            { "V_Safety_orange_F", "", 120, "" },
            { "V_Safety_blue_F", "", 120, "" },
            { "V_LegStrapBag_black_F", "", 120, "" },
            { "V_LegStrapBag_coyote_F", "", 120, "" },
            { "V_LegStrapBag_olive_F", "", 120, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_LegStrapBag_black_F", "", 1100, "" }, // spazio 
            { "B_LegStrapBag_coyote_F", "", 1100, "" },
            { "B_LegStrapBag_olive_F", "", 1100, "" },
            { "B_Messenger_Coyote_F", "", 1400, "" }, // spazio 
            { "B_Messenger_Olive_F", "", 1400, "" },
            { "B_Messenger_Black_F", "", 1400, "" },
            { "B_Messenger_Gray_F", "", 1400, "" },
            { "B_Messenger_IDAP_F", "", 1400, "" },
            { "B_AssaultPack_khk", "", 1600, "" }, // spazio 
            { "B_AssaultPack_dgtl", "", 1600, "" },
            { "B_AssaultPack_rgr", "", 1600, "" },
            { "B_AssaultPack_sgg", "", 1600, "" },
            { "B_AssaultPack_blk", "", 1600, "" },
            { "B_AssaultPack_cbr", "", 1600, "" },
            { "B_AssaultPack_mcamo", "", 1600, "" },
            { "B_AssaultPack_ocamo", "", 1600, "" },
            { "B_AssaultPack_tna_F", "", 1600, "" },
            { "B_AssaultPack_wdl_F", "", 1600, "" },
            { "B_AssaultPack_eaf_F", "", 1600, "" },
            { "B_FieldPack_oli", "", 1800, "" }, // spazio 
            { "B_FieldPack_khk", "", 1800, "" },
            { "B_FieldPack_ocamo", "", 1800, "" },
            { "B_FieldPack_oucamo", "", 1800, "" },
            { "B_FieldPack_cbr", "", 1800, "" },
            { "B_FieldPack_blk", "", 1800, "" },
            { "B_FieldPack_ghex_F", "", 1800, "" },
            { "B_FieldPack_green_F", "", 1800, "" }, 
            { "B_FieldPack_taiga_F", "", 1800, "" },
            { "B_TacticalPack_rgr", "", 2100, "" }, // spazio 
            { "B_TacticalPack_mcamo", "", 2100, "" },
            { "B_TacticalPack_ocamo", "", 2100, "" },
            { "B_TacticalPack_blk", "", 2100, "" },
            { "B_TacticalPack_oli", "", 2100, "" },
            { "B_ViperLightHarness_blk_F", "", 2200, "" }, // spazio 
            { "B_ViperLightHarness_ghex_F", "", 2200, "" },
            { "B_ViperLightHarness_hex_F", "", 2200, "" },
            { "B_ViperLightHarness_khk_F", "", 2200, "" },
            { "B_ViperLightHarness_oli_F", "", 2200, "" },
            { "B_Kitbag_rgr", "", 2300, "" }, // spazio 
            { "B_Kitbag_mcamo", "", 2300, "" },
            { "B_Kitbag_sgg", "", 2300, "" },
            { "B_Kitbag_cbr", "", 2300, "" },
            { "B_Kitbag_tan", "", 2300, "" },
            { "B_ViperHarness_blk_F", "", 2400, "" }, // spazio 
            { "B_ViperHarness_ghex_F", "", 2400, "" },
            { "B_ViperHarness_hex_F", "", 2400, "" },
            { "B_ViperHarness_khk_F", "", 2400, "" },
            { "B_ViperHarness_oli_F", "", 2400, "" },
            { "B_Carryall_green_F", "", 2600, "" }, // spazio 
            { "B_Carryall_ocamo", "", 2600, "" },
            { "B_Carryall_oucamo", "", 2600, "" },
            { "B_Carryall_mcamo", "", 2600, "" },
            { "B_Carryall_khk", "", 2600, "" },
            { "B_Carryall_cbr", "", 2600, "" },
            { "B_Carryall_oli", "", 2600, "" },
            { "B_Carryall_ghex_F", "", 2600, "" },
            { "B_Carryall_taiga_F", "", 2600, "" },
            { "B_Carryall_wdl_F", "", 2600, "" },
            { "B_Carryall_eaf_F", "", 2600, "" },
            { "B_Bergen_mcamo_F", "", 3600, "" }, // spazio 
            { "B_Bergen_dgtl_F", "", 3600, "" },
            { "B_Bergen_hex_F", "", 3600, "" },
            { "B_Bergen_tna_F", "", 3600, "" },
            { "B_Parachute", "", 120, "" }
        };
    };

    class cop_clothing {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "", 350, "call life_coplevel >= 1" },
            { "U_B_Wetsuit", "", 120, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blu", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_headphones", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_police", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_blue", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_khk", "", 350, "call life_coplevel >= 1" },
            { "H_Bandanna_blu", "", 350, "call life_coplevel >= 1" },
            { "H_StrawHat", "", 350, "call life_coplevel >= 1" },
            { "H_StrawHat_dark", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_blue", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_brown", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_camo", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_grey", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_checker", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_tan", "", 350, "call life_coplevel >= 1" },
            { "H_Cap_marshal", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_tna_F", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "H_Booniehat_tna_F", "", 350, "call life_coplevel >= 1" },
            { "H_MilCap_gen_F", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_Safari_sand_F", "", 350, "call life_coplevel >= 1" },
            { "H_Hat_Safari_olive_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_white_F", "", 350, "call life_coplevel >= 1" },
            { "H_EarProtectors_black_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_white_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadSet_black_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_stained_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_clean_F", "", 350, "call life_coplevel >= 1" },
            { "H_HeadBandage_bloody_F", "", 350, "call life_coplevel >= 1" },
            { "H_Beret_blk", "", 350, "call life_coplevel >= 1" },
            { "H_Beret_gen_F", "", 350, "call life_coplevel >= 1" },
            { "H_HelmetSpecB_snakeskin", "", 350, "call life_coplevel >= 1" },
            { "H_PASGT_basic_black_F", "", 350, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 350, "call life_coplevel >= 1" },
            { "G_Spectacles_Tinted", "", 350, "call life_coplevel >= 1" },
            { "G_Combat", "", 350, "call life_coplevel >= 1" },
            { "G_Lowprofile", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Black", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Green", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Red", "", 350, "call life_coplevel >= 1" },
            { "G_Squares", "", 350, "call life_coplevel >= 1" },
            { "G_Squares_Tinted", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_BlackWhite", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Blackyellow", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Greenblack", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Checkered", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Red", "", 350, "call life_coplevel >= 1" },
            { "G_Tactical_Black", "", 350, "call life_coplevel >= 1" },
            { "G_Lady_Blue", "", 350, "call life_coplevel >= 1" },
            { "G_Goggles_VR", "", 350, "call life_coplevel >= 1" },
            { "G_Shades_Blue", "", 350, "call life_coplevel >= 1" },
            { "G_Sport_Blackred", "", 350, "call life_coplevel >= 1" },
            { "G_Tactical_Clear", "", 350, "call life_coplevel >= 1" },
            { "G_Combat_Goggles_tna_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_white_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_yellow_F", "", 350, "call life_coplevel >= 1" },
            { "G_Respirator_blue_F", "", 350, "call life_coplevel >= 1" },
            { "G_EyeProtectors_F", "", 350, "call life_coplevel >= 1" },
            { "G_EyeProtectors_Earpiece_F", "", 350, "call life_coplevel >= 1" },
            { "G_WirelessEarpiece_F", "", 350, "call life_coplevel >= 1" },
            { "G_Blindfold_01_white_F", "", 350, "call life_coplevel >= 1" },
            { "G_Blindfold_01_black_F", "", 350, "call life_coplevel >= 1" },
            { "G_B_Diving", "", 350, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 350, "call life_coplevel >= 1" },
            { "V_TacVestIR_blk", "", 350, "call life_coplevel >= 1" },
            { "V_LegStrapBag_black_F", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk", "", 350, "call life_coplevel >= 1" },
            { "V_TacVest_blk_POLICE", "", 350, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 350, "call life_coplevel >= 1" },
            { "V_PlateCarrier1_blk", "", 0, "call life_coplevel >= 2" },
            { "V_TacVest_gen_F", "", 350, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_dgtl", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_sgg", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_Kerry", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_tna_F", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_wdl_F", "", 350, "call life_coplevel >= 1" },
            { "B_AssaultPack_eaf_F", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_sgg", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_Kitbag_tan", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_khk", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_oucamo", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_oli", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_green_F", "", 350, "call life_coplevel >= 1" },
            { "B_FieldPack_taiga_F", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_rgr", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_blk", "", 350, "call life_coplevel >= 1" },
            { "B_TacticalPack_oli", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_ocamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_oucamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_mcamo", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_khk", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_oli", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_green_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_taiga_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_wdl_F", "", 350, "call life_coplevel >= 1" },
            { "B_Carryall_eaf_F", "", 350, "call life_coplevel >= 1" },
            { "B_Parachute", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_TentDome_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_TentA_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 350, "call life_coplevel >= 1" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 350, "call life_coplevel >= 1" },
            { "B_Static_Designator_01_weapon_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_mcamo_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_dgtl_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_Bergen_tna_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_blk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_khk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperHarness_oli_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_blk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_ghex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_hex_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_khk_F", "", 350, "call life_coplevel >= 1" },
            { "B_ViperLightHarness_oli_F", "", 350, "call life_coplevel >= 1" },
            { "B_Patrol_Respawn_bag_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Coyote_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Olive_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Black_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_Gray_F", "", 350, "call life_coplevel >= 1" },
            { "B_Messenger_IDAP_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_black_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_coyote_F", "", 350, "call life_coplevel >= 1" },
            { "B_LegStrapBag_olive_F", "", 350, "call life_coplevel >= 1" },
            { "B_W_Static_Designator_01_weapon_F", "", 350, "call life_coplevel >= 1" }
        };
    };

    class ctrg_clothing {
        title = "CTRG";
        conditions = "call life_coplevel >= 5";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 0, "" },
            { "U_B_CTRG_1", "", 0, "" },
            { "U_B_CTRG_2", "", 0, "" },
            { "U_B_CTRG_3", "", 0, "" },
            { "U_B_CTRG_Soldier_F", "", 0, "" },
            { "U_B_CTRG_Soldier_2_F", "", 0, "" },
            { "U_B_CTRG_Soldier_3_F", "", 0, "" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 0, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 0, "" },
            { "U_B_CTRG_Soldier_urb_3_F", "", 0, "" },
            { "U_O_R_Gorka_01_black_F", "", 0, "" },
            { "U_B_CBRN_Suit_01_MTP_F", "", 0, "" },
            { "U_B_CBRN_Suit_01_Tropic_F", "", 0, "" },
            { "U_B_CBRN_Suit_01_Wdl_F", "", 0, "" },
            { "U_C_CBRN_Suit_01_Blue_F", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 0, "" },
            { "H_Booniehat_oli", "", 0, "" },
            { "H_Booniehat_mcamo", "", 0, "" },
            { "H_Booniehat_tan", "", 0, "" },
            { "H_Booniehat_dgtl", "", 0, "" },
            { "H_Booniehat_khk_hs", "", 0, "" },
            { "H_Cap_red", "", 0, "" },
            { "H_Cap_blu", "", 0, "" },
            { "H_Cap_oli", "", 0, "" },
            { "H_Cap_headphones", "", 0, "" },
            { "H_Cap_tan", "", 0, "" },
            { "H_Cap_blk", "", 0, "" },
            { "H_Cap_blk_CMMG", "", 0, "" },
            { "H_Cap_brn_SPECOPS", "", 0, "" },
            { "H_Cap_tan_specops_US", "", 0, "" },
            { "H_Cap_khaki_specops_UK", "", 0, "" },
            { "H_Cap_grn_BI", "", 0, "" },
            { "H_Cap_blk_Raven", "", 0, "" },
            { "H_Cap_blk_ION", "", 0, "" },
            { "H_Cap_oli_hs", "", 0, "" },
            { "H_Cap_press", "", 0, "" },
            { "H_Cap_usblack", "", 0, "" },
            { "H_Cap_surfer", "", 0, "" },
            { "H_Cap_police", "", 0, "" },
            { "H_MilCap_ocamo", "", 0, "" },
            { "H_MilCap_mcamo", "", 0, "" },
            { "H_MilCap_gry", "", 0, "" },
            { "H_MilCap_dgtl", "", 0, "" },
            { "H_MilCap_blue", "", 0, "" },
            { "H_Bandanna_surfer", "", 0, "" },
            { "H_Bandanna_khk", "", 0, "" },
            { "H_Bandanna_khk_hs", "", 0, "" },
            { "H_Bandanna_cbr", "", 0, "" },
            { "H_Bandanna_sgg", "", 0, "" },
            { "H_Bandanna_sand", "", 0, "" },
            { "H_Bandanna_surfer_blk", "", 0, "" },
            { "H_Bandanna_surfer_grn", "", 0, "" },
            { "H_Bandanna_gry", "", 0, "" },
            { "H_Bandanna_blu", "", 0, "" },
            { "H_Bandanna_camo", "", 0, "" },
            { "H_Bandanna_mcamo", "", 0, "" },
            { "H_Watchcap_blk", "", 0, "" },
            { "H_Watchcap_cbr", "", 0, "" },
            { "H_Watchcap_khk", "", 0, "" },
            { "H_Watchcap_camo", "", 0, "" },
            { "H_StrawHat", "", 0, "" },
            { "H_StrawHat_dark", "", 0, "" },
            { "H_Hat_blue", "", 0, "" },
            { "H_Hat_brown", "", 0, "" },
            { "H_Hat_camo", "", 0, "" },
            { "H_Hat_grey", "", 0, "" },
            { "H_Hat_checker", "", 0, "" },
            { "H_Hat_tan", "", 0, "" },
            { "H_Cap_marshal", "", 0, "" },
            { "H_MilCap_tna_F", "", 0, "" },
            { "H_MilCap_ghex_F", "", 0, "" },
            { "H_Booniehat_tna_F", "", 0, "" },
            { "H_MilCap_gen_F", "", 0, "" },
            { "H_Hat_Safari_sand_F", "", 0, "" },
            { "H_Hat_Safari_olive_F", "", 0, "" },
            { "H_EarProtectors_yellow_F", "", 0, "" },
            { "H_EarProtectors_white_F", "", 0, "" },
            { "H_EarProtectors_orange_F", "", 0, "" },
            { "H_EarProtectors_red_F", "", 0, "" },
            { "H_EarProtectors_black_F", "", 0, "" },
            { "H_HeadSet_yellow_F", "", 0, "" },
            { "H_HeadSet_white_F", "", 0, "" },
            { "H_HeadSet_orange_F", "", 0, "" },
            { "H_HeadSet_red_F", "", 0, "" },
            { "H_HeadSet_black_F", "", 0, "" },
            { "H_HeadBandage_stained_F", "", 0, "" },
            { "H_HeadBandage_clean_F", "", 0, "" },
            { "H_HeadBandage_bloody_F", "", 0, "" },
            { "H_Cap_White_IDAP_F", "", 0, "" },
            { "H_Cap_Orange_IDAP_F", "", 0, "" },
            { "H_Cap_Black_IDAP_F", "", 0, "" },
            { "H_WirelessEarpiece_F", "", 0, "" },
            { "H_Hat_Tinfoil_F", "", 0, "" },
            { "H_Booniehat_mgrn", "", 0, "" },
            { "H_Booniehat_taiga", "", 0, "" },
            { "H_Booniehat_eaf", "", 0, "" },
            { "H_Booniehat_wdl", "", 0, "" },
            { "H_MilCap_grn", "", 0, "" },
            { "H_MilCap_taiga", "", 0, "" },
            { "H_MilCap_wdl", "", 0, "" },
            { "H_MilCap_eaf", "", 0, "" },
            { "H_Beret_blk", "", 0, "" },
            { "H_Beret_gen_F", "", 0, "" },
            { "H_PASGT_basic_black_F", "", 0, "" },
            { "H_Shemag_olive", "", 0, "" },
            { "H_Shemag_olive_hs", "", 0, "" },
            { "H_ShemagOpen_khk", "", 0, "" },
            { "H_ShemagOpen_tan", "", 0, "" },
            { "H_Beret_02", "", 0, "" },
            { "H_Beret_Colonel", "", 0, "" },
            { "H_HelmetB_TI_tna_F", "", 0, "" },
            { "H_PASGT_basic_blue_F", "", 0, "" },
            { "H_HelmetB", "", 0, "" },
            { "H_HelmetB_black", "", 0, "" },
            { "H_Cap_grn", "", 0, "" },
            { "H_HelmetB_tna_F", "", 0, "" },
            { "H_HelmetB_plain_wdl", "", 0, "" },
            { "H_HelmetSpecB", "", 0, "" },
            { "H_HelmetSpecB_blk", "", 0, "" },
            { "H_HelmetB_Enh_tna_F", "", 0, "" },
            { "H_HelmetSpecB_wdl", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 0, "" },
            { "G_Spectacles_Tinted", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Shades_Green", "", 0, "" },
            { "G_Shades_Red", "", 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Squares_Tinted", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_Greenblack", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Red", "", 0, "" },
            { "G_Tactical_Black", "", 0, "" },
            { "G_Lady_Blue", "", 0, "" },
            { "G_Goggles_VR", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Tactical_Clear", "", 0, "" },
            { "G_Combat_Goggles_tna_F", "", 0, "" },
            { "G_Respirator_white_F", "", 0, "" },
            { "G_Respirator_yellow_F", "", 0, "" },
            { "G_Respirator_blue_F", "", 0, "" },
            { "G_EyeProtectors_F", "", 0, "" },
            { "G_EyeProtectors_Earpiece_F", "", 0, "" },
            { "G_WirelessEarpiece_F", "", 0, "" },
            { "G_Blindfold_01_white_F", "", 0, "" },
            { "G_Blindfold_01_black_F", "", 0, "" },
            { "G_B_Diving", "", 0, "" },
            { "G_Balaclava_blk", "", 0, "" },
            { "G_Balaclava_oli", "", 0, "" },
            { "G_Balaclava_combat", "", 0, "" },
            { "G_Balaclava_lowprofile", "", 0, "" },
            { "G_Bandanna_blk", "", 0, "" },
            { "G_Bandanna_oli", "", 0, "" },
            { "G_Bandanna_khk", "", 0, "" },
            { "G_Bandanna_tan", "", 0, "" },
            { "G_Bandanna_beast", "", 0, "" },
            { "G_Bandanna_shades", "", 0, "" },
            { "G_Bandanna_sport", "", 0, "" },
            { "G_Bandanna_aviator", "", 0, "" },
            { "G_Balaclava_TI_blk_F", "", 0, "" },
            { "G_Balaclava_TI_tna_F", "", 0, "" },
            { "G_Balaclava_TI_G_blk_F", "", 0, "" },
            { "G_Balaclava_TI_G_tna_F", "", 0, "" },
            { "G_AirPurifyingRespirator_01_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_olive_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 0, "" },
            { "G_RegulatorMask_F", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 0, "" },
            { "V_TacVestIR_blk", "", 0, "" },
            { "V_LegStrapBag_black_F", "", 0, "" },
            { "V_TacVest_blk", "", 0, "" },
            { "V_TacVest_blk_POLICE", "", 0, "" },
            { "V_RebreatherB", "", 0, "" },
            { "V_TacVest_gen_F", "", 0, "" },
            { "V_PlateCarrier1_rgr", "", 0, "" },
            { "V_PlateCarrier1_blk", "", 0, "" },
            { "V_PlateCarrier_Kerry", "", 0, "" },
            { "V_PlateCarrierL_CTRG", "", 0, "" },
            { "V_PlateCarrier1_tna_F", "", 0, "" },
            { "V_PlateCarrier1_rgr_noflag_F", "", 0, "" },
            { "V_PlateCarrier1_wdl", "", 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 0, "" },
            { "B_AssaultPack_dgtl", "", 0, "" },
            { "B_AssaultPack_rgr", "", 0, "" },
            { "B_AssaultPack_sgg", "", 0, "" },
            { "B_AssaultPack_blk", "", 0, "" },
            { "B_AssaultPack_cbr", "", 0, "" },
            { "B_AssaultPack_mcamo", "", 0, "" },
            { "B_AssaultPack_ocamo", "", 0, "" },
            { "B_Kitbag_rgr", "", 0, "" },
            { "B_Kitbag_mcamo", "", 0, "" },
            { "B_Kitbag_sgg", "", 0, "" },
            { "B_Kitbag_cbr", "", 0, "" },
            { "B_Kitbag_tan", "", 0, "" },
            { "B_TacticalPack_rgr", "", 0, "" },
            { "B_TacticalPack_mcamo", "", 0, "" },
            { "B_TacticalPack_ocamo", "", 0, "" },
            { "B_TacticalPack_blk", "", 0, "" },
            { "B_TacticalPack_oli", "", 0, "" },
            { "B_FieldPack_khk", "", 0, "" },
            { "B_FieldPack_ocamo", "", 0, "" },
            { "B_FieldPack_oucamo", "", 0, "" },
            { "B_FieldPack_cbr", "", 0, "" },
            { "B_FieldPack_blk", "", 0, "" },
            { "B_Carryall_ocamo", "", 0, "" },
            { "B_Carryall_oucamo", "", 0, "" },
            { "B_Carryall_mcamo", "", 0, "" },
            { "B_Carryall_khk", "", 0, "" },
            { "B_Carryall_cbr", "", 0, "" },
            { "B_Parachute", "", 0, "" },
            { "B_FieldPack_oli", "", 0, "" },
            { "B_Carryall_oli", "", 0, "" },
            { "B_AssaultPack_Kerry", "", 0, "" },
            { "B_Respawn_TentDome_F", "", 0, "" },
            { "B_Respawn_TentA_F", "", 0, "" },
            { "B_Respawn_Sleeping_bag_F", "", 0, "" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 0, "" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 0, "" },
            { "B_Static_Designator_01_weapon_F", "", 0, "" },
            { "B_Bergen_mcamo_F", "", 0, "" },
            { "B_Bergen_dgtl_F", "", 0, "" },
            { "B_Bergen_hex_F", "", 0, "" },
            { "B_Bergen_tna_F", "", 0, "" },
            { "B_AssaultPack_tna_F", "", 0, "" },
            { "B_Carryall_ghex_F", "", 0, "" },
            { "B_FieldPack_ghex_F", "", 0, "" },
            { "B_ViperHarness_blk_F", "", 0, "" },
            { "B_ViperHarness_ghex_F", "", 0, "" },
            { "B_ViperHarness_hex_F", "", 0, "" },
            { "B_ViperHarness_khk_F", "", 0, "" },
            { "B_ViperHarness_oli_F", "", 0, "" },
            { "B_ViperLightHarness_blk_F", "", 0, "" },
            { "B_ViperLightHarness_ghex_F", "", 0, "" },
            { "B_ViperLightHarness_hex_F", "", 0, "" },
            { "B_ViperLightHarness_khk_F", "", 0, "" },
            { "B_ViperLightHarness_oli_F", "", 0, "" },
            { "B_Patrol_Respawn_bag_F", "", 0, "" },
            { "B_Messenger_Coyote_F", "", 0, "" },
            { "B_Messenger_Olive_F", "", 0, "" },
            { "B_Messenger_Black_F", "", 0, "" },
            { "B_Messenger_Gray_F", "", 0, "" },
            { "B_Messenger_IDAP_F", "", 0, "" },
            { "B_LegStrapBag_black_F", "", 0, "" },
            { "B_LegStrapBag_coyote_F", "", 0, "" },
            { "B_LegStrapBag_olive_F", "", 0, "" },
            { "B_W_Static_Designator_01_weapon_F", "", 0, "" },
            { "B_Carryall_green_F", "", 0, "" },
            { "B_Carryall_taiga_F", "", 0, "" },
            { "B_Carryall_wdl_F", "", 0, "" },
            { "B_Carryall_eaf_F", "", 0, "" },
            { "B_FieldPack_green_F", "", 0, "" },
            { "B_FieldPack_taiga_F", "", 0, "" },
            { "B_AssaultPack_wdl_F", "", 0, "" },
            { "B_AssaultPack_eaf_F", "", 0, "" },
            { "B_RadioBag_01_wdl_F", "", 0, "" },
            { "B_RadioBag_01_mtp_F", "", 0, "" },
            { "B_RadioBag_01_black_F", "", 0, "" }
        };
    };

    class dive_clothing {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class illegalguns_clothing {
        title = "STR_License_IllegalGuns";
        conditions = "license_civ_illegalguns";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_TacVest_blk", "", 200000, "" },
            { "V_TacVest_brn", "", 200000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_khk", "", 120, "" }, // Slash Bandolier (Khaki) (No Armor)
            { "V_BandollierB_cbr", "", 120, "" }, // Slash Bandolier (Coyote) (No Armor)
            { "V_BandollierB_rgr", "", 120, "" }, // Slash Bandolier (Green) (No Armor)
            { "V_BandollierB_blk", "", 120, "" }, // Slash Bandolier (Black) (No Armor)
            { "V_BandollierB_oli", "", 120, "" }, // Slash Bandolier (Olive) (No Armor)
            { "V_Chestrig_khk", "", 120, "" }, // Chest Rig (Khaki) (No Armor)
            { "V_Chestrig_rgr", "", 120, "" }, // Chest Rig (Green) (No Armor)
            { "V_Chestrig_blk", "", 120, "" }, // Chest Rig (Black) (No Armor)
            { "V_Chestrig_oli", "", 120, "" }, // Chest Rig (Olive) (No Armor)
            { "V_TacVestIR_blk", "", 100000, "" }, // Raven Vest (Armor Level I)
            { "V_HarnessO_brn", "", 120, "" }, // LBV Harness (No Armor)
            { "V_HarnessOGL_brn", "", 120, "" }, // LBV Grenadier Harness (No Armor)
            { "V_HarnessO_gry", "", 120, "" }, // LBV Harness (Grey) (No Armor)
            { "V_HarnessOGL_gry", "", 120, "" }, // LBV Grenadier Harness (Grey) (No Armor)
            { "V_TacChestrig_grn_F", "", 120, "" }, // Tactical Chest Rig (Green) (No Armor)
            { "V_TacChestrig_oli_F", "", 120, "" }, // Tactical Chest Rig (Olive) (No Armor)
            { "V_TacChestrig_cbr_F", "", 120, "" }, // Tactical Chest Rig (Coyote) (No Armor)
            { "V_HarnessO_ghex_F", "", 120, "" }, // LBV Harness (Green Hex) (No Armor)
            { "V_HarnessOGL_ghex_F", "", 120, "" }, // LBV Grenadier Harness (Green Hex) (No Armor)
            { "V_BandollierB_ghex_F", "", 120, "" } // Slash Bandolier (Green Hex) (No Armor)
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Paramedic_01_F", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_headphones", "", 10, "" },
            { "H_MilCap_gry", "", 10, "" },
            { "H_MilCap_grn", "", 10, "" },
            { "H_Cap_marshal", "", 10, "" },
            { "H_HeadSet_black_F", "", 10, "" },
            { "H_HeadSet_orange_F", "", 10, "" },
            { "H_HeadSet_red_F", "", 10, "" },
            { "H_HeadSet_white_F", "", 10, "" },
            { "H_HeadSet_yellow_F", "", 10, "" },
            { "H_EarProtectors_red_F", "", 10, "" },
            { "H_EarProtectors_white_F", "", 10, "" },
            { "H_EarProtectors_yellow_F", "", 10, "" },
            { "H_HeadBandage_clean_F", "", 10, "" },
            { "H_Construction_basic_red_F", "", 10, "" },
            { "H_Construction_earprot_red_F", "", 10, "" },
            { "H_Construction_basic_white_F", "", 10, "" },
            { "H_Construction_earprot_white_F", "", 10, "" },
            { "H_Cap_White_IDAP_F", "", 10, "" },
            { "H_Cap_red", "", 10, "" },
            { "H_Booniehat_tan", "", 10, "" },
            { "H_Bandanna_sand", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Aviator", "", 10, "" },
            { "G_Respirator_white_F", "", 10, "" },
            { "G_Respirator_blue_F", "", 10, "" },
            { "G_Respirator_yellow_F", "", 10, "" },
            { "G_EyeProtectors_F", "", 10, "" },
            { "G_Spectacles_Tinted", "", 10, "" },
            { "G_RegulatorMask_F", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Safety_yellow_F", "", 10, "" },
            { "V_DeckCrew_white_F", "", 10, "" },
            { "V_DeckCrew_red_F", "", 10, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_LegStrapBag_black_F", "", 10, "" },
            { "B_Messenger_Black_F", "", 10, "" },
            { "B_Messenger_Gray_F", "", 10, "" },
            { "B_Messenger_IDAP_F", "", 10, "" },
            { "B_Kitbag_tan", "", 10, "" }
        };
    };

    class reb_clothing {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", "", 0, "" },
            { "U_Rangemaster_shortsleeve", "", 0, "" },
            { "U_I_OfficerUniform", "", 0, "" },
            { "U_I_Wetsuit", "", 0, "" },
            { "U_I_C_Soldier_Para_1_F", "", 0, "" },
            { "U_I_C_Soldier_Para_2_F", "", 0, "" },
            { "U_I_C_Soldier_Para_3_F", "", 0, "" },
            { "U_I_C_Soldier_Para_4_F", "", 0, "" },
            { "U_I_L_Uniform_01_camo_F", "", 0, "" },
            { "U_I_L_Uniform_01_deserter_F", "", 0, "" },
            { "U_I_L_Uniform_01_tshirt_olive_F", "", 0, "" },
            { "U_BG_Guerilla1_1", "", 0, "" },
            { "U_BG_Guerilla2_1", "", 0, "" },
            { "U_BG_Guerilla2_2", "", 0, "" },
            { "U_BG_Guerilla2_3", "", 0, "" },
            { "U_BG_Guerilla3_1", "", 0, "" },
            { "U_BG_leader", "", 0, "" },
            { "U_C_HunterBody_grn", "", 0, "" },
            { "U_BG_Guerrilla_6_1", "", 0, "" },
            { "U_BG_Guerilla1_2_F", "", 0, "" },
            { "U_C_E_LooterJacket_01_F", "", 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Booniehat_khk", "", 0, "" },
            { "H_Booniehat_oli", "", 0, "" },
            { "H_Booniehat_mcamo", "", 0, "" },
            { "H_Booniehat_tan", "", 0, "" },
            { "H_Booniehat_dgtl", "", 0, "" },
            { "H_Cap_red", "", 0, "" },
            { "H_Cap_blu", "", 0, "" },
            { "H_Cap_oli", "", 0, "" },
            { "H_Cap_headphones", "", 0, "" },
            { "H_Cap_tan", "", 0, "" },
            { "H_Cap_blk", "", 0, "" },
            { "H_Cap_blk_CMMG", "", 0, "" },
            { "H_Cap_brn_SPECOPS", "", 0, "" },
            { "H_Cap_tan_specops_US", "", 0, "" },
            { "H_Cap_khaki_specops_UK", "", 0, "" },
            { "H_Cap_grn_BI", "", 0, "" },
            { "H_Cap_blk_Raven", "", 0, "" },
            { "H_Cap_blk_ION", "", 0, "" },
            { "H_Cap_oli_hs", "", 0, "" },
            { "H_Cap_press", "", 0, "" },
            { "H_Cap_usblack", "", 0, "" },
            { "H_Cap_surfer", "", 0, "" },
            { "H_Cap_police", "", 0, "" },
            { "H_MilCap_ocamo", "", 0, "" },
            { "H_MilCap_mcamo", "", 0, "" },
            { "H_MilCap_gry", "", 0, "" },
            { "H_MilCap_dgtl", "", 0, "" },
            { "H_MilCap_blue", "", 0, "" },
            { "H_Bandanna_surfer", "", 0, "" },
            { "H_Bandanna_khk", "", 0, "" },
            { "H_Bandanna_khk_hs", "", 0, "" },
            { "H_Bandanna_cbr", "", 0, "" },
            { "H_Bandanna_sgg", "", 0, "" },
            { "H_Bandanna_sand", "", 0, "" },
            { "H_Bandanna_surfer_blk", "", 0, "" },
            { "H_Bandanna_surfer_grn", "", 0, "" },
            { "H_Bandanna_gry", "", 0, "" },
            { "H_Bandanna_blu", "", 0, "" },
            { "H_Bandanna_camo", "", 0, "" },
            { "H_Bandanna_mcamo", "", 0, "" },
            { "H_Watchcap_blk", "", 0, "" },
            { "H_Watchcap_cbr", "", 0, "" },
            { "H_Watchcap_khk", "", 0, "" },
            { "H_Watchcap_camo", "", 0, "" },
            { "H_StrawHat", "", 0, "" },
            { "H_StrawHat_dark", "", 0, "" },
            { "H_Hat_blue", "", 0, "" },
            { "H_Hat_brown", "", 0, "" },
            { "H_Hat_camo", "", 0, "" },
            { "H_Hat_grey", "", 0, "" },
            { "H_Hat_checker", "", 0, "" },
            { "H_Hat_tan", "", 0, "" },
            { "H_Cap_marshal", "", 0, "" },
            { "H_MilCap_tna_F", "", 0, "" },
            { "H_MilCap_ghex_F", "", 0, "" },
            { "H_Booniehat_tna_F", "", 0, "" },
            { "H_MilCap_gen_F", "", 0, "" },
            { "H_Hat_Safari_sand_F", "", 0, "" },
            { "H_Hat_Safari_olive_F", "", 0, "" },
            { "H_EarProtectors_yellow_F", "", 0, "" },
            { "H_EarProtectors_white_F", "", 0, "" },
            { "H_EarProtectors_orange_F", "", 0, "" },
            { "H_EarProtectors_red_F", "", 0, "" },
            { "H_EarProtectors_black_F", "", 0, "" },
            { "H_HeadSet_yellow_F", "", 0, "" },
            { "H_HeadSet_white_F", "", 0, "" },
            { "H_HeadSet_orange_F", "", 0, "" },
            { "H_HeadSet_red_F", "", 0, "" },
            { "H_HeadSet_black_F", "", 0, "" },
            { "H_HeadBandage_stained_F", "", 0, "" },
            { "H_HeadBandage_clean_F", "", 0, "" },
            { "H_HeadBandage_bloody_F", "", 0, "" },
            { "H_Cap_White_IDAP_F", "", 0, "" },
            { "H_Cap_Orange_IDAP_F", "", 0, "" },
            { "H_Cap_Black_IDAP_F", "", 0, "" },
            { "H_WirelessEarpiece_F", "", 0, "" },
            { "H_Hat_Tinfoil_F", "", 0, "" },
            { "H_Booniehat_mgrn", "", 0, "" },
            { "H_Booniehat_taiga", "", 0, "" },
            { "H_Booniehat_eaf", "", 0, "" },
            { "H_Booniehat_wdl", "", 0, "" },
            { "H_MilCap_grn", "", 0, "" },
            { "H_MilCap_taiga", "", 0, "" },
            { "H_MilCap_wdl", "", 0, "" },
            { "H_MilCap_eaf", "", 0, "" },
            { "H_Beret_blk", "", 0, "" },
            { "H_Beret_gen_F", "", 0, "" },
            { "H_Shemag_olive", "", 0, "" },
            { "H_Shemag_olive_hs", "", 0, "" },
            { "H_ShemagOpen_khk", "", 0, "" },
            { "H_ShemagOpen_tan", "", 0, "" },
            { "H_Cap_grn", "", 0, "" },
            { "H_HelmetIA", "", 0, "" },
            { "H_HelmetCrew_I", "", 0, "" },
            { "H_PASGT_basic_olive_F", "", 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Spectacles", "", 0, "" },
            { "G_Spectacles_Tinted", "", 0, "" },
            { "G_Combat", "", 0, "" },
            { "G_Lowprofile", "", 0, "" },
            { "G_Shades_Black", "", 0, "" },
            { "G_Shades_Green", "", 0, "" },
            { "G_Shades_Red", "", 0, "" },
            { "G_Squares", "", 0, "" },
            { "G_Squares_Tinted", "", 0, "" },
            { "G_Sport_BlackWhite", "", 0, "" },
            { "G_Sport_Blackyellow", "", 0, "" },
            { "G_Sport_Greenblack", "", 0, "" },
            { "G_Sport_Checkered", "", 0, "" },
            { "G_Sport_Red", "", 0, "" },
            { "G_Tactical_Black", "", 0, "" },
            { "G_Lady_Blue", "", 0, "" },
            { "G_Goggles_VR", "", 0, "" },
            { "G_Shades_Blue", "", 0, "" },
            { "G_Sport_Blackred", "", 0, "" },
            { "G_Tactical_Clear", "", 0, "" },
            { "G_Combat_Goggles_tna_F", "", 0, "" },
            { "G_Respirator_white_F", "", 0, "" },
            { "G_Respirator_yellow_F", "", 0, "" },
            { "G_Respirator_blue_F", "", 0, "" },
            { "G_EyeProtectors_F", "", 0, "" },
            { "G_EyeProtectors_Earpiece_F", "", 0, "" },
            { "G_WirelessEarpiece_F", "", 0, "" },
            { "G_Blindfold_01_white_F", "", 0, "" },
            { "G_Blindfold_01_black_F", "", 0, "" },
            { "G_Balaclava_blk", "", 0, "" },
            { "G_Balaclava_oli", "", 0, "" },
            { "G_Balaclava_combat", "", 0, "" },
            { "G_Balaclava_lowprofile", "", 0, "" },
            { "G_Bandanna_blk", "", 0, "" },
            { "G_Bandanna_oli", "", 0, "" },
            { "G_Bandanna_khk", "", 0, "" },
            { "G_Bandanna_tan", "", 0, "" },
            { "G_Bandanna_beast", "", 0, "" },
            { "G_Bandanna_shades", "", 0, "" },
            { "G_Bandanna_sport", "", 0, "" },
            { "G_Bandanna_aviator", "", 0, "" },
            { "G_AirPurifyingRespirator_01_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_black_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_olive_F", "", 0, "" },
            { "G_AirPurifyingRespirator_02_sand_F", "", 0, "" },
            { "G_RegulatorMask_F", "", 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 900, "" },
            { "V_TacVestIR_blk", "", 40000, "" },
            { "V_TacVest_blk", "", 40000, "" },
            { "V_TacVest_oli", "", 40000, "" },
            { "V_TacVest_camo", "", 40000, "" },
            { "V_RebreatherIA", "", 40000, "" },
            { "V_PlateCarrierIA1_dgtl", "", 120000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_ocamo", "", 2000, "" },
            { "B_Kitbag_rgr", "", 2000, "" },
            { "B_Kitbag_mcamo", "", 2000, "" },
            { "B_Kitbag_sgg", "", 2000, "" },
            { "B_Kitbag_cbr", "", 2000, "" },
            { "B_Kitbag_tan", "", 2000, "" },
            { "B_TacticalPack_rgr", "", 2000, "" },
            { "B_TacticalPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_ocamo", "", 2000, "" },
            { "B_TacticalPack_blk", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2000, "" },
            { "B_FieldPack_khk", "", 2000, "" },
            { "B_FieldPack_ocamo", "", 2000, "" },
            { "B_FieldPack_oucamo", "", 2000, "" },
            { "B_FieldPack_cbr", "", 2000, "" },
            { "B_FieldPack_blk", "", 2000, "" },
            { "B_Carryall_ocamo", "", 2000, "" },
            { "B_Carryall_oucamo", "", 2000, "" },
            { "B_Carryall_mcamo", "", 2000, "" },
            { "B_Carryall_khk", "", 2000, "" },
            { "B_Carryall_cbr", "", 2000, "" },
            { "B_Parachute", "", 2000, "" },
            { "B_FieldPack_oli", "", 2000, "" },
            { "B_Carryall_oli", "", 2000, "" },
            { "B_AssaultPack_Kerry", "", 2000, "" },
            { "B_Respawn_TentDome_F", "", 2000, "" },
            { "B_Respawn_TentA_F", "", 2000, "" },
            { "B_Respawn_Sleeping_bag_F", "", 2000, "" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 2000, "" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 2000, "" },
            { "B_Static_Designator_01_weapon_F", "", 2000, "" },
            { "B_Bergen_mcamo_F", "", 2000, "" },
            { "B_Bergen_dgtl_F", "", 2000, "" },
            { "B_Bergen_hex_F", "", 2000, "" },
            { "B_Bergen_tna_F", "", 2000, "" },
            { "B_AssaultPack_tna_F", "", 2000, "" },
            { "B_Carryall_ghex_F", "", 2000, "" },
            { "B_FieldPack_ghex_F", "", 2000, "" },
            { "B_ViperHarness_blk_F", "", 2400, "" }, // spazio 
            { "B_ViperHarness_ghex_F", "", 2000, "" },
            { "B_ViperHarness_hex_F", "", 2000, "" },
            { "B_ViperHarness_khk_F", "", 2000, "" },
            { "B_ViperHarness_oli_F", "", 2000, "" },
            { "B_ViperLightHarness_blk_F", "", 2000, "" },
            { "B_ViperLightHarness_ghex_F", "", 2000, "" },
            { "B_ViperLightHarness_hex_F", "", 2000, "" },
            { "B_ViperLightHarness_khk_F", "", 2000, "" },
            { "B_ViperLightHarness_oli_F", "", 2000, "" },
            { "B_Patrol_Respawn_bag_F", "", 2000, "" },
            { "B_Messenger_Coyote_F", "", 2000, "" },
            { "B_Messenger_Olive_F", "", 2000, "" },
            { "B_Messenger_Black_F", "", 2000, "" },
            { "B_Messenger_Gray_F", "", 2000, "" },
            { "B_Messenger_IDAP_F", "", 2000, "" },
            { "B_LegStrapBag_black_F", "", 2000, "" },
            { "B_LegStrapBag_coyote_F", "", 2000, "" },
            { "B_LegStrapBag_olive_F", "", 2000, "" },
            { "B_W_Static_Designator_01_weapon_F", "", 2000, "" },
            { "B_Carryall_green_F", "", 2000, "" },
            { "B_Carryall_taiga_F", "", 2000, "" },
            { "B_Carryall_wdl_F", "", 2000, "" },
            { "B_Carryall_eaf_F", "", 2000, "" },
            { "B_FieldPack_green_F", "", 2000, "" },
            { "B_FieldPack_taiga_F", "", 2000, "" },
            { "B_AssaultPack_wdl_F", "", 2000, "" },
            { "B_AssaultPack_eaf_F", "", 2000, "" },
            { "B_RadioBag_01_digi_F", "", 2000, "" }
        };
    };

    class kart_clothing {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
