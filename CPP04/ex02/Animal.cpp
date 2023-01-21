#include "Animal.hpp"

AAnimal::AAnimal() : type("holoholona")
{
	cout << "AAnimal constructor called" << endl;
}

AAnimal::AAnimal(const AAnimal& cpy)
{
	cout << "AAnimal copy constructor called" << endl;
	*this = cpy;
}

AAnimal&	AAnimal::operator=(const AAnimal& newOne)
{
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	return (*this);
}

const string&	AAnimal::getType() const
{
	return (this->type);
}

AAnimal::~AAnimal()
{
	cout << "AAnimal destructor called" << endl;
}
