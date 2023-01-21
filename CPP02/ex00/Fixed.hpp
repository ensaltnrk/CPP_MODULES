#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

using std::cout;
using std::endl;

class Fixed
{
private:
	int					fixedNum;
	static const int	fractional = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed& cpy);
	Fixed& operator=(Fixed& newOne);

	int		getRawBits();
	void	setRawBits(int const fixedNum);
};

#endif
