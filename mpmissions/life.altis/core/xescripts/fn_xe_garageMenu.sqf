(_this select 3) params [
    ["_type","",[""]],
    ["_spawnPoint","",[""]]
];

[getPlayerUID player,playerSide,_type,player] remoteExecCall ["TON_fnc_getVehicles",2];

life_garage_type = _type;
life_garage_sp = _spawnPoint;

createDialog "Life_impound_menu";
disableSerialization;
ctrlSetText[2802,"Fetching Vehicles..."];