params ["_initializationPeriod", "_intervalWait"];

sleep _initializationPeriod;

waitUntil { 
	private _done = false;
	private _numEntities = 0;
	private _lastCount = 0;
	while {!_done} do {
		sleep _intervalWait;
		_numEntities = count (entities "");
		if ( !(_numEntities > _lastCount) ) then {
			_done = true;
		}; 
		_lastCount = _numEntities;
	}; 
	true;
};
