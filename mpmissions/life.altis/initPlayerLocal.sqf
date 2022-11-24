#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

[] spawn life_fnc_xe_atmMarkers;
[] spawn life_fnc_xe_lockDoors;
[] spawn life_fnc_brighterNights;

[] spawn {
    while {true} do {
        sleep 5;
        [] spawn life_fnc_hudUpdate;
        [] spawn life_fnc_playerSkins;
    };
};

[] spawn {
    ["Benvenuto nel server!","info",30] call life_fnc_notification_system;
    while {true} do {
        ["Discord: https://discord.gg/Bve7wg4P9U","info",30] call life_fnc_notification_system;
        ["Se volete contribuire in qualsiasi modo, venite sul discord e contattate gli Admin.","info",30] call life_fnc_notification_system;
        ["Restarts: 01:00 - 06:00 - 13:00 - 19:00","info",30] call life_fnc_notification_system;
        sleep 600;
    };
};


[] execVM "core\init.sqf";
[] execVM "briefing.sqf";
