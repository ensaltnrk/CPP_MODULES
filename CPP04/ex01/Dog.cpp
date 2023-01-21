#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog Constructor called" << endl;
	this->type = "Dog";
	this->dogBrain = new Brain();
}

Dog::Dog(const Dog& cpy)
{
	cout << "Dog copy constructor called" << endl;
	*this = cpy;
}

Dog&	Dog::operator=(const Dog& newOne)
{
	cout << "Dog operator overload called" << endl;
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	this->dogBrain = new Brain();
	*this->dogBrain = *newOne.dogBrain;
	return (*this);
}

void	Dog::makeSound() const
{
	cout << "Bark Bark Bark..." << endl;
}

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
	delete dogBrain;
}
