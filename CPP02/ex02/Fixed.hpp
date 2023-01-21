#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#define SMALLEST 0.00390625

using std::cout;
using std::endl;

class Fixed
{
private:
	int					fixedNum;
	static const int	fractional = 8;
public:
	Fixed(int intNum);
	Fixed(float fNum);
	Fixed();
	~Fixed();
	Fixed(const	Fixed& cpy);

	Fixed&	operator=(const Fixed& newOne);
	
	bool	operator==(const Fixed& newOne) const;
	bool	operator!=(const Fixed& newOne) const;
	bool	operator>(const Fixed& newOne) const;
	bool	operator<(const Fixed& newOne) const;
	bool	operator>=(const Fixed& newOne) const;
	bool	operator<=(const Fixed& newOne) const;
	
	Fixed	operator-(const Fixed& newOne) const;
	Fixed	operator+(const Fixed& newOne) const;
	Fixed	operator*(const Fixed& newOne) const;
	Fixed	operator/(const Fixed& newOne) const;
	
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	
	float	toFloat( void ) const;
	int		toInt( void ) const;
	int		getRawBits() const;
	void	setRawBits(const int num);
	static Fixed&	min(Fixed& n1, Fixed& n2);
	static const 	Fixed&	min(const Fixed& n1, const Fixed& n2);
	static Fixed&	max(Fixed& n1, Fixed& n2);
	static const 	Fixed&	max(const Fixed& n1, const Fixed& n2);

};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif
