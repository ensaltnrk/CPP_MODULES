#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog constructor called" << endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& cpy)
{
	cout << "Dog copy constructor called" << endl;
	*this = cpy;
}

Dog&	Dog::operator=(const Dog& newOne)
{
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	return (*this);
}

void	Dog::makeSound() const
{
	cout << "Bark Bark Bark..." << endl;
}

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
}
