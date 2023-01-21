#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed y;
public:
	Point();
	Point(const float n1, const float n2);

	~Point();
	Point(const Point& cpy);

	Point	&operator=(const Point& cpy);

	const Fixed	getFixedX() const;
	const Fixed	getFixedY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
