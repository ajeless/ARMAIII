_ammo = getArtilleryAmmo [gun3] select 0; 
_rounds = 25; 
while {_rounds>0} do { 
 _dir = round random 360; 
 _dis = round random 450;
 _tgt = target2 getRelPos [_dis, _dir]; 
 gun3 doArtilleryFire[_tgt,_ammo,1]; 
 _rounds = _rounds - 1; 
 sleep 75;
};