#include "..\..\script_macros.hpp"
#include "..\..\dialog\guiIds_macros.hpp"
/*
	Author: xedom
*/

_side = switch (playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

_lic = CONTROL(ID_xe_licenseGui,ID_xe_licenseGui_licenses);
_struct = "";
{
    _displayName = getText(_x >> "displayName");

    if (LICENSE_VALUE(configName _x,_side)) then {
        _struct = _struct + format ["%1<br/>",localize _displayName];
    };
} forEach (format ["getText(_x >> 'side') isEqualTo '%1'",_side] configClasses (missionConfigFile >> "Licenses"));

if (_struct isEqualTo "") then {
    _struct = "No Licenses";
};

_lic ctrlSetStructuredText parseText format ["<t size='0.8px'>%1</t>",_struct];
