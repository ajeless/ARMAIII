#define APUBLIC_CONSTANT 12

// [] call "scripts\hello1.sqf";
// [] call "scripts\hello2.sqf";

private _hello1 = {
	while {true} do {
	sleep 1;
	systemChat "Hello from hello1";
	};
};

private _hello2 = {
	while {true} do {
	sleep 1;
	systemChat "Hello from hello2";
	};
};

private _showIt = {
	while {true} do {
		sleep 1;
		systemChat format ["%1", APUBLIC_CONSTANT];
	};
};

null = [] spawn _hello1;
null = [] spawn _hello2;
null = [] spawn _showIt;
