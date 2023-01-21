#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
using std::string;
using std::cout;
using std::endl;

class Animal
{
protected:
	string	type;
public:
	Animal();
	virtual ~Animal();

	Animal(const Animal& cpy);
	Animal& operator=(const Animal& newOne);
	
	const string&	getType() const;
	virtual void	makeSound() const;
};

#endif