class CfgAmmo
{
	class BulletBase;
	class B_85x64_ACME_Ball: BulletBase
	{
		hit=16.5;
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
		caliber=2;
		typicalSpeed=790;
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
		hit=15.5;
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
		caliber=2;
		typicalSpeed=790;
		timeToLive=10;
		model="\A3\Weapons_f\Data\bullettracer\tracer_green";
		tracerScale=1;
		tracerStartTime=0.075000003;
		tracerEndTime=1;
		airFriction=-0.00060999999;
		class CamShakeExplode
		{
			power=2.8284299;
			duration=0.60000002;
			frequency=20;
			distance=8.48528;
		};
		class CamShakeHit
		{
			power=5;
			duration=0.2;
			frequency=20;
			distance=1;
		};
	};
};