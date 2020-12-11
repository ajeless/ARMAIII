params ["_module", "_units", "_activated"];

private _synchronizedObjects = synchronizedObjects _module;
private _syncrhonizedObjectsCount = count _synchronizedObjects;


if (_syncrhonizedObjectsCount > 2) exitWith {
	hintC "Error: Toogro Module Template. Cannot sync more than 2 entities.";
};

systemChat format ["MODULE: %1, -- UNITS: %2, -- ACTIVATED: %3", _module, _units, _activated];
