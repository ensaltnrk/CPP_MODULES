#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : WrongType("holoholona")
{
	cout << "WrongAnimal constructor called" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	cout << "WrongAnimal copy constructor called" << endl;
	*this = cpy;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& newOne)
{
	if (this == &newOne)
		return (*this);
	this->WrongType = newOne.WrongType;
	return (*this);
}

const string	WrongAnimal::getType() const
{
	return (this->WrongType);
}

void	WrongAnimal::makeSound() const
{
	cout << "no sound" << endl;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal destructor called " << endl;
}
