class CfgMagazines
{
	class CA_Magazine;

	class 135Rnd_85x64_Belt: CA_Magazine
	{
		author="ajeless";
		scope=2;
		displayName="8.5 mm 135rnd ACME ZK-1 Belt";
		picture="\A3\Weapons_F_Mark\Data\UI\M_338_NM_CA.paa";
		count=135;
		ammo="B_85x64_ACME_Ball";
		initSpeed=833;
		tracersEvery=3;
		lastRoundsTracer=5;
		descriptionShort="8.5mm 135Rnd ACME Belt<br/>Caliber: 8.5x64mm<br/>Rounds: 135<br/>Used in: ACME ZK-21";
		mass=50;
	};

	class 66Rnd_8x60_Mag: CA_Magazine
	{
		author="ajeless";
		scope=2;
		displayName="8mm 66rnd ACME HAR-22 Quad Stacked Mag";
		picture="\A3\Weapons_F_EPA\Data\ui\M_5rnd_127x108_ball_CA.paa";
		count=66;
		ammo="B_80x60_ACME_Ball";
		initSpeed=833;
		tracersEvery=2;
		lastRoundsTracer=4;
		descriptionShort="8mm 66Rnd ACME Quad Magazine Stack<br/>Caliber: 8x60mm<br/>Rounds: 66<br/>Used in: ACME HAR-22";
		mass=42;
	};

	class 30Rnd_65x39_ACME_Caseless_Base_Mag: CA_Magazine
	{
		author="ajeless";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_30rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		count=30;
		mass=10;
		initSpeed=800;
		tracersEvery=0;
		lastRoundsTracer=5;
		descriptionShort="Caliber: 6.5x39 mm ‒ STANAG Caseless&lt;br /&gt;Rounds: 30&lt;br /&gt;Used in: ACME MX/C/M/SW/3GL";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag: 30Rnd_65x39_ACME_Caseless_Base_Mag
	{
		lastRoundsTracer=30;
		descriptionShort="Caliber: 6.5x39 mm ‒ Tracer Caseless&lt;br /&gt;Rounds: 30&lt;br /&gt;Used in: ACME MX/C/M/SW/3GL";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\weapons_f\data\ui\m_30stanag_caseless_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Sand Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_base_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Khaki Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_Base_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_R: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_G: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 30Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_Y: 30Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_30Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 30Rnd Black Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_Base_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Base_Mag: CA_Magazine
	{
		author="ajeless";
		modelSpecial="a3\Weapons_F\MagazineProxies\mag_65x39c_mx_100rnd.p3d";
		modelSpecialIsProxy=1;
		hiddenSelections[]=
		{
			"camo"
		};
		count=100;
		type="2*		256";
		mass=25;
		initSpeed=800;
		tracersEvery=4;
		lastRoundsTracer=4;
		descriptionShort="Caliber: 6.5x39 mm ‒ STANAG Caseless&lt;br /&gt;Rounds: 30&lt;br /&gt;Used in: ACME MX/C/M/SW/3GL";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Mag(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Mag(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Mag(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag: 100Rnd_65x39_ACME_Caseless_Base_Mag
	{
		lastRoundsTracer=100;
		descriptionShort="Caliber: 6.5x39 mm ‒ Tracer Caseless&lt;br /&gt;Rounds: 100&lt;br /&gt;Used in: ACME MX/C/M/SW/3GL";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Sand_Tracer_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\A3\Weapons_F\Data\UI\M_100Rnd_65x39_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Sand Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\a3\weapons_f\rifles\mx\data\xmx_lmg_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Khaki_Tracer_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_khaki_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Khaki Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_Exp\Rifles\MX\Data\XMX_LMG_khk_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_R: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Trc(R)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_red";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_G: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Trc(G)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_green";
	};

	class 100Rnd_65x39_ACME_Caseless_Black_Tracer_Mag_Y: 100Rnd_65x39_ACME_Caseless_Base_Tracer_Mag
	{	
		scope=2;
		picture="\a3\Weapons_F\MagazineProxies\data\UI\icon_100Rnd_65x39_caseless_black_mag_CA.paa";
		displayName="ACME 6.5 mm 100Rnd Black Trc(Y)";
		hiddenSelectionsTextures[]=
		{
			"\A3\Weapons_F_EPB\Rifles\MX_Black\Data\XMX_lmg_Black_co.paa"
		};
		ammo="B_65x39_ACME_Caseless_yellow";
	};
};