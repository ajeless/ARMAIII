params ['_center', '_minRad', '_avgRad', '_maxRad'];

_center_x = _center select 0;
_center_y = _center select 1;

_dis = random [_minRad, _avgRad, _maxRad];
_dir = random 360;

_pos_x = _center_x + (_dis * (sin _dir));
_pos_y = _center_y + (_dis * (cos _dir));

[_pos_x, _pos_y];  