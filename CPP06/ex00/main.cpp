#include "Converter.hpp"

int main(int ac, const char **av)
{
	int	type;
	if (ac == 2)
	{
		Converter	executor(av[1]);
		type = executor.checkForType();
		executor.convertType(type);
	}
	else
		cout << "Invalid number of arguments" << endl;
	return (0);
}
