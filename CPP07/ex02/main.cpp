#include "Array.hpp"

int	main( void )
{
	try
	{
		Array<int>	a(5);

		a[0] = 2;
		a[1] = 5;
		Array<int> b(a);
		cout << b[0] << endl;
		cout << b[1] << endl;
		cout << b.size() << endl;
	}
	catch(std::exception& err)
	{
		cout << err.what() << endl;
	}
	return 0;
}
