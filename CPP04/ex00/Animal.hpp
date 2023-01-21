#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Animal
{
protected:
	string	type;
public:
	Animal();
	~Animal();

	Animal(const Animal& cpy);
	Animal& operator=(const Animal& newOne);
	
	const string&	getType() const;
	virtual void	makeSound() const;
};

#endif