#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
using std::string;
using std::endl;
using std::cout;

class WrongAnimal
{
protected:
	string	WrongType;
public:
	WrongAnimal();
	~WrongAnimal();

	WrongAnimal(const WrongAnimal& cpy);
	WrongAnimal& operator=(const WrongAnimal& newOne);

	const string	getType() const;
	void	makeSound() const;
};

#endif
