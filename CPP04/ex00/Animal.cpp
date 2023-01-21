#include "Animal.hpp"

Animal::Animal() : type("holoholona")
{
	cout << "Animal constructor called" << endl;
}

Animal::Animal(const Animal& cpy)
{
	cout << "Animal copy constructor called" << endl;
	*this = cpy;
}

Animal&	Animal::operator=(const Animal& newOne)
{
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	return (*this);
}

const string&	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	cout << "no sound" << endl;
}

Animal::~Animal()
{
	cout << "Animal destructor called" << endl;
}
