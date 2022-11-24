/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun_weapon {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "ItemRadio", "", 0, 0, "" },
            { "hgun_Rook40_F", "", 55000, 0, "" }, // Rook
            { "hgun_Pistol_01_F", "", 60000, 0, "" }, // PM
            { "hgun_Pistol_heavy_02_F", "", 60000, 0, "" }, // Zubr
            { "hgun_ACPC2_F", "", 65000, 0, "" }, // ACP
            { "SMG_05_F", "", 90000, 0, "" }, // Protector
            { "hgun_PDW2000_F", "", 105000, 0, "" } // PDW
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 1250, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 1500, 0, "" },
            { "9Rnd_45ACP_Mag", "", 2000, 0, "" },
            { "30Rnd_9x21_Mag", "", 2500, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 2500, 0, "" },
            { "10Rnd_9x21_Mag", "", 2500, 0, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 0, "" }
        };
    };

    class gang_weapon {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "ItemRadio", "", 0, 0, "" }, 
            { "hgun_Rook40_F", "", 35000, 750, "" }, // Rook
            { "hgun_Pistol_heavy_02_F", "", 40000, 1250, "" }, // Zubr
            { "hgun_ACPC2_F", "", 45000, 2250, "" }, // ACP
            { "hgun_PDW2000_F", "", 75000, 4750, "" } // PWD
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };
    
    class illegalguns_guns {
        name = "STR_License_IllegalGuns";
        side = "civ";
        conditions = "license_civ_illegalguns";
        items[] = {
            { "ItemRadio", "", 0, 0, "" },
            { "SMG_01_F", "", 90000, 0, "" }, // Vektor
            { "SMG_02_F", "", 105000, 0, "" }, // String
            { "arifle_SDAR_F", "", 35000, 0, "" }, // SDAR
            { "arifle_AKS_F", "", 375000, 0, "" }, // Aks
            { "arifle_TRG20_F", "", 400000, 0, "" }, // TRG
            { "arifle_Mk20_plain_F", "", 430000, 0, "" } // MK20
        };
        mags[] = {
            { "30Rnd_45ACP_Mag_SMG_01", "", 1000, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 3000, 0, "" },
            { "30Rnd_556x45_Stanag", "", 4000, 0, "" },
            { "30Rnd_545x39_Mag_F", "", 3500, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 2000, 0, "" },
            { "30Rnd_556x45_Stanag", "", 4000, 0, "" }
        };
        accs[] = {
            { "", "", 0, 0, "" }
        };
    };

    class reb_weapon {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemRadio", "", 0, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1000, 0, "" },
            { "hgun_ACPC2_F", "", 16000, 0, "" }, // ACP
            { "hgun_P07_F", "", 16000, 0, "" }, // P07
            { "hgun_Pistol_heavy_02_F", "", 26000, 0, "" }, // Zubr
            { "hgun_Rook40_F", "", 16000, 0, "" }, // Rook
            { "hgun_Pistol_01_F", "", 16000, 500, "" }, // PM

            { "sgun_HunterShotgun_01_F", "", 35000, 0, "" }, // Kozlice
            { "sgun_HunterShotgun_01_sawedoff_F", "", 45000, 0, "" }, // Kozlice

            { "hgun_PDW2000_F", "", 30000, 0, "" }, // PDW
            { "SMG_01_F", "", 50000, 500, "" }, // Vermin
            { "SMG_02_F", "", 60000, 500, "" }, // String
            { "SMG_05_F", "", 60000, 500, "" }, // Protector
            { "arifle_SDAR_F", "", 15000, 0, "" }, // SDAR

            { "arifle_AKS_F", "", 75000, 0, "" }, // AKS
            { "arifle_TRG21_F", "", 80000, 0, "" }, // TRG
            { "arifle_Mk20_F", "", 80000, 0, "" }, // MK20

            { "arifle_CTAR_blk_F", "", 100000, 0, "" }, // Car
            { "arifle_Katiba_F", "", 150000, 0, "" }, // Katiba
            //{ "arifle_ARX_blk_F", "", 250000, 0, "" } // Type
        };
        mags[] = {
            { "30Rnd_45ACP_Mag_SMG_01", "", 800, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 800, 0, "" },
            { "16Rnd_9x21_Mag", "", 800, 0, "" },
            { "2Rnd_12Gauge_Pellets", "", 800, 0, "" },
            { "2Rnd_12Gauge_Slug", "", 800, 0, "" },
            { "9Rnd_45ACP_Mag", "", 800, 0, "" },
            { "11Rnd_45ACP_Mag", "", 800, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 800, 0, "" },
            { "10Rnd_9x21_Mag", "", 800, 0, "" },
            { "30Rnd_65x39_caseless_green", "", 3000, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 3000, 0, "" },
            { "30Rnd_545x39_Mag_Green_F", "", 3000, 0, "" },
            { "30Rnd_580x42_Mag_F", "", 3000, 0, "" },
            { "5Rnd_127x108_Mag", "", 3000, 0, "" }
        };
        accs[] = {
            { "optic_Holosight_smg_blk_F", "", 0, 0, "" }, // Mk17 Holosight SMG (Black)
            { "optic_Holosight_smg_khk_F", "", 0, 0, "" }, // Mk17 Holosight SMG (Khaki)
            { "optic_Holosight_lush_F", "", 0, 0, "" }, // Mk17 Holosight (Lush)
            { "optic_Holosight_arid_F", "", 0, 0, "" }, // Mk17 Holosight (Arid)
            { "optic_Holosight_blk_F", "", 0, 0, "" }, // Mk17 Holosight (Black)
            { "optic_Holosight_khk_F", "", 0, 0, "" }, // Mk17 Holosight (Khaki)
            { "optic_Holosight_smg", "", 0, 0, "" }, // Mk17 Holosight SMG
            { "optic_Arco_lush_F", "", 0, 0, "" }, // ARCO (Lush)
            { "optic_Arco_arid_F", "", 0, 0, "" }, // ARCO (Arid)
            { "optic_ACO_grn_smg", "", 0, 0, "" }, // ACO SMG (Green)
            { "optic_Arco_ghex_F", "", 0, 0, "" }, // ARCO (Green Hex)
            { "optic_Arco_blk_F", "", 0, 0, "" }, // ARCO (Black)
            { "optic_Hamr_khk_F", "", 0, 0, "" }, // RCO (Khaki)
            { "optic_ERCO_blk_F", "", 0, 0, "" }, // ERCO (Black)
            { "optic_ERCO_khk_F", "", 0, 0, "" }, // ERCO (Khaki)
            { "optic_ERCO_snd_F", "", 0, 0, "" }, // ERCO (Sand)
            { "optic_Holosight", "", 0, 0, "" }, // Mk17 Holosight
            { "optic_ACO_grn", "", 0, 0, "" }, // ACO (Green)
            { "optic_Aco_smg", "", 0, 0, "" }, // ACO SMG (Red)
            { "optic_Arco", "", 0, 0, "" }, // ARCO
            { "optic_Hamr", "", 0, 0, "" }, // RCO
            { "optic_MRCO", "", 0, 0, "" }, // MRCO
            { "optic_Aco", "", 0, 0, "" } // ACO (Red)

            //{ "muzzle_snds_65_TI_blk_F", "", 0, 0, "" },
            //{ "muzzle_snds_acp", "", 0, 0, "" }, // Sound Suppressor (.45 ACP)
            //{ "muzzle_snds_L", "", 0, 0, "" }, // Sound Suppressor (9 mm)	
            //{ "muzzle_snds_M", "", 0, 0, "" }, // Sound Suppressor (5.56 mm)

            //{ "acc_flashlight_smg_01", "", 0, 0, "" }, // SMG Flashlight
            //{ "acc_flashlight_pistol", "", 0, 0, "" }, // Pistol Flashlight
            //{ "acc_flashlight", "", 0, 0, "" }, // Flashlight
            //{ "acc_pointer_IR", "", 0, 0, "" }, // IR Laser Pointer

            //{ "bipod_01_F_snd", "", 0, 0, "" },
            //{ "bipod_01_F_blk", "", 0, 0, "" },
            //{ "bipod_01_F_mtp", "", 0, 0, "" },
            //{ "bipod_01_F_khk", "", 0, 0, "" },

            //{ "ChemicalDetector_01_olive_F", "", 0, 0, "" },
            //{ "ChemicalDetector_01_black_F", "", 0, 0, "" },
            //{ "ChemicalDetector_01_tan_F", "", 0, 0, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemRadio", "", 0, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 100, 0, "" },
            { "ItemRadio", "", 0, 0, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_weapon {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemRadio", "", 0, 0, "" },
            { "ItemGPS", "", 100, 0, "" },
            { "FirstAidKit", "", 100, 0, "" },
            { "NVGoggles", "", 1000, 0, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 0, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 0, "" }, // Teser
            { "hgun_Pistol_heavy_01_F", "", 3500, 0, "call life_coplevel >= 1" }, // Pistola I
            { "hgun_ACPC2_F", "", 3500, 0, "call life_coplevel >= 1" }, // Pistola II

            { "hgun_PDW2000_F", "", 7000, 0, "call life_coplevel >= 1" }, // PDW
            { "SMG_01_F", "", 7000, 0, "call life_coplevel >= 1" }, // Vermin
            { "SMG_02_F", "", 7000, 0, "call life_coplevel >= 1" }, // String
            { "SMG_05_F", "", 7000, 0, "call life_coplevel >= 1" }, // Protector
            { "arifle_SDAR_F", "", 7000, 0, "call life_coplevel >= 1" }, // SDAR
            { "SMG_03C_TR_black", "", 7000, 0, "call life_coplevel >= 1" }, // ADR
            { "SMG_03_black", "", 7000, 0, "call life_coplevel >= 1" }, // ADR
            { "SMG_03C_black", "", 7000, 0, "call life_coplevel >= 1" }, // ADR

            { "arifle_TRG20_F", "TRG", 7000, 0, "call life_coplevel >= 2" }, // TRG
            { "arifle_Mk20_plain_F", "MK20", 7000, 0, "call life_coplevel >= 2" }, // MK20
            { "arifle_SPAR_01_blk_F", "", 10000, 0, "call life_coplevel >= 2" }, // SPAR
            { "arifle_CTAR_blk_F", "", 10000, 0, "call life_coplevel >= 2" }, // Car
            
            { "arifle_MX_Black_F", "", 10000, 0, "call life_coplevel >= 3" }, // MX
            { "arifle_MXC_Black_F", "", 10000, 0, "call life_coplevel >= 3" }, // MXC

            { "arifle_MXM_Black_F", "", 10000, 0, "call life_coplevel >= 4" } // MXM
        };
        mags[] = {
            { "30Rnd_45ACP_Mag_SMG_01", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "150Rnd_556x45_Drum_Mag_F", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag_green", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag_red", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag", "", 200, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 200, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 200, 0, "" },
            { "30Rnd_556x45_Stanag", "", 200, 0, "" },
            { "11Rnd_45ACP_Mag", "", 200, 0, "" },
            { "9Rnd_45ACP_Mag", "", 200, 0, "" },

            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 200, 0, "" },
            { "100Rnd_65x39_caseless_black_mag", "", 200, 0, "" },
            { "30Rnd_65x39_caseless_khaki_mag", "", 200, 0, "" },
            { "30Rnd_65x39_caseless_black_mag", "", 200, 0, "" },
            { "30Rnd_65x39_caseless_mag", "", 200, 0, "" },
            { "30Rnd_65x39_caseless_green", "", 200, 0, "" },
            { "100Rnd_65x39_caseless_mag", "", 200, 0, "" },
            { "30Rnd_65x39_caseless_mag", "", 200, 0, "" },

            { "30Rnd_45ACP_Mag_SMG_01", "", 200, 0, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 200, 0, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 200, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 200, 0, "" },
            { "11Rnd_45ACP_Mag", "", 200, 0, "" },
            { "9Rnd_45ACP_Mag", "", 200, 0, "" },

            { "2Rnd_12Gauge_Pellets", "", 200, 0, "" },
            { "2Rnd_12Gauge_Slug", "", 200, 0, "" },
            { "2Rnd_12Gauge_Pellets", "", 200, 0, "" },
            { "2Rnd_12Gauge_Slug", "", 200, 0, "" },

            { "50Rnd_570x28_SMG_03", "", 200, 0, "" },
            { "50Rnd_570x28_SMG_03", "", 200, 0, "" },

            { "30Rnd_580x42_Mag_F", "", 200, 0, "" },

            { "30Rnd_545x39_Mag_F", "", 200, 0, "" },

            { "10Rnd_50BW_Mag_F", "", 200, 0, "" },

            { "30Rnd_9x21_Mag_SMG_02", "", 200, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 200, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 200, 0, "" },
            { "16Rnd_9x21_Mag", "", 200, 0, "" },
            { "16Rnd_9x21_Mag", "", 200, 0, "" },
            { "10Rnd_9x21_Mag", "", 200, 0, "" },
            { "16Rnd_9x21_Mag", "", 200, 0, "" }

        };
        accs[] = {
            { "optic_Holosight_smg_blk_F", "", 0, 0, "" },
            //{ "optic_Holosight_smg_khk_F", "", 0, 0, "" },
            //{ "optic_Holosight_lush_F", "", 0, 0, "" },
            //{ "optic_Holosight_arid_F", "", 0, 0, "" },
            //{ "optic_Holosight_blk_F", "", 0, 0, "" },
            //{ "optic_Holosight_khk_F", "", 0, 0, "" },
            //{ "optic_Holosight_smg", "", 0, 0, "" }, 
            //{ "optic_Arco_lush_F", "", 0, 0, "" },
            //{ "optic_Arco_arid_F", "", 0, 0, "" },
            //{ "optic_ACO_grn_smg", "", 0, 0, "" },
            //{ "optic_Arco_ghex_F", "", 0, 0, "" },
            //{ "optic_Arco_blk_F", "", 0, 0, "" },
            { "optic_Hamr_khk_F", "", 0, 0, "" },
            { "optic_ERCO_blk_F", "", 0, 0, "" },
            { "optic_ERCO_khk_F", "", 0, 0, "" },
            { "optic_ERCO_snd_F", "", 0, 0, "" },
            { "optic_Holosight", "", 0, 0, "" },
            { "optic_ACO_grn", "", 0, 0, "" },
            //{ "optic_Aco_smg", "", 0, 0, "" },

            { "optic_KHS_blk", "", 0, 0, "" },
            { "optic_KHS_old", "", 0, 0, "" },
            { "optic_Arco", "", 0, 0, "" },
            { "optic_Hamr", "", 0, 0, "" },
            { "optic_LRPS", "", 0, 0, "" },
            { "optic_MRCO", "", 0, 0, "" },
            { "optic_Aco", "", 0, 0, "" },

            { "muzzle_snds_65_TI_blk_F", "", 0, 0, "" },
            { "muzzle_snds_acp", "", 0, 0, "" },
            { "muzzle_snds_L", "", 0, 0, "" },
            { "muzzle_snds_M", "", 0, 0, "" },

            { "acc_flashlight_smg_01", "", 0, 0, "" },
            { "acc_flashlight_pistol", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" },
            { "acc_pointer_IR", "", 0, 0, "" },

            { "bipod_01_F_snd", "", 0, 0, "" },
            { "bipod_01_F_blk", "", 0, 0, "" },
            { "bipod_01_F_mtp", "", 0, 0, "" },
            { "bipod_01_F_khk", "", 0, 0, "" },

            { "ChemicalDetector_01_olive_F", "", 0, 0, "" },
            { "ChemicalDetector_01_black_F", "", 0, 0, "" },
            { "ChemicalDetector_01_tan_F", "", 0, 0, "" }
        };
    };

    //Ctrg Shops
    class ctrg_weapon {
        name = "ctrg";
        side = "cop";
        conditions = "call life_coplevel >= 5";
        items[] = {
            { "Binocular", "", 150, 0, "" },
            { "ItemRadio", "", 0, 0, "" },
            { "ItemGPS", "", 100, 0, "" },
            { "FirstAidKit", "", 150, 0, "" },
            { "NVGoggles", "", 1000, 0, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 0, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 0, "" },
            { "hgun_ACPC2_F", "", 0, 0, "" }, // ACP
            { "hgun_P07_F", "", 0, 0, "" }, // P07
            { "hgun_Pistol_heavy_01_F", "", 0, 0, "" }, // 4-five
            { "hgun_Pistol_heavy_02_F", "", 0, 0, "" }, // Zubr
            { "hgun_PDW2000_F", "", 0, 0, "" }, // PDW
            { "SMG_01_F", "", 0, 0, "" }, // Vermin
            { "SMG_02_F", "", 0, 0, "" }, // Sting
            { "SMG_05_F", "", 0, 0, "" }, // Protector
            { "arifle_SDAR_F", "", 0, 0, "" }, // SDAR
            { "SMG_03C_TR_black", "", 0, 0, "" }, // ADR
            { "SMG_03_black", "", 0, 0, "" }, // ADR
            { "SMG_03C_black", "", 0, 0, "" }, // ADR
            { "sgun_HunterShotgun_01_F", "", 0, 0, "" }, // Kozlice
            { "sgun_HunterShotgun_01_sawedoff_F", "", 0, 0, "" }, // Kozlice
            { "arifle_MX_F", "", 0, 0, "" }, // MX
            { "arifle_MX_Black_F", "", 0, 0, "" }, // MX
            { "arifle_MXC_Black_F", "", 0, 0, "" }, // MXC
            { "arifle_ARX_blk_F", "", 0, 0, "" }, // Type
            { "arifle_MX_SW_F", "", 0, 0, "" }, // MX SW
            { "arifle_MX_SW_Black_F", "", 0, 0, "" }, // MX SW
            { "arifle_SPAR_01_blk_F", "", 0, 0, "" }, // SPAR
            { "arifle_SPAR_02_blk_F", "", 0, 0, "" } // SPAR
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 0, 0, "" },
            { "100Rnd_65x39_caseless_black_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_khaki_mag", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_black_mag", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_green", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_green", "", 0, 0, "" },
            { "100Rnd_65x39_caseless_mag", "", 0, 0, "" },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_red", "", 0, 0, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 0, 0, "" },
            { "2Rnd_12Gauge_Pellets", "", 0, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },
            { "50Rnd_570x28_SMG_03", "", 0, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 0, 0, "" },
            { "2Rnd_12Gauge_Slug", "", 0, 0, "" },
            { "10Rnd_50BW_Mag_F", "", 0, 0, "" },
            { "11Rnd_45ACP_Mag", "", 0, 0, "" },
            { "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "9Rnd_45ACP_Mag", "", 0, 0, "" },
            { "10Rnd_9x21_Mag", "", 0, 0, "" },
            { "7Rnd_408_Mag", "", 0, 0, "" }
        };
        accs[] = {
            { "optic_Holosight_smg_blk_F", "", 0, 0, "" },
            { "optic_Holosight_smg_khk_F", "", 0, 0, "" },
            { "optic_DMS_weathered_Kir_F", "", 0, 0, "" },
            { "optic_Holosight_lush_F", "", 0, 0, "" },
            { "optic_Holosight_arid_F", "", 0, 0, "" },
            { "optic_Holosight_blk_F", "", 0, 0, "" },
            { "optic_Holosight_khk_F", "", 0, 0, "" },
            { "optic_DMS_weathered_F", "", 0, 0, "" },
            { "optic_Holosight_smg", "", 0, 0, "" },
            { "optic_Arco_lush_F", "", 0, 0, "" },
            { "optic_Arco_arid_F", "", 0, 0, "" },
            { "optic_ACO_grn_smg", "", 0, 0, "" },
            { "optic_Arco_ghex_F", "", 0, 0, "" },
            { "optic_Arco_blk_F", "", 0, 0, "" },
            { "optic_DMS_ghex_F", "", 0, 0, "" },
            { "optic_Hamr_khk_F", "", 0, 0, "" },
            { "optic_ERCO_blk_F", "", 0, 0, "" },
            { "optic_ERCO_khk_F", "", 0, 0, "" },
            { "optic_ERCO_snd_F", "", 0, 0, "" },
            { "optic_Holosight", "", 0, 0, "" },
            { "optic_ACO_grn", "", 0, 0, "" },
            { "optic_Aco_smg", "", 0, 0, "" },
            { "optic_AMS_khk", "", 0, 0, "" },
            { "optic_AMS_snd", "", 0, 0, "" },
            { "optic_KHS_blk", "", 0, 0, "" },
            { "optic_KHS_old", "", 0, 0, "" },
            { "optic_Arco", "", 0, 0, "" },
            { "optic_Hamr", "", 0, 0, "" },
            { "optic_LRPS", "", 0, 0, "" },
            { "optic_MRCO", "", 0, 0, "" },
            { "optic_Aco", "", 0, 0, "" },
            { "optic_SOS", "", 0, 0, "" },
            { "optic_DMS", "", 0, 0, "" },
            { "optic_AMS", "", 0, 0, "" },

            { "muzzle_snds_65_TI_blk_F", "", 0, 0, "" },
            { "muzzle_snds_acp", "", 0, 0, "" },
            { "muzzle_snds_L", "", 0, 0, "" },
            { "muzzle_snds_M", "", 0, 0, "" },

            { "acc_flashlight_smg_01", "", 0, 0, "" },
            { "acc_flashlight_pistol", "", 0, 0, "" },
            { "acc_flashlight", "", 0, 0, "" },
            { "acc_pointer_IR", "", 0, 0, "" },

            { "bipod_01_F_snd", "", 0, 0, "" },
            { "bipod_01_F_blk", "", 0, 0, "" },
            { "bipod_01_F_mtp", "", 0, 0, "" },
            { "bipod_01_F_khk", "", 0, 0, "" },

            { "ChemicalDetector_01_olive_F", "", 0, 0, "" },
            { "ChemicalDetector_01_black_F", "", 0, 0, "" },
            { "ChemicalDetector_01_tan_F", "", 0, 0, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" },
            { "Binocular", "", 150, 0, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemRadio", "", 0, 0, "" }
        };
        mags[] = {};
        accs[] = {
            { "optic_Hamr", "", 10500, 0, "" },
            { "optic_ACO_grn_smg", "", 2500, 0, "" }
        };
    };
};
