#include "Point.hpp"

int main( void ) 
{
	const Point	a(1.0f, 1.0f);
	const Point	b(2.0f, 5.0f);
	const Point	c(5.0f, 4.0f);
	const Point	p(1.0f, 1.0f);

	if (bsp(a, b, c, p))
		cout << "the point is in the triangle" << endl;
	else
		cout << "the point is not in the triangle" << endl;
	return 0; 
}
