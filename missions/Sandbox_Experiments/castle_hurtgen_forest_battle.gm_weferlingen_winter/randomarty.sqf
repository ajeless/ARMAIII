_ammo = getArtilleryAmmo [gun1] select 0; 
_rounds = 35; 
while {_rounds>0} do { 
 _dir = round random 360; 
 _dis = round random 100;
 _tgt = target1 getRelPos [_dis, _dir]; 
 gun1 doArtilleryFire[_tgt,_ammo,1]; 
 _rounds = _rounds - 1; 
 sleep 45;
};