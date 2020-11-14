_configs = "true" configClasses (configFile);

{
	systemChat format ["%1", count _x];
	
} forEach _configs;