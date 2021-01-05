class CfgSoundShaders
{
	class DMR02_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closure_01",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class DMR02_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_closeShot_03",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class DMR02_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class DMR02_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_distShot_03",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class DMR02_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class DMR02_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR02_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class DMR02_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{50,0.2},
			{350,0}
		};
		limitation=1;
	};
	class DMR02_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR02_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR02_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class DMR02_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR02_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class DMR02_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class DMR02_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR02_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_02_MAR10\DMR02_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR03_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closure_01",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class DMR03_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_closeShot_03",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class DMR03_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class DMR03_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_distShot_03",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class DMR03_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class DMR03_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR03_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class DMR03_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{50,0.2},
			{350,0}
		};
		limitation=1;
	};
	class DMR03_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR03_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR03_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class DMR03_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR03_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class DMR03_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class DMR03_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR03_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_03_MkI_EMR\DMR03_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR04_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closure_01",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class DMR04_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_04_ASP1_Kir\DMR04_closeShot_03",
				1
			}
		};
		volume=1;
		range=200;
		rangeCurve="closeShotCurve";
	};
	class DMR04_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR04_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class DMR04_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class DMR04_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR04_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR05_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closure_01",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class DMR05_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_closeShot_03",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class DMR05_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class DMR05_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_distShot_03",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class DMR05_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class DMR05_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR05_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class DMR05_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{50,0.2},
			{350,0}
		};
		limitation=1;
	};
	class DMR05_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR05_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR05_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class DMR05_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR05_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class DMR05_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class DMR05_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR05_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_05_Cyrus\DMR05_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR06_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closure_01",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class DMR06_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_closeShot_03",
				1
			}
		};
		volume=1;
		range=100;
		rangeCurve="closeShotCurve";
	};
	class DMR06_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2500;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2500,0}
		};
	};
	class DMR06_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_distShot_03",
				1
			}
		};
		volume=1;
		range=2500;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2500,1}
		};
	};
	class DMR06_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class DMR06_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR06_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class DMR06_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{50,0.2},
			{350,0}
		};
		limitation=1;
	};
	class DMR06_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR06_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class DMR06_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class DMR06_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR06_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class DMR06_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class DMR06_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class DMR06_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\LongRangeRifles\DMR_06_Mk14\DMR06_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG01_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closure_03",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class MMG01_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class MMG01_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class MMG01_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class MMG01_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class MMG01_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG01_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class MMG01_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class MMG01_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG01_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG01_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class MMG01_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG01_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class MMG01_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class MMG01_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG01_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_01_Navid\MMG01_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG02_Closure_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closure_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closure_02",
				1
			}
		};
		range=5;
		volume=0.44668359;
	};
	class MMG02_closeShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_closeShot_03",
				1
			}
		};
		volume=1;
		range=50;
		rangeCurve="closeShotCurve";
	};
	class MMG02_midShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_midShot_03",
				1
			}
		};
		volume=0.50118721;
		range=2000;
		rangeCurve[]=
		{
			{0,0.2},
			{50,1},
			{300,0},
			{2000,0}
		};
	};
	class MMG02_distShot_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_01",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_02",
				1
			},
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_distShot_03",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{50,0},
			{300,1},
			{2000,1}
		};
	};
	class MMG02_tailDistant_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_taildistant",
				1
			}
		};
		volume=1;
		range=2000;
		rangeCurve[]=
		{
			{0,0},
			{600,0.69999999},
			{2000,1}
		};
		limitation=1;
	};
	class MMG02_tailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailforest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG02_tailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailhouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=1500;
		rangeCurve[]=
		{
			{0,1},
			{250,0.30000001},
			{1500,0}
		};
		limitation=1;
	};
	class MMG02_tailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailinterior",
				1
			}
		};
		volume="interior";
		range=350;
		rangeCurve[]=
		{
			{0,1},
			{50,0.40000001},
			{100,0.2},
			{350,0}
		};
		limitation=1;
	};
	class MMG02_tailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailmeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG02_tailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"\A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_tailtrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=2000;
		rangeCurve[]=
		{
			{0,1},
			{2000,0}
		};
		limitation=1;
	};
	class MMG02_silencerShot_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_01",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_02",
				1
			},
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerShot_03",
				1
			}
		};
		volume=1;
		range=150;
		rangeCurve="closeShotCurve";
	};
	class MMG02_silencerTailForest_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailForest",
				1
			}
		};
		volume="(1-interior/1.4)*forest/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG02_silencerTailHouses_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailHouses",
				1
			}
		};
		volume="(1-interior/1.4)*houses/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0}
		};
		limitation=1;
	};
	class MMG02_silencerTailInterior_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailInterior",
				1
			}
		};
		volume="interior";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{50,0.30000001},
			{150,0}
		};
		limitation=1;
	};
	class MMG02_silencerTailMeadows_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailMeadows",
				1
			}
		};
		volume="(1-interior/1.4)*(meadows/2 max sea/2)/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
	class MMG02_silencerTailTrees_SoundShader
	{
		samples[]=
		{
			
			{
				"A3\Sounds_F_Mark\arsenal\weapons\Machineguns\MMG_02_SPGM\MMG02_silencerTailTrees",
				1
			}
		};
		volume="(1-interior/1.4)*trees/3";
		range=150;
		rangeCurve[]=
		{
			{0,1},
			{150,0.30000001}
		};
		limitation=1;
	};
};
class CfgSoundSets
{
	class Rifle_Shot_Base_SoundSet;
	class Rifle_Tail_Base_SoundSet;
	class Rifle_InteriorTail_Base_SoundSet;
	class Rifle_silencerShot_Base_SoundSet;
	class Rifle_silencerTail_Base_SoundSet;
	class Rifle_silencerInteriorTail_Base_SoundSet;
	class Pistol_Shot_Base_SoundSet;
	class Pistol_Tail_Base_SoundSet;
	class Pistol_InteriorTail_Base_SoundSet;
	class Pistol_silencerShot_Base_SoundSet;
	class Pistol_silencerTail_Base_SoundSet;
	class Pistol_silencerInteriorTail_Base_SoundSet;
	class DMR02_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_Closure_SoundShader",
			"DMR02_closeShot_SoundShader",
			"DMR02_midShot_SoundShader",
			"DMR02_distShot_SoundShader"
		};
	};
	class DMR02_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_tailDistant_SoundShader",
			"DMR02_tailForest_SoundShader",
			"DMR02_tailHouses_SoundShader",
			"DMR02_tailMeadows_SoundShader",
			"DMR02_tailTrees_SoundShader"
		};
	};
	class DMR02_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_tailInterior_SoundShader"
		};
	};
	class DMR02_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_Closure_SoundShader",
			"DMR02_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class DMR02_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_silencerTailTrees_SoundShader",
			"DMR02_silencerTailForest_SoundShader",
			"DMR02_silencerTailMeadows_SoundShader",
			"DMR02_silencerTailHouses_SoundShader"
		};
	};
	class DMR02_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR02_silencerTailInterior_SoundShader"
		};
	};
	class DMR03_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_Closure_SoundShader",
			"DMR03_closeShot_SoundShader",
			"DMR03_midShot_SoundShader",
			"DMR03_distShot_SoundShader"
		};
	};
	class DMR03_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_tailDistant_SoundShader",
			"DMR03_tailForest_SoundShader",
			"DMR03_tailHouses_SoundShader",
			"DMR03_tailMeadows_SoundShader",
			"DMR03_tailTrees_SoundShader"
		};
	};
	class DMR03_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_tailInterior_SoundShader"
		};
	};
	class DMR03_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_Closure_SoundShader",
			"DMR03_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class DMR03_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_silencerTailTrees_SoundShader",
			"DMR03_silencerTailForest_SoundShader",
			"DMR03_silencerTailMeadows_SoundShader",
			"DMR03_silencerTailHouses_SoundShader"
		};
	};
	class DMR03_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR03_silencerTailInterior_SoundShader"
		};
	};
	class DMR04_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR04_closeShot_SoundShader",
			"DMR04_Closure_SoundShader"
		};
	};
	class DMR04_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR04_tailForest_SoundShader",
			"DMR04_tailHouses_SoundShader",
			"DMR04_tailMeadows_SoundShader",
			"DMR04_tailTrees_SoundShader"
		};
	};
	class DMR04_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR04_tailInterior_SoundShader"
		};
	};
	class DMR05_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_Closure_SoundShader",
			"DMR05_closeShot_SoundShader",
			"DMR05_midShot_SoundShader",
			"DMR05_distShot_SoundShader"
		};
	};
	class DMR05_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_tailDistant_SoundShader",
			"DMR05_tailForest_SoundShader",
			"DMR05_tailHouses_SoundShader",
			"DMR05_tailMeadows_SoundShader",
			"DMR05_tailTrees_SoundShader"
		};
	};
	class DMR05_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_tailInterior_SoundShader"
		};
	};
	class DMR05_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_Closure_SoundShader",
			"DMR05_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class DMR05_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_silencerTailTrees_SoundShader",
			"DMR05_silencerTailForest_SoundShader",
			"DMR05_silencerTailMeadows_SoundShader",
			"DMR05_silencerTailHouses_SoundShader"
		};
	};
	class DMR05_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR05_silencerTailInterior_SoundShader"
		};
	};
	class DMR06_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_Closure_SoundShader",
			"DMR06_closeShot_SoundShader",
			"DMR06_midShot_SoundShader",
			"DMR06_distShot_SoundShader"
		};
	};
	class DMR06_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_tailDistant_SoundShader",
			"DMR06_tailForest_SoundShader",
			"DMR06_tailHouses_SoundShader",
			"DMR06_tailMeadows_SoundShader",
			"DMR06_tailTrees_SoundShader"
		};
	};
	class DMR06_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_tailInterior_SoundShader"
		};
	};
	class DMR06_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_Closure_SoundShader",
			"DMR06_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class DMR06_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_silencerTailTrees_SoundShader",
			"DMR06_silencerTailForest_SoundShader",
			"DMR06_silencerTailMeadows_SoundShader",
			"DMR06_silencerTailHouses_SoundShader"
		};
	};
	class DMR06_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"DMR06_silencerTailInterior_SoundShader"
		};
	};
	class MMG01_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_Closure_SoundShader",
			"MMG01_closeShot_SoundShader",
			"MMG01_midShot_SoundShader",
			"MMG01_distShot_SoundShader"
		};
	};
	class MMG01_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_tailDistant_SoundShader",
			"MMG01_tailForest_SoundShader",
			"MMG01_tailHouses_SoundShader",
			"MMG01_tailMeadows_SoundShader",
			"MMG01_tailTrees_SoundShader"
		};
	};
	class MMG01_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_tailInterior_SoundShader"
		};
	};
	class MMG01_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_Closure_SoundShader",
			"MMG01_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class MMG01_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_silencerTailTrees_SoundShader",
			"MMG01_silencerTailForest_SoundShader",
			"MMG01_silencerTailMeadows_SoundShader",
			"MMG01_silencerTailHouses_SoundShader"
		};
	};
	class MMG01_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG01_silencerTailInterior_SoundShader"
		};
	};
	class MMG02_Shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_Closure_SoundShader",
			"MMG02_closeShot_SoundShader",
			"MMG02_midShot_SoundShader",
			"MMG02_distShot_SoundShader"
		};
	};
	class MMG02_Tail_SoundSet: Rifle_Tail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_tailDistant_SoundShader",
			"MMG02_tailForest_SoundShader",
			"MMG02_tailHouses_SoundShader",
			"MMG02_tailMeadows_SoundShader",
			"MMG02_tailTrees_SoundShader"
		};
	};
	class MMG02_InteriorTail_SoundSet: Rifle_InteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_tailInterior_SoundShader"
		};
	};
	class MMG02_silencerShot_SoundSet: Rifle_silencerShot_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_Closure_SoundShader",
			"MMG02_silencerShot_SoundShader"
		};
		volumeFactor=1.4;
	};
	class MMG02_silencerTail_SoundSet: Rifle_silencerTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_silencerTailTrees_SoundShader",
			"MMG02_silencerTailForest_SoundShader",
			"MMG02_silencerTailMeadows_SoundShader",
			"MMG02_silencerTailHouses_SoundShader"
		};
	};
	class MMG02_silencerInteriorTail_SoundSet: Rifle_silencerInteriorTail_Base_SoundSet
	{
		soundShaders[]=
		{
			"MMG02_silencerTailInterior_SoundShader"
		};
	};
};