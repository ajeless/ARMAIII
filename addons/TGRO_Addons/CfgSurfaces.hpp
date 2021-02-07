class CfgSurfaces
{
	class Default
	{
	};
	class Water
	{
	};
	class GdtVRsurface01: Default
	{
		access=2;
		files="gdt_desert_*";
		character="Empty";
		soundEnviron="sand";
		soundHit="soft_ground";
		rough=0.11;
		dust=1;
		lucidity=2.5;
		grassCover=0;
		impact="hitGroundSoft";
		surfaceFriction=1;
		restitution=0.050000001;
		maxSpeedCoef=0.80000001;
		maxClutterColoringCoef=1.35;
	};
};