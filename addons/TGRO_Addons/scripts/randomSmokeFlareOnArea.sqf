params ["_persistent", "_shells", "_altitude", "_delay", "_ordnance", "_artilleryZone"];

if (_persistent) then // ignore shell count ... shell count infinite
{
	while {true} do 
	{
		private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
		[_randomPos, _altitude, selectRandom _ordnance] call TGRO_fnc_dropOrdnance;
		sleep random _delay;
	};
} 
else // shell count matters
{
	for "_i" from 1 to _shells  do 
	{
		private _randomPos = [[_artilleryZone]] call BIS_fnc_randomPos;
		[_randomPos, _altitude, selectRandom _ordnance] call TGRO_fnc_dropOrdnance;
		sleep random _delay;	
	};
};