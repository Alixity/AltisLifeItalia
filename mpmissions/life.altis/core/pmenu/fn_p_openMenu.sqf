#include "..\..\script_macros.hpp"
#include "..\..\dialog\guiIds_macros.hpp"

/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "xe_playermenu";
disableSerialization;

switch (playerSide) do {
    case west: {
        ctrlShow[ID_xe_playerMenu_buttonGang,false];
    };

    case civilian: {
        ctrlShow[ID_xe_playerMenu_buttonWantedList,false];
    };

    case independent: { 
        ctrlShow[ID_xe_playerMenu_buttonWantedList,false];
        ctrlShow[ID_xe_playerMenu_buttonGang,false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[ID_xe_playerMenu_buttonAdminMenu,false];
    ctrlShow[ID_xe_playerMenu_buttonAdminMenuCompense,false];
    ctrlShow[ID_xe_playerMenu_buttonAdminMenuGodMode,false];
    ctrlShow[ID_xe_playerMenu_buttonAdminMenuTeleport,false];
};


[] call life_fnc_xe_playerMenuStaus;
[] call life_fnc_p_updateMenu;