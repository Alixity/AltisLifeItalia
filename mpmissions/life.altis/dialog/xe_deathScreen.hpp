#include "guiIds_macros.hpp"

class xe_deathScreen {
    idd = ID_xe_deathScreen;
    name = "xe_deathScreen";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground { };

    class Controls {
        class textMedicsOnline: Life_RscText {
            idc = ID_xe_deathScreen_textMedicsOnline;
            text = "Medics Online: 1"; //xe fix
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.449381 * safezoneH + safezoneY;
            w = 0.0938159 * safezoneW;
            h = 0.0440173 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class textMedicsNearby: Life_RscText {
            idc = ID_xe_deathScreen_textMedicsNearby;
            text = "Medics Nearby: No"; //xe fix
            x = 0.503093 * safezoneW + safezoneX;
            y = 0.449381 * safezoneH + safezoneY;
            w = 0.0948468 * safezoneW;
            h = 0.0440173 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class buttonRespawn: Life_RscButtonMenu {
            idc = ID_xe_deathScreen_buttonRespawn;
            text = "Respawn";
            onButtonClick = "closeDialog 0; life_respawned = true; [] call life_fnc_spawnMenu;";
            class Attributes {align = "center";};
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.533013 * safezoneH + safezoneY;
            w = 0.0938159 * safezoneW;
            h = 0.033013 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class buttonMedic: Life_RscButtonMenu {
            idc = ID_xe_deathScreen_buttonMedic;
            onButtonClick = "[] call life_fnc_requestMedic;";
            text = "Aiuto!!!";
            class Attributes {align = "center";};
            x = 0.503093 * safezoneW + safezoneX;
            y = 0.533013 * safezoneH + safezoneY;
            w = 0.0948468 * safezoneW;
            h = 0.033013 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class textRespawnTime: Life_RscText {
            idc = ID_xe_deathScreen_textRespawnTime;
            text = "";
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.497799 * safezoneH + safezoneY;
            w = 0.190725 * safezoneW;
            h = 0.033013 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
    };
};
