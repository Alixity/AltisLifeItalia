#include "..\..\script_macros.hpp"
/*
    File: fn_freezePlayer.sqf
    Author: ColinM9991

    Description:
    Freezes selected player.
*/
private ["_admin"];
_admin = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (life_frozen) then {
    [localize "STR_NOTF_Unfrozen","info",30] call life_fnc_notification_system;
    [1,format [localize "STR_ANOTF_Unfrozen",profileName]] remoteExecCall ["life_fnc_broadcast",_admin];
    disableUserInput false;
    life_frozen = false;
} else {
    [localize "STR_NOTF_Frozen","info",30] call life_fnc_notification_system;
    [1,format [localize "STR_ANOTF_Frozen",profileName]] remoteExecCall ["life_fnc_broadcast",_admin];
    disableUserInput true;
    life_frozen = true;
};
