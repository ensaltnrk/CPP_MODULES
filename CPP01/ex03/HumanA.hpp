#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	string name;
	Weapon& gun;
public:
	HumanA(string name, Weapon& gun);
	void	attack();
	void	setWeapon(Weapon& gun);
};

#endif
