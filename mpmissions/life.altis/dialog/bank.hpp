class Life_atm_management {
    idd = 2700;
    name= "life_atm_menu";
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class Life_RscTitleBackground: Life_RscText
        {
            idc = -1;

            x = 0.412344 * safezoneW + safezoneX;
            y = 0.334963 * safezoneH + safezoneY;
            w = 0.175313 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])","(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
        };
        class MainBackground: Life_RscText
        {
            idc = -1;

            x = 0.412344 * safezoneW + safezoneX;
            y = 0.356968 * safezoneH + safezoneY;
            w = 0.175313 * safezoneW;
            h = 0.231052 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
    };

    class controls {
        class CashTitle: Life_RscStructuredText
        {
            idc = 2701;
            text = "";
            x = 0.4175 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.165 * safezoneW;
            h = 0.0770174 * safezoneH;
        };

        class Title: Life_RscTitle
        {
            idc = -1;
            text = "$STR_ATM_Title";
            x = 0.412344 * safezoneW + safezoneX;
            y = 0.334963 * safezoneH + safezoneY;
            w = 0.175313 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
        };

        class WithdrawButton: Life_RscButtonMenu
        {
            onButtonClick = "[] call life_fnc_bankWithdraw";

            idc = -1;
            x = 0.432969 * safezoneW + safezoneX;
            y = 0.488997 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            text = "$STR_ATM_Withdraw";
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
        };

        class DepositButton: Life_RscButtonMenu
        {
            onButtonClick = "[] call life_fnc_bankDeposit";
            text = "$STR_ATM_Deposit";
            idc = -1;
            x = 0.505156 * safezoneW + safezoneX;
            y = 0.488997 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
        };

        class moneyEdit: Life_RscEdit
        {
            idc = 2702;
            text = "1";
            x = 0.4175 * safezoneW + safezoneX;
            y = 0.45599 * safezoneH + safezoneY;
            w = 0.165 * safezoneW;
            h = 0.022005 * safezoneH;
        };

        class PlayerList: Life_RscCombo
        {
            idc = 2703;

            x = 0.4175 * safezoneW + safezoneX;
            y = 0.522005 * safezoneH + safezoneY;
            w = 0.165 * safezoneW;
            h = 0.022005 * safezoneH;
        };

        class TransferButton: Life_RscButtonMenu
        {
            onButtonClick = "[] call life_fnc_bankTransfer";
            text = "$STR_ATM_Transfer";
            idc = -1;
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.555012 * safezoneH + safezoneY;
            w = 0.061875 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])","(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])","(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])",0.5};
        };

        class CloseButtonKey: Life_RscButtonMenu
        {
            onButtonClick = "closeDialog 0;";
            text = "$STR_Global_Close";
            idc = -1;
            x = 0.412344 * safezoneW + safezoneX;
            y = 0.58802 * safezoneH + safezoneY;
            w = 0.0644531 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};