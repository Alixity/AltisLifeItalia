/*
	File: fn_physicalPhone.sqf
	Author: Timo
	Description:
	With no radio cant use Cellphone
*/
if("ItemRadio" in assignedItems player || side player == independent) then {
	createDialog "Life_cell_phone";
} else {
	[localize"STR_physicalPhone_phoneNeed","error",30] call life_fnc_notification_system;
};