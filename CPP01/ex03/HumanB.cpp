#include "HumanB.hpp"

void	HumanB::attack()
{
	if (this->gun)
		cout << this->name << " attacks with their " << this->gun->getType() << endl;
	else
		cout << this->name << " attacks with his head" << endl;
}

void	HumanB::setWeapon(Weapon& gun)
{
	this->gun = &gun;
}

HumanB::HumanB(string name) : name(name)
{
	this->gun = nullptr;
}
