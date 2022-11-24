class Life_Clothing {
    idd = 3100;
    name= "Life_Clothing";
    movingEnable = 1;
    enableSimulation = 1;
    //onLoad = "[] execVM 'core\client\keychain\init.sqf'";

    class controlsBackground {
    };

    class controls {
        class Life_RscTitleBackground: Life_RscText {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0.7};
            x = 0.0848863 * safezoneW + safezoneX;
            y = 0.205934 * safezoneH + safezoneY;
            w = 0.150227 * safezoneW;
            h = 0.0280062 * safezoneH;
        };
        
        class MainBackground: Life_RscText {
            idc = -1;
            colorBackground[] = {0, 0, 0, 0.7};
            x = 0.0822508 * safezoneW + safezoneX;
            y = 0.236181 * safezoneH + safezoneY;
            w = 0.177906 * safezoneW;
            h = 0.364085 * safezoneH;
        };

        class Title: Life_RscTitle {
            idc = 3103;
            text = "";
            colorBackground[] = {0, 0, 0, 0};
            x = 0.0848863 * safezoneW + safezoneX;
            y = 0.197537 * safezoneH + safezoneY;
            w = 0.150227 * safezoneW;
            h = 0.0336074 * safezoneH;
        };

        class ClothingList: Life_RscListBox {
            idc = 3101;
            text = "";
            sizeEx = 0.035;
            onLBSelChanged = "[_this] call life_fnc_changeClothes;";
            x = 0.0843593 * safezoneW + safezoneX;
            y = 0.240382 * safezoneH + safezoneY;
            w = 0.172637 * safezoneW;
            h = 0.245055 * safezoneH;
        };

        class PriceTag: Life_RscStructuredText {
            idc = 3102;
            text = "";
            sizeEx = 0.035;
            x = 0.0848864 * safezoneW + safezoneX;
            y = 0.528006 * safezoneH + safezoneY;
            w = 0.0830225 * safezoneW;
            h = 0.0280062 * safezoneH;
        };

        class TotalPrice: Life_RscStructuredText {
            idc = 3106;
            text = "";
            sizeEx = 0.035;
            x = 0.174497 * safezoneW + safezoneX;
            y = 0.528006 * safezoneH + safezoneY;
            w = 0.0830225 * safezoneW;
            h = 0.0280062 * safezoneH;
        };

        class FilterList: Life_RscCombo {
            idc = 3105;
            colorBackground[] = {0,0,0,0.7};
            onLBSelChanged  = "_this call life_fnc_clothingFilter";
            x = 0.0822268 * safezoneW + safezoneX;
            y = 0.491601 * safezoneH + safezoneY;
            w = 0.178171 * safezoneW;
            h = 0.0301067 * safezoneH;
        };

        class CloseButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = " X";
            colorBackground[] = {0, 0, 0, 0};
            onButtonClick = "closeDialog 0; [] call life_fnc_playerSkins;";
            x = 0.240389 * safezoneW + safezoneX;
            y = 0.197537 * safezoneH + safezoneY;
            w = 0.0177916 * safezoneW;
            h = 0.0336074 * safezoneH;
        };

        class BuyButtonKey: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Buy";
            onButtonClick = "[] call life_fnc_buyClothes;";
            x = 0.0822508 * safezoneW + safezoneX;
            y = 0.564412 * safezoneH + safezoneY;
            w = 0.177257 * safezoneW;
            h = 0.0336074 * safezoneH;
        };

        class viewAngle: life_RscXSliderH {
            idc = 3107;
            text = "";
            color[] = {1, 1, 1, 0.45};
            colorActive[] = {1, 1, 1, 0.65};
            onSliderPosChanged = "[4,_this select 1] call life_fnc_s_onSliderChange;";
            tooltip = "";
            x = 0.25 * safezoneW + safezoneX;
            y = 0.93 * safezoneH + safezoneY;
            w = 0.5 * safezoneW;
            h = 0.02 * safezoneH;
        };
    };
};
