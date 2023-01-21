#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"
using std::string;
using std::cout;
using std::endl;

class AAnimal
{
protected:
	string	type;
public:
	AAnimal();
	virtual ~AAnimal();

	AAnimal(const AAnimal& cpy);
	AAnimal& operator=(const AAnimal& newOne);
	
	const string&	getType() const;
	virtual void	makeSound() const = 0;
};

#endif