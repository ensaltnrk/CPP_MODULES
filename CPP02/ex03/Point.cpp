#include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed())
{
}

Point::Point(const float n1, const float n2) : x(Fixed(n1)), y(Fixed(n2))
{
}

Point::~Point()
{
}

Point::Point(const Point& cpy) : x(cpy.x), y(cpy.y)
{
}

Point &Point::operator=(const Point& newOne)
{
	(void)newOne;
	return *this;
}

const Fixed	Point::getFixedX() const
{
	return (this->x);
}

const Fixed	Point::getFixedY() const
{
	return (this->y);
}
