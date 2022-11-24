#include "..\..\script_macros.hpp"
#include "..\..\dialog\guiIds_macros.hpp"
/*
	Author: xedom
*/

diag_log "[xeScripts] fn_xe_playerMenuStaus runned";

_cop = west countSide playableUnits;
_med = independent countSide playableUnits;
_civ = civilian countSide playableUnits;

_copLabel = CONTROL(ID_xe_playerMenu,ID_xe_playerMenu_copCountertxt);
_medLabel = CONTROL(ID_xe_playerMenu,ID_xe_playerMenu_medCountertxt);
_civLabel = CONTROL(ID_xe_playerMenu,ID_xe_playerMenu_civCountertxt);

_copLabel ctrlSetText str(_cop);
_medLabel ctrlSetText str(_med);
_civLabel ctrlSetText str(_civ);