params ["_unitsArray", "_skillsArray"];

_fleeing = _skillsArray select 0;
_courage = _skillsArray select 1;
_aimingAccuracy = _skillsArray select 2;
_aimingShake = _skillsArray select 3;
_aimingSpeed = _skillsArray select 4;
_reloadSpeed = _skillsArray select 5;

_aimingAccuracy = getMissionConfigValue "AIMING_ACCURACY";
_aimingShake = getMissionConfigValue "AIMING_SHAKE";
_aimingSpeed = getMissionConfigValue "AIMING_SPEED";
_courage = getMissionConfigValue "COURAGE";
_reloadSpeed = getMissionConfigValue "AIMING_SPEED";
_fleeing = getMissionConfigValue "FLEEING"; 

{
	_x setSkill ["aimingAccuracy", _aimingAccuracy];
	_x setSkill ["aimingShake", _aimingShake];
	_x setSkill ["aimingSpeed", _aimingSpeed];
	_x setSkill ["courage", _courage];
	_x setSkill ["reloadSpeed", _reloadSpeed];
	_x allowFleeing _fleeing;
	// systemChat format [
	// 	"%1: %2: %3: %4: %5: %6", 
	// 	_x skill "aimingAccuracy", 
	// 	_x skill "aimingShake", 
	// 	_x skill "aimingSpeed", 
	// 	_x skill "courage", 
	// 	_x skill "reloadSpeed"
	// ];
	
} forEach _unitsArray;
