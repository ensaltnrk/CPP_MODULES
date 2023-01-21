#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float	ax, ay;
	float	bx, by;
	float	cx, cy;
	float	d;
	float	WA, WB, WC;

	ax = b.getFixedX().toFloat() - a.getFixedX().toFloat();
	ay = b.getFixedY().toFloat() - a.getFixedY().toFloat();
	bx = c.getFixedX().toFloat() - a.getFixedX().toFloat();
	by = c.getFixedY().toFloat() - a.getFixedY().toFloat();
	cx = point.getFixedX().toFloat() - a.getFixedX().toFloat();
	cy = point.getFixedY().toFloat() - a.getFixedY().toFloat();
	d = (ax * by) - (bx * ay);
	WA = (cx * (ay - by) + cy * (bx - ax) + ax * by - bx * ay) / d;
	WB = (cx * by - cy * bx) / d;
	WC = (cy * ax - cx * ay) / d;
	if ((WA < 1 && WA > 0) && (WB < 1 && WB > 0) && (WC < 1 && WC > 0))
		return (true);
	return (false);
}
