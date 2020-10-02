						ALiVE Demo Mission
						by: SpyderBlack723:
			
						Insurgency | ALiVE
--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
This mission demonstrates the Asymmetric capabilities of ALiVE. You are spawned in on an airfield on the northwestern corner of Altis.
Other NATO forces are spread throughout the AO at various military bases. The area that the mission takes place over 
can be found here: http://gyazo.com/6afcaffbe28338d4487b8fab8574ef39

Details on ALiVE's Asymmetric warfare mode can be found here: http://alivemod.com/wiki/index.php/Insurgency
This page includes info such as how insurgency is setup, how the insurgents act, and even tips for security forces on how to overcome the insurgency.

						----------------------------------------------------
					               |HOW TO SWITCH INSURGENT FACTION|
						----------------------------------------------------

Switching the faction of the insurgents is really simple. All you need to do is change a few text fields. First, you need to change which faction the Military AI commander will control.
You can do this by going into the Military AI Commander module and setting the" Faction: Rebels Red" to "Faction: None". Next you need to enter the insurgent faction classname in the
"Override Factions" field. This will insure that the Military AI Commander will now control whatever faction of units you placed instead of the OPFIA faction that the mission comes with.
If you wish to have multiple insurgent factions then you can separate the faction classnames with a comma -->   for example:   caf_ag_me_t,caf_ag_eeur_r

Next all you need to do is change the "Force Faction" field to the same classname that you used in the above step in the synced CQB, Military Placement (Civ Obj), and Military Placement (Mil Obj)
modules. Once this step is done, preview your mission and make sure that the insurgents are of the faction that you specified in each module. As a further step, you can change 
the "Auto Task BLU Enemy" in the C2ISTAR module to the insurgent faction. This makes sure that mission created by ALiVE will be based off of the new insurgent faction you switched in.

A list of ALiVE compatible factions can be found here:
http://alivemod.com/wiki/index.php/Supported_Factions

						-------------------------------------------------------------
					               |HOW TO SWITCH SECURITY FORCES FACTION|
						-------------------------------------------------------------

This is very similiar to switching the insurgents faction. You need to change the Military AI Commander module to the faction classname of units that you wish it to control.
Then you must also change the "Force Faction" field in the synced Military Placement (Mil Obj) module to the same faction classname that you entered in the Military AI Commander module.

As a further step, you can change the "Auto Task BLU Faction" in the C2ISTAR module to the security forces you used in the above step faction. This makes sure that mission created by ALiVE will be based off of the 
new security forces faction you switched in.

						------------------------------------------------------------
					               |HOW TO ENABLE DEBUG MARKERS ON MAP|
						------------------------------------------------------------
    In order to disable debug markers that share information on what the insurgent faction is up to, all you need to do is turn "Enable Debug" to "Yes" in the Military AI Commander module that is set to 
asymmetric.

