#include "Harl.hpp"

int main(int ac, char const **av)
{
	Harl	instance;
	if (ac != 2)
	{
		std::cout << "Invalid argument count" << std::endl;
		return (1);
	}
	instance.complain(av[1]);
	return 0;
}
