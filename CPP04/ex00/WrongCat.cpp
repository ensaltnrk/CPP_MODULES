#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	WrongType = "Cat";
	cout << "WrongCat constructor called " << endl;
}

WrongCat::WrongCat(const WrongCat& cpy)
{
	cout << "WrongCat copy constructor called" << endl;
	*this = cpy;
}

WrongCat&	WrongCat::operator=(const WrongCat& newOne)
{
	if (this == &newOne)
		return (*this);
	this->WrongType = newOne.WrongType;
	return (*this);
}

void	WrongCat::makeSound() const
{
	cout << "meeeooooowwwww" << endl;
}

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called" << endl;
}
