#include "..\..\script_macros.hpp"
/*
    File: fn_safeTake.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Gateway to fn_vehTakeItem.sqf but for safe(s).
*/
private ["_ctrl","_num","_safeInfo"];
disableSerialization;

if ((lbCurSel 3502) isEqualTo -1) exitWith {[localize "STR_Civ_SelectItem","info",30] call life_fnc_notification_system;};
_ctrl = CONTROL_DATA(3502);
_num = ctrlText 3505;
_safeInfo = life_safeObj getVariable ["safe",0];

//Error checks
if (!([_num] call TON_fnc_isnumber)) exitWith {[localize "STR_MISC_WrongNumFormat","info",30] call life_fnc_notification_system;};
_num = parseNumber(_num);
if (_num < 1) exitWith {[localize "STR_Cop_VaultUnder1","info",30] call life_fnc_notification_system;};
if (!(_ctrl isEqualTo "goldBar")) exitWith {hint localize "STR_Cop_OnlyGold"};
if (_num > _safeInfo) exitWith {[format [localize "STR_Civ_IsntEnoughGold",_num],"info",30] call life_fnc_notification_system;};

//Secondary checks
_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_num isEqualTo 0) exitWith {hint localize "STR_NOTF_InvFull"};


//Take it
if (!([true,_ctrl,_num] call life_fnc_handleInv)) exitWith {[localize "STR_NOTF_CouldntAdd","info",30] call life_fnc_notification_system;};
life_safeObj setVariable ["safe",_safeInfo - _num,true];
[life_safeObj] call life_fnc_safeInventory;
