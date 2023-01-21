#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat Constructor called" << endl;
	this->type = "Cat";
	this->catBrain = new Brain();
}

Cat::Cat(const Cat& cpy)
{
	cout << "Cat copy constructor called" << endl;
	*this = cpy;
}

Cat&	Cat::operator=(const Cat& newOne)
{
	cout << "Cat operator overload called" << endl;
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	this->catBrain = new Brain();
	*this->catBrain = *newOne.catBrain;
	return (*this);
}

void	Cat::makeSound() const
{
	cout << "meeeooooowwww" << endl;
}

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
	delete catBrain;
}
