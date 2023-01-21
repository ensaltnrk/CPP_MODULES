#include "Fixed.hpp"

Fixed::Fixed(int intNum)
{
	this->fixedNum = intNum << this->fractional;
}

Fixed::Fixed(float fNum)
{
	this->fixedNum = roundf(fNum * (1 << this->fractional));
}

Fixed::Fixed()
{
	this->fixedNum = 0;
}

Fixed::Fixed(const Fixed& cpy)
{
	*this = cpy;
}

int	Fixed::toInt() const
{
	return (this->fixedNum >> this->fractional);
}

float	Fixed::toFloat() const
{
	return ((float)this->fixedNum / (1  << this->fractional));
}

int	Fixed::getRawBits(void)const
{
	return (this->fixedNum);
}

void	Fixed::setRawBits(int const num)
{
	this->fixedNum = num;
}

Fixed &Fixed::operator=(const Fixed& newOne)
{
	if (this != &newOne)
		this->fixedNum = newOne.getRawBits();
	return *this;
}

bool	Fixed::operator==(const Fixed& newOne) const
{
	if (this->fixedNum == newOne.fixedNum)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed& newOne) const
{
	if (this->fixedNum != newOne.fixedNum)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& newOne) const
{
	if (this->fixedNum <= newOne.fixedNum)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& newOne) const
{
	if (this->fixedNum == newOne.fixedNum)
		return true;
	return false;
}

bool	Fixed::operator>(const Fixed& newOne) const
{
	if (this->fixedNum > newOne.fixedNum)
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& newOne) const
{
	if (this->fixedNum < newOne.fixedNum)
		return true;
	return false;
}

Fixed	Fixed::operator-(const Fixed& newOne) const
{
	Fixed	diff;

	diff.setRawBits(this->fixedNum - newOne.fixedNum);
	return (diff);
}

Fixed	Fixed::operator+(const Fixed& newOne) const
{
	Fixed	sum;

	sum.setRawBits(this->fixedNum + newOne.fixedNum);
	return (sum);
}

Fixed	Fixed::operator*(const Fixed& newOne) const
{
	Fixed	mult;

	mult.setRawBits(this->fixedNum * newOne.fixedNum);
	mult.setRawBits(mult.toFloat());
	return (mult);
}

Fixed	Fixed::operator/(const Fixed& newOne) const
{
	Fixed	div;

	div.setRawBits((this->fixedNum * (1 << this->fractional)) / newOne.fixedNum);
	return (div);
}

Fixed	&Fixed::operator++()
{
	++this->fixedNum;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	++(*this);
	return (temp);
}

Fixed	&Fixed::operator--()
{
	--this->fixedNum;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	--(*this);
	return (temp);
}

Fixed	&Fixed::min(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

const Fixed	&Fixed::min(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n1);
	return (n2);
}

Fixed	&Fixed::max(Fixed& n1, Fixed& n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}

const Fixed	&Fixed::max(const Fixed& n1, const Fixed& n2)
{
	if (n1 < n2)
		return (n2);
	return (n1);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

Fixed::~Fixed()
{
}
