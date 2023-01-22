#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon	*gun;
	string	name;
public:
	HumanB(string name);
	void	attack();
	void	setWeapon(Weapon& gun);
};

#endif
