#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

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

	int		toInt( void ) const;
	float	toFloat( void ) const;
	int		getRawBits() const;
	void	setRawBits(const int num);
};

std::ostream    &operator<<(std::ostream &out, Fixed const &fixed);

#endif
