params ['_center', '_minRad', '_avgRad', '_maxRad'];

_center_x = _center select 0;
_center_y = _center select 1;

_dis = random [_minRad, _avgRad, _maxRad];
_dir = random 360;

_sin = sin _dir;
_cos = cos _dir;

_offset_x = _dis * _sin;
_offset_y = _dis * _cos;

_pos_x = _center_x + _offset_x;
_pos_y = _center_y + _offset_y;

[_pos_x, _pos_y];