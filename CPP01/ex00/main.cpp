#include "Zombie.hpp"

int main()
{
	Zombie *one = newZombie("enes");
	randomChump("kerim");
	one->announce();
	delete one;
	return (0);
}
