#include "guiIds_macros.hpp"

class xe_playermenu {
    idd = ID_xe_playerMenu;
    movingEnable = 1;
    enableSimulation = 1;
    class controlsBackground {};

    class controls {

// title
	class menuTitle: Life_RscTitle {
		idc = ID_xe_playerMenu_menuTitle;
		text = "Menu Giocatore"; //--- ToDo: Localize;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.2256 * safezoneH + safezoneY;
		w = 0.452812 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {0.95,0.95,0.95,1};
		colorBackground[] = {0,0,0,1};
	};
	class playersName: menuTitle {
		idc = ID_xe_playerMenu_playersName;
		style = 1;
		w = 0.431562 * safezoneW;
		colorText[] = {0.95,0.95,0.95,1};
		colorBackground[] = {0,0,0,0};
	};
	class buttonClose: xeRscIconButton {
		idc = ID_xe_playerMenu_buttonClose;
		text = "icons\xeicons\x.paa"; //--- ToDo: Localize;
		onButtonClick = "closeDialog 0;";
		x = 0.707373 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.013125 * safezoneW;
		h = 0.028 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};

// money
	class moneyTitle: Life_RscText {
		idc = ID_xe_playerMenu_moneyTitle;
		text = "Fondi"; //--- ToDo: Localize;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.276 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class moneyBackground: Life_RscText {
		idc = ID_xe_playerMenu_moneyBackground;
		x = 0.270312 * safezoneW + safezoneX;
		y = 0.318 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.3164 * safezoneH;
		colorBackground[] = {0,0,0,0.7};
	};
	class moneyInfo: Life_RscStructuredText {
		idc = ID_xe_playerMenu_moneyInfo;
		sizeEx = 0.020;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.3264 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.168 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};
	class moneyEdit: Life_RscEdit {
		idc = ID_xe_playerMenu_moneyEdit;
		text = "1"; //--- ToDo: Localize;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};
	class moneyGive: xeRscButton {
		idc = ID_xe_playerMenu_moneyGive;
		text = "Dai"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_giveMoney";
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.5924 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,0.8};
	};
	class moneyNearPlayers: Life_RscCombo {
		idc = ID_xe_playerMenu_moneyNearPlayers;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.5476 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};

// inventory
	class inventoryTitle: Life_RscText {
		idc = ID_xe_playerMenu_inventoryTitle;
		text = "Oggetti"; //--- ToDo: Localize;
		x = 0.565625 * safezoneW + safezoneX;
		y = 0.276 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0,0,0,1};
	};
	class inventoryBackground: Life_RscText {
		idc = ID_xe_playerMenu_inventoryBackground;
		x = 0.565564 * safezoneW + safezoneX;
		y = 0.318 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.4396 * safezoneH;
		colorBackground[] = {0,0,0,0.7};
	};
	class inventoryList: Life_RscListBox {
		idc = ID_xe_playerMenu_inventoryList;
		sizeEx = 0.030;
		x = 0.565625 * safezoneW + safezoneX;
		y = 0.3264 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.2464 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};
	class inventoryEdit: Life_RscEdit {
		idc = ID_xe_playerMenu_inventoryEdit;
		text = "1"; //--- ToDo: Localize;
		x = 0.565625 * safezoneW + safezoneX;
		y = 0.5784 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};
	class inventoryNearPlayers: Life_RscCombo {
		idc = ID_xe_playerMenu_inventoryNearPlayers;
		x = 0.565625 * safezoneW + safezoneX;
		y = 0.6232 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorBackground[] = {0.1,0.1,0.1,0.8};
	};
	class inventoryUse: xeRscButton {
		idc = ID_xe_playerMenu_inventoryUse;
		text = "Usa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_useItem;";
		x = 0.645688 * safezoneW + safezoneX;
		y = 0.6708 * safezoneH + safezoneY;
		w = 0.0774375 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,.8};
	};
	class inventoryGive: xeRscButton {
		idc = ID_xe_playerMenu_inventoryGive;
		text = "Dai"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_giveItem;";
		x = 0.565625 * safezoneW + safezoneX;
		y = 0.6708 * safezoneH + safezoneY;
		w = 0.076125 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,.8};
	};
	class inventoryRemove: xeRscButton {
		idc = ID_xe_playerMenu_inventoryRemove;
		text = "Rimuovi"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_removeItem;";
		x = 0.565619 * safezoneW + safezoneX;
		y = 0.7184 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.042 * safezoneH;
		colorText[] = {1,1,1,1};
		colorBackground[] = {0,0,0,.8};
	};

// buttons background
	class buttonBackground01: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground01;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.434375 * safezoneW + safezoneX;
		y = 0.276 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground02: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground02;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.276 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground03: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground03;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.434375 * safezoneW + safezoneX;
		y = 0.3992 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground04: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground04;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.3992 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground05: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground05;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.434375 * safezoneW + safezoneX;
		y = 0.5224 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground06: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground06;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.5224 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground07: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground07;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.434375 * safezoneW + safezoneX;
		y = 0.6456 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class buttonBackground08: life_RscPicture {
		idc = ID_xe_playerMenu_buttonBackground08;
		text = "#(argb,8,8,3)color(0,0,0,0.8)"; //--- ToDo: Localize;
		x = 0.5 * safezoneW + safezoneX;
		y = 0.6456 * safezoneH + safezoneY;
		w = 0.0590625 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};

// buttons
	class button01: xeRscIconButton { //phone
		idc = ID_xe_playerMenu_buttonPhone;
		text = "icons\xeicons\phone.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_physicalPhone;"; // "createDialog ""Life_cell_phone"";"
		tooltip = "phone"; //--- ToDo: Localize;
		x = 0.444876 * safezoneW + safezoneX;
		y = 0.2984 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button02: xeRscIconButton { //keys
		idc = ID_xe_playerMenu_buttonKeys;
		text = "icons\xeicons\keys.paa"; //--- ToDo: Localize;
		onButtonClick = "createDialog ""Life_key_management"";";
		tooltip = "keys"; //--- ToDo: Localize;
		x = 0.510499 * safezoneW + safezoneX;
		y = 0.2984 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button03: xeRscIconButton { //licenses
		idc = ID_xe_playerMenu_buttonLicenses;
		text = "icons\xeicons\licenses.paa"; //--- ToDo: Localize;
		onButtonClick = "createDialog ""xe_licenseGui"";";
		tooltip = "licenses"; //--- ToDo: Localize;
		x = 0.444876 * safezoneW + safezoneX;
		y = 0.4216 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button04: xeRscIconButton { //gang
		idc = ID_xe_playerMenu_buttonGang;
		text = "icons\xeicons\gang.paa"; //--- ToDo: Localize;
		onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
		tooltip = "gang"; //--- ToDo: Localize;
		x = 0.510499 * safezoneW + safezoneX;
		y = 0.4216 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button05: xeRscIconButton { //wantedlist
		idc = ID_xe_playerMenu_buttonWantedList;
		text = "icons\xeicons\gang.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_wantedMenu";
		tooltip = "wantedlist"; //--- ToDo: Localize;
		x = 0.510499 * safezoneW + safezoneX;
		y = 0.4216 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button06: xeRscIconButton { //regolamento
		idc = ID_xe_playerMenu_buttonRegolamento;
		text = "icons\xeicons\rules.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_rules;";
		tooltip = "regolamento"; //--- ToDo: Localize;
		x = 0.444876 * safezoneW + safezoneX;
		y = 0.5448 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button07: xeRscIconButton { //changelogs
		idc = ID_xe_playerMenu_buttonChangelog;
		text = "icons\xeicons\changelogs.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_changelogs;";
		tooltip = "changelogs"; //--- ToDo: Localize;
		x = 0.510499 * safezoneW + safezoneX;
		y = 0.5448 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button08: xeRscIconButton { //settings
		idc = ID_xe_playerMenu_buttonSettings;
		text = "icons\xeicons\settings.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_settingsMenu;";
		tooltip = "settings"; //--- ToDo: Localize;
		x = 0.444876 * safezoneW + safezoneX;
		y = 0.668 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button09: xeRscIconButton { //syncdate
		idc = ID_xe_playerMenu_buttonSyncData;
		text = "icons\xeicons\sync.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call SOCK_fnc_syncData;";
		tooltip = "sync"; //--- ToDo: Localize;
		x = 0.510499 * safezoneW + safezoneX;
		y = 0.668 * safezoneH + safezoneY;
		w = 0.039375 * safezoneW;
		h = 0.07 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button10: xeRscIconButton { //admin
		idc = ID_xe_playerMenu_buttonAdminMenu;
		text = "icons\xeicons\admin.paa"; //--- ToDo: Localize;
		onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
		tooltip = "admin"; //--- ToDo: Localize;
		x = 0.434375 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.0308 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button11: xeRscIconButton { //compense
		idc = ID_xe_playerMenu_buttonAdminMenuCompense;
		text = "icons\xeicons\income.paa"; //--- ToDo: Localize;
		onButtonClick = "createDialog ""Life_Admin_Compensate"";";
		tooltip = "compense"; //--- ToDo: Localize;
		x = 0.457999 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.0308 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button12: xeRscIconButton { //goodmode
		idc = ID_xe_playerMenu_buttonAdminMenuGodMode;
		text = "icons\xeicons\godmode.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_adminGodMode;";
		tooltip = "godmode"; //--- ToDo: Localize;
		x = 0.48162 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.0308 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class button13: xeRscIconButton { //teleport
		idc = ID_xe_playerMenu_buttonAdminMenuTeleport;
		text = "icons\xeicons\map.paa"; //--- ToDo: Localize;
		onButtonClick = "[] call life_fnc_adminTeleport; hint 'Select where you would like to teleport';";
		tooltip = "teleport"; //--- ToDo: Localize;
		x = 0.503937 * safezoneW + safezoneX;
		y = 0.2312 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.0308 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};

// status
	class stautsBackgroud: Life_RscText {
		idc = ID_xe_playerMenu_stautsBackgroud;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.6456 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.112 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class tsTxt: Life_RscText {
		idc = ID_xe_playerMenu_tsTxt;
		text = "discord.gg/Bve7wg4P9U"; //--- ToDo: Localize;
		x = 0.270313 * safezoneW + safezoneX;
		y = 0.6456 * safezoneH + safezoneY;
		w = 0.1575 * safezoneW;
		h = 0.056 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class copCounterIcon: life_RscPicture {
		idc = ID_xe_playerMenu_copCounterIcon;
		text = "icons\xeicons\police.paa"; //--- ToDo: Localize;
		x = 0.275562 * safezoneW + safezoneX;
		y = 0.7156 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.0308 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class copCountertxt: Life_RscText {
		idc = ID_xe_playerMenu_copCountertxt;
		text = "0"; //--- ToDo: Localize;
		x = 0.296562 * safezoneW + safezoneX;
		y = 0.7016 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.056 * safezoneH;
	};
	class medCounterIcon: life_RscPicture {
		idc = ID_xe_playerMenu_medCounterIcon;
		text = "icons\xeicons\medic.paa"; //--- ToDo: Localize;
		x = 0.329375 * safezoneW + safezoneX;
		y = 0.7156 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.028 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class medCountertxt: Life_RscText {
		idc = ID_xe_playerMenu_medCountertxt;
		text = "0"; //--- ToDo: Localize;
		x = 0.349063 * safezoneW + safezoneX;
		y = 0.7016 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.056 * safezoneH;
	};
	class civCounterIcon: life_RscPicture {
		idc = ID_xe_playerMenu_civCounterIcon;
		text = "icons\xeicons\civilian.paa"; //--- ToDo: Localize;
		x = 0.381875 * safezoneW + safezoneX;
		y = 0.7156 * safezoneH + safezoneY;
		w = 0.018375 * safezoneW;
		h = 0.028 * safezoneH;
		colorBackground[] = {0,0,0,0.8};
	};
	class civCountertxt: Life_RscText {
		idc = ID_xe_playerMenu_civCountertxt;
		text = "0"; //--- ToDo: Localize;
		x = 0.401563 * safezoneW + safezoneX;
		y = 0.7016 * safezoneH + safezoneY;
		w = 0.02625 * safezoneW;
		h = 0.056 * safezoneH;
	};

    };

};