class CfgAmmo
{
	class BulletBase;
	class B_85x64_ACME_Ball: BulletBase
	{
		hit=14;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_338_NM_Ball";
		audibleFire=73;
		visibleFireTime=3;
		dangerRadiusBulletClose=10;
		dangerRadiusHit=14;
		suppressionRadiusBulletClose=8;
		suppressionRadiusHit=10;
		cost=3;
		airLock=1;
		caliber=1.82;
		typicalSpeed=833;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1.2;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060999999;
		class CamShakeExplode
		{
			power=3.1622801;
			duration=0.60000002;
			frequency=20;
			distance=9.4868298;
		};
		class CamShakeHit
		{
			power=10;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};

	class B_80x60_ACME_Ball: BulletBase
	{
		hit=13;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="FxCartridge_762";
		audibleFire=70;
		visibleFireTime=3;
		dangerRadiusBulletClose=9;
		dangerRadiusHit=13;
		suppressionRadiusBulletClose=7;
		suppressionRadiusHit=9;
		cost=2;
		airLock=1;
		caliber=1.81;
		typicalSpeed=833;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060999999;
	};

	class B_65x39_ACME_Caseless_Base: BulletBase
	{
		hit=10.5;
		indirectHit=0;
		indirectHitRange=0;
		cartridge="";
		aiAmmoUsageFlags=64;
		dangerRadiusBulletClose=8;
		dangerRadiusHit=12;
		suppressionRadiusBulletClose=6;
		suppressionRadiusHit=8;
		cost=1.2;
		airLock=1;
		typicalSpeed=1020;
		caliber=1.4;
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
		tracerScale=1;
		tracerStartTime=0.050000001;
		tracerEndTime=1;
		airFriction=-0.00089999998;
		class CamShakeExplode
		{
			power=2.4494901;
			duration=0.40000001;
			frequency=20;
			distance=7.3484702;
		};
		class CamShakeHit
		{
			power=6;
			duration=0.40000001;
			frequency=20;
			distance=1;
		};
	};
	class B_65x39_ACME_Caseless_red: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_65x39_ACME_Caseless_green: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_ACME_Caseless_yellow: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
	class B_65x39_ACME_Case: B_65x39_ACME_Caseless_Base
	{
		cartridge="FxCartridge_65";
	};
	class B_65x39_ACME_Case_red: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_red";
	};
	class B_65x39_ACME_Case_green: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
	};
	class B_65x39_ACME_Case_yellow: B_65x39_ACME_Caseless_Base
	{
		model="\A3\Weapons_f\Data\bullettracer\tracer_yellow";
	};
};