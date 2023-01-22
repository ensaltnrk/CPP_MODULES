#include "Zombie.hpp"

int main()
{
	Zombie	*pack = zombieHorde(5, "enes");
	for (size_t i = 0; i < 5; i++)
	{
		pack[i].announce();
	}
	delete[] pack;
	return (0);
}
