#include "..\..\dialog\guiIds_macros.hpp"
/*
    File: fn_deathScreen.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Handles stuff being displayed on the death screen while
    it is currently active.
*/
private ["_medicsOnline","_medicsNear"];
disableSerialization;

_medicsOnline = ((findDisplay ID_xe_deathScreen) displayCtrl ID_xe_deathScreen_textMedicsOnline);
_medicsNear = ((findDisplay ID_xe_deathScreen) displayCtrl ID_xe_deathScreen_textMedicsNearby);

waitUntil {
    _nearby = if (([independent,getPosATL player,120] call life_fnc_nearUnits)) then {"Si"} else {"No"};
    _medicsOnline ctrlSetText format [localize "STR_Medic_Online",independent countSide playableUnits];
    _medicsNear ctrlSetText format [localize "STR_Medic_Near",_nearby];
    sleep 1;
    (isNull (findDisplay ID_xe_deathScreen))
};