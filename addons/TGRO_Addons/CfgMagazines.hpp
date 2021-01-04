class CfgMagazines
{
	class CA_Magazine;

	class 30Rnd_85x64_Mag_F: CA_Magazine
	{
		author="ajeless"; 
		scope=2;
		displayName="8.5 mm 30rnd ACME mag";
		descriptionShort="8.5 mm 30rnd ACME mag<br/>Caliber: 8.5x64mm<br/>Rounds: 30<br/>Used in ACME MCR-21";
		ammo="B_85x64_ACME_Ball";
		count=30;
		initSpeed=850;
		picture="\A3\Weapons_F_Exp\Data\UI\icon_30Rnd_762x39_Mag_F_ca.paa";
		modelSpecial="\A3\Weapons_F_Exp\MagazineProxies\mag_762x39_akm_30rnd.p3d";
		modelSpecialIsProxy=1;
		tracersEvery=0;
		lastRoundsTracer=4;
		mass=31;
	};

	class 30Rnd_85x64_ACME_MCR21_Mag: 30Rnd_85x64_Mag_F
	{
		scope=2;
		picture="\a3\Weapons_F_Exp\MagazineProxies\data\UI\icon_30Rnd_762x39_AK12_Mag_F_CA.paa";
		author="ajeless";
		displayName="8.5 mm 30rnd ACME MCR-21 mag";
		descriptionShort="8.5 mm 30rnd ACME mag<br/>Caliber: 8.5x64mm<br/>Rounds: 30<br/>Used in: ACME MCR-21";
		modelSpecial="a3\Weapons_F_exp\MagazineProxies\mag_762x39_ak12_30rnd";
		ammo="B_85x64_ACME_Ball";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\rifles\ak12\data\ak12_ak12_2_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Exp\Rifles\AK12\Data\AK12_F_2.rvmat"
		};
	};

	class 50Rnd_85x64_ACME_MCR21_Mag: 30Rnd_85x64_Mag_F
	{
		scope=2;
		author="ajeless";
		displayName="8.5 mm 50rnd ACME MCR-21 mag";
		descriptionShort="8.5 mm 50rnd ACME mag<br/>Caliber: 8.5x64mm<br/>Rounds: 50<br/>Used in: ACME MCR-21";
		modelSpecial="\A3\Weapons_F_Enoch\MagazineProxies\mag_762x39_ak12_75rnd";
		picture="\A3\Weapons_F_Enoch\MagazineProxies\data\UI\icon_75Rnd_762x39_AK12_Mag_F_CA.paa";
		ammo="B_85x64_ACME_Ball";
		count=50;
		mass=43;
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Enoch\rifles\ak12\data\AKU12_RPK12_parts_CO.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Weapons_F_Enoch\Rifles\AK12\Data\AK12_RPK12.rvmat"
		};
	};


	class 135Rnd_85x64_Belt: CA_Magazine
	{
		author="ajeless";
		scope=2;
		displayName="8.5 mm 135rnd ACME ZK-1 Belt";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count=135;
		ammo="B_85x64_ACME_Ball";
		initSpeed=815;
		tracersEvery=3;
		lastRoundsTracer=5;
		descriptionShort="8.5mm 135Rnd ACME Belt<br/>Caliber: 8.5x64mm<br/>Rounds: 135<br/>Used in: ACME ZK-21";
		mass=50;
	};

	class 84Rnd_8x60_Mag: CA_Magazine
	{
		author="ajeless";
		scope=2;
		displayName="8mm 84rnd ACME MCR-22 Quad Stacked Mag";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		count=84;
		ammo="B_80x60_ACME_Ball";
		initSpeed=820;
		tracersEvery=2;
		lastRoundsTracer=4;
		descriptionShort="8mm 84Rnd ACME Quad Magazine Stack<br/>Caliber: 8x60mm<br/>Rounds: 84<br/>Used in: ACME MCR-22";
		mass=16;
	};
};