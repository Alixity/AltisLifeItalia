#include "common.hpp"

#define ST_RIGHT 0x01 

class xe_hud {
    idd = -1;
    movingEnable =  0;
    enableSimulation = 1;
    enableDisplay = 1;
    fadein = 0;
    fadeout = 0;
    duration =  10e10;
    name = "xe_hud";
    onLoad = "with uiNameSpace do { xe_hud = _this select 0 }";
    class controlsBackground {
        class bg_thirst: Life_RscPicture {
            idc = 1200;
            text = "icons\xeicons\g4.paa";
            x = 0.845469 * safezoneW + safezoneX;
            y = 0.940099 * safezoneH + safezoneY;
            w = 0.149531 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bg_hunger: Life_RscPicture {
            idc = 1201;
            text = "icons\xeicons\g4.paa";
            x = 0.845469 * safezoneW + safezoneX;
            y = 0.902691 * safezoneH + safezoneY;
            w = 0.149531 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bg_health: Life_RscPicture {
            idc = 1202;
            text = "icons\xeicons\g4.paa";
            x = 0.845469 * safezoneW + safezoneX;
            y = 0.865283 * safezoneH + safezoneY;
            w = 0.149531 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bg_cash: Life_RscPicture {
            idc = 1203;
            text = "icons\xeicons\g4.paa";
            x = 0.845469 * safezoneW + safezoneX;
            y = 0.827874 * safezoneH + safezoneY;
            w = 0.149531 * safezoneW;
            h = 0.0330075 * safezoneH;
        };

        class bgicon_thirst: Life_RscPicture {  
            idc = 1200;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.974375 * safezoneW + safezoneX;
            y = 0.940099 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bgicon_hunger: Life_RscPicture {
            idc = 1201;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.974375 * safezoneW + safezoneX;
            y = 0.902691 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bgicon_health: Life_RscPicture {
            idc = 1202;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.974375 * safezoneW + safezoneX;
            y = 0.865283 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.0330075 * safezoneH;
        };
        class bgicon_cash: Life_RscPicture {
            idc = 1203;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 0.974375 * safezoneW + safezoneX;
            y = 0.827874 * safezoneH + safezoneY;
            w = 0.020625 * safezoneW;
            h = 0.0330075 * safezoneH;
        };

        class icon_thirst: Life_RscPicture {
            idc = 1204;
            text = "icons\xeicons\thirst.paa";
            x = 0.977469 * safezoneW + safezoneX;
            y = 0.9445 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022005 * safezoneH;
        };
        class icon_hunger: Life_RscPicture {
            idc = 1205;
            text = "icons\xeicons\hunger.paa";
            x = 0.977468 * safezoneW + safezoneX;
            y = 0.907092 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022005 * safezoneH;
        };
        class icon_health: Life_RscPicture {
            idc = 1206;
            text = "icons\xeicons\health.paa";
            x = 0.977463 * safezoneW + safezoneX;
            y = 0.869685 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022005 * safezoneH;
        };
        class icon_cash: Life_RscPicture {
            idc = 1207;
            text = "icons\xeicons\cash.paa";
            x = 0.976432 * safezoneW + safezoneX;
            y = 0.834475 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022005 * safezoneH;
        };
    };
    class controls {
        class txt_thirst: Life_RscText {
            idc = 1208;
            text = "99"; //--- ToDo: Localize;
            x = 0.847656 * safezoneW + safezoneX;
            y = 0.937899 * safezoneH + safezoneY;
            w = 0.1215625 * safezoneW;
            h = 0.0330075 * safezoneH;
            font = "PuristaMedium";
            style = ST_RIGHT;
        };
        class txt_hunger: Life_RscText {
            idc = 1209;
            text = "99"; //--- ToDo: Localize;
            x = 0.847656 * safezoneW + safezoneX;
            y = 0.90049 * safezoneH + safezoneY;
            w = 0.1215625 * safezoneW;
            h = 0.0330075 * safezoneH;
            font = "PuristaMedium";
            style = ST_RIGHT;
        };
        class txt_health: Life_RscText {
            idc = 1210;
            text = "99"; //--- ToDo: Localize;
            x = 0.847656 * safezoneW + safezoneX;
            y = 0.863085 * safezoneH + safezoneY;
            w = 0.1215625 * safezoneW;
            h = 0.0330075 * safezoneH;
            font = "PuristaMedium";
            style = ST_RIGHT;
        };
        class txt_cash: Life_RscText {
            idc = 1211;
            text = "99"; //--- ToDo: Localize;
            x = 0.847656 * safezoneW + safezoneX;
            y = 0.825673 * safezoneH + safezoneY;
            w = 0.1215625 * safezoneW;
            h = 0.0330075 * safezoneH;
            font = "PuristaMedium";
            style = ST_RIGHT;
        };
    };
};
