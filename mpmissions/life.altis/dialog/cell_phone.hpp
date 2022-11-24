class Life_cell_phone {
    idd = 3000;
    name= "life_cell_phone";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_cellphone";

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText {
            idc = -1;
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.158766 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class MainBackground: Life_RscText {
            idc = -1;
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.356944 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.288311 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
    };

    class controls {
        class Title: Life_RscTitle {
            idc = 3001;
            text = "$STR_CELL_Title";
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.157735 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0.1,0.1,0.1,0};
        };
        class TextToSend: Life_RscTitle {
            idc = 3002;
            text = "$STR_CELL_TextToSend";
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.363546 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
        };
        class textEdit: Life_RscEdit {
            idc = 3003;
            text = "";
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.389957 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.110043 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class TextMsgButton: Life_RscButtonMenu {
            idc = 3015;
            onButtonClick = "[] call TON_fnc_cell_textmsg";
            text = "$STR_CELL_TextMSGBtn";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.502201 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class PlayerList: Life_RscCombo {
            idc = 3004;
            x = 0.407215 * safezoneW + safezoneX;
            y = 0.5022 * safezoneH + safezoneY;
            w = 0.0865992 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class TextCopButton: Life_RscButtonMenu {
            idc = 3016;
            onButtonClick = "[] call TON_fnc_cell_textcop";
            text = "$STR_CELL_TextPolice";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.52641 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class TextAdminButton: Life_RscButtonMenu {
            idc = 3017;
            onButtonClick = "[] call TON_fnc_cell_textadmin";
            text = "$STR_CELL_TextAdmins";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.623249 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class AdminMsgButton: Life_RscButtonMenu {
            idc = 3020;
            onButtonClick = "[] call TON_fnc_cell_adminmsg";
            text = "$STR_CELL_AdminMsg";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.599039 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class AdminMsgAllButton: Life_RscButtonMenu {
            idc = 3021;
            onButtonClick = "[] call TON_fnc_cell_adminmsgall";
            text = "$STR_CELL_AdminMSGAll";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.574829 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class EMSRequest: Life_RscButtonMenu {
            idc = 3022;
            onButtonClick = "[] call TON_fnc_cell_emsrequest";
            text = "$STR_CELL_EMSRequest";
            x = 0.494845 * safezoneW + safezoneX;
            y = 0.55062 * safezoneH + safezoneY;
            w = 0.0824756 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class CloseButtonKey: xeRscIconButton {
            onButtonClick = "closeDialog 0;";
            idc = -1;
            text = "icons\xeicons\x.paa";
            x = 0.567011 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
    };
};