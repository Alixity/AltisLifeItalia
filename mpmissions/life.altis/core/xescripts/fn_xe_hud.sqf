#include "..\..\script_macros.hpp"
/*
	Author: xedom
*/
disableSerialization;
1 cutRsc ["xe_hud","PLAIN"];
waitUntil {!isNull (uiNameSpace getVariable "xe_hud")};

_display = uiNameSpace getVariable "xe_hud";

[] call life_fnc_playerSkins;

_thirstId = _display displayCtrl 1208;
_hungerId = _display displayCtrl 1209;
_healthId = _display displayCtrl 1210;
_cashId = _display displayCtrl 1211;

_thirst = round(life_thirst);
_hunger = round(life_hunger);
_health = round((1 - (damage player)) * 100);
_cash = [CASH] call life_fnc_numberText;

if (_thirst < 60) then {
	if (_thirst < 30) then {
		_thirstId ctrlSetTextColor [1,0.071,0.071,1];
	} else {
		_thirstId ctrlSetTextColor [1,0.969,0,1];
	};
};

if (_hunger < 60) then {
	if (_hunger < 30) then {
		_hungerId ctrlSetTextColor [1,0.071,0.071,1];
	} else {
		_hungerId ctrlSetTextColor [1,0.969,0,1];
	};
};

if (_health < 60) then {
	if (_health < 30) then {
		_healthId ctrlSetTextColor [1,0.071,0.071,1];
	} else {
		_healthId ctrlSetTextColor [1,0.969,0,1];
	};
};


_thirstId ctrlSetText format ["%2 %1","%",_thirst];
_hungerId ctrlSetText format ["%2 %1","%",_hunger];
_healthId ctrlSetText format ["%2 %1","%",_health];
_cashId ctrlSetText format ["%2 %1","$",_cash];
