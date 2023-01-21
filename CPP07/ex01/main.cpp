#include "Iter.hpp"

template <typename T>
void	f(T const& data)
{
	std::cout << data << std::endl;
}

int	main( void )
{
	std::string	arr[] = {"hello", "world"};
	iter(arr, 2, &f);
	return 0; 
}
