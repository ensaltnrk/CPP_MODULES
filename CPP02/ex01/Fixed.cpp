#include "Fixed.hpp"

Fixed::Fixed(int intNum)
{
	cout << "Int constructer called" << endl;
	this->fixedNum = intNum << this->fractional;
}

Fixed::Fixed(float fNum)
{
	cout << "Float constructor called" << endl;
	this->fixedNum = roundf(fNum * (1 << this->fractional));
}

Fixed::Fixed()
{
	cout << "Default constructor called" << endl;
	this->fixedNum = 0;
}

Fixed::Fixed(const Fixed& cpy)
{
	cout << "Copy constructor called" << endl;
	*this = cpy;
}

Fixed::~Fixed()
{
	cout << "Destructor called" << endl;
}

int	Fixed::toInt() const
{
	return (this->fixedNum >> this->fractional);
}

float	Fixed::toFloat() const
{
	return ((float)this->fixedNum / (1  << this->fractional));
}

Fixed &Fixed::operator=(const Fixed& newOne)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &newOne)
		this->fixedNum = newOne.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedNum);
}

void	Fixed::setRawBits(int const num)
{
	this->fixedNum = num;
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
