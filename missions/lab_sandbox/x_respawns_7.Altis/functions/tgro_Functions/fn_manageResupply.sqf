_ressuplyFAK = RessuplyFAK select 1;
_resupplyPrimaryMag = ResupplyPrimaryMag select 1;
_ressuplyGrenade = RessuplyGrenade select 1;

if (_ressuplyFAK > 0 OR _resupplyPrimaryMag > 0 OR  _ressuplyGrenade > 0) then {
	_resupplyVehicle = ResupplyVehicle createVehicle (getPos player);
	_resupplyVehicle addItemCargoGlobal [RessuplyFAK select 0, RessuplyFAK select 1];
	_resupplyVehicle addItemCargoGlobal [ResupplyPrimaryMag select 0, ResupplyPrimaryMag select 1];
	_resupplyVehicle addItemCargoGlobal [RessuplyGrenade select 0, RessuplyGrenade select 1];
};