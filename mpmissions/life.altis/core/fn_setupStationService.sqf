/*
    File: fn_setupStationService.sqf
    Author: NiiRoZz
    Edit: BoGuu - Added Tanoa Stations

    Description:
    Add action fuel action in Station Service.

    put function in init file then execute it with:
    call getFuelpumps;
    getFuelpumps =
    {
        _pos = getArray(configFile >> "CfgWorlds" >> worldName >> "centerPosition");
        _Station = nearestobjects [_pos,["Land_fs_feed_F","Land_FuelStation_Feed_F"], 25000];
        _br = toString [13, 10];
        _tab = toString [9];

        _TexteSortie = "_NiiRoZz_Station_Essence = [" + _br;

        {
            _Array = [getpos _x];
            _TexteSortie = _TexteSortie + _tab + (str _Array);
            _TexteSortie = if (_forEachIndex < ((count _Station) - 1)) then {_TexteSortie + ", " + _br} else {_TexteSortie + _br};
        } forEach _Station;
        _TexteSortie = _TexteSortie + "];";
        hint "Completed";
        copyToClipboard _TexteSortie;
    };
*/
private _altisPositions = [
    [9205.75,12112.2,-0.0487232],
    [11831.6,14155.9,-0.0342016],
    [12024.7,15830,-0.0298138],
    [12026.6,15830.1,-0.0342979],
    [12028.4,15830,-0.0388737],
    [9025.78,15729.4,-0.0206528],
    [9023.75,15729,-0.0271606],
    [9021.82,15728.7,-0.0293427],
    [16750.9,12513.1,-0.0525198],
    [6798.15,15561.6,-0.0441437],
    [6198.83,15081.4,-0.0912418],
    [14173.2,16541.8,-0.0946102],
    [5023.26,14429.6,-0.0978947],
    [5019.68,14436.7,-0.0114822],
    [4001.12,12592.1,-0.0966625],
    [17417.2,13936.7,-0.10652],
    [3757.14,13477.9,-0.0540276],
    [3757.54,13485.9,-0.010498],
    [16875.2,15469.4,0.037343],
    [16871.7,15476.6,0.010293],
    [8481.69,18260.7,-0.0266876],
    [15297.1,17565.9,-0.283808],
    [14221.4,18302.5,-0.0697155],
    [15781,17453.2,-0.285281],
    [19961.3,11454.6,-0.0349236],
    [19965.1,11447.6,-0.0483704],
    [5769,20085.7,-0.0156555],
    [21230.4,7116.56,-0.0604229],
    [20784.8,16665.9,-0.0521202],
    [20789.6,16672.3,-0.0213318],
    [23379.4,19799,-0.0544052],
    [25701.2,21372.6,-0.0774155]
];

private _stationPositions = [[["Altis", _altisPositions], ["Tanoa", _tanoaPositions]]] call TON_fnc_terrainSort;

{
    private _pump = nearestObjects [_x,["Land_fs_feed_F","Land_FuelStation_01_pump_F","Land_FuelStation_02_pump_F"],5] select 0;
    _pump setFuelCargo 0;
    _pump addAction [localize "STR_Action_Pump", life_fnc_fuelStatOpen, 1, 3, true, true, "", '_this distance _target < 5 && cursorObject isEqualTo _target'];
    false
} count _stationPositions;
