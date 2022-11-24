// Script: https://forums.bohemia.net/forums/topic/222086-help-removing-snakes-and-rabbits/

enableEnvironment [true, false];

waitUntil {
	uisleep 1;
	{
		if(agent _x isKindOf "Snake_random_F") then {
			deleteVehicle agent _x;
		};
	} forEach agents;
	false;
}; 