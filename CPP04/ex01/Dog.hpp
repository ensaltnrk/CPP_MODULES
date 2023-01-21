#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
	Brain*	dogBrain;
public:
	Dog();
	~Dog();

	Dog(const Dog& cpy);
	Dog& operator=(const Dog& newOne);

	void	makeSound() const;
};

#endif