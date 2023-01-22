#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Weapon
{
private:
	string type;
public:
	const	string& getType();
	void	setType(string type);
	Weapon(string type);
};

#endif
