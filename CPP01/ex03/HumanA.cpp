#include "HumanA.hpp"

void	HumanA::attack()
{
	cout << this->name << " attacks with their " << this->gun.getType() << endl;
}

HumanA::HumanA(string name, Weapon& gun) : name(name) , gun(gun)
{
}

void	HumanA::setWeapon(Weapon& gun)
{
	this->gun = gun;
}
