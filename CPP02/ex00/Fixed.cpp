#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixedNum = 0;
	cout << "Default constructer called" << endl;
}

Fixed::Fixed(Fixed& cpy)
{
	cout << "Copy constructor called" << endl;
	*this = cpy;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int Fixed::getRawBits(void) {
    cout << "getRawBits member function called" << endl;
    return (this->fixedNum);
}

void    Fixed::setRawBits(int const fixedNum){
    cout << "setRawBits member function called" << endl;
    this->fixedNum = fixedNum;
}

Fixed &Fixed::operator=(Fixed& t)
{
	cout << "Copy assigment operator called" << endl;
    this->fixedNum = t.getRawBits();
    return *this;
}
