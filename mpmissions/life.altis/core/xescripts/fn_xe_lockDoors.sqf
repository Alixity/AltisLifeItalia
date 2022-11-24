/*
	Author: xedom
*/

diag_log "[xeScripts] fn_xe_lockDoors runned";

blockerdBuildings = [civ_block_1,civ_block_2,civ_block_3];

inGameUISetEventHandler ["Action", '
	_side = side player;
	_locked = ((_this select 0) in blockerdBuildings);

	((_side isEqualTo civilian) && (_locked))
'];