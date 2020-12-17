params ["_persistent", "_follow", "_shells", "_altitude", "_delay", "_ordnance", "_radius", "_target"];

private _targetPos = getPos _target;

if (_persistent) then // ignore shell count ... shell count infinite
{
	while {true} do 
	{
		if (_follow) then {
			_targetPos = getPos _target;
		};
		
		private _distance = random _radius;
		_randomPos = [[[_targetPos, _distance]],[]] call BIS_fnc_randomPos;
		[_randomPos, _altitude, _ordnance] call TGRO_fnc_dropOrdnance;
		sleep random _delay;
	};
} 
else // shell count matters
{
	for "_i" from 1 to _shells  do 
	{
		if (_follow) then {
			_targetPos = getPos _target;
		};
		
		private _distance = random _radius;
		_randomPos = [[[_targetPos, _distance]],[]] call BIS_fnc_randomPos;
		[_randomPos, _altitude, _ordnance] call TGRO_fnc_dropOrdnance;
		sleep random _delay;
	};
};