#include "Cat.hpp"

Cat::Cat()
{
	cout << "Cat constructor called" << endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& cpy)
{
	cout << "Cat copy constructor called" << endl;
	*this = cpy;
}

Cat&	Cat::operator=(const Cat& newOne)
{
	if (this == &newOne)
		return (*this);
	this->type = newOne.type;
	return (*this);
}

void	Cat::makeSound() const
{
	cout << "meeeooooowwww" << endl;
}

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
}