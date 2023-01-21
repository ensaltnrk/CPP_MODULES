#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain*	catBrain;
public:
	Cat();
	~Cat();

	Cat(const Cat& cpy);
	Cat& operator=(const Cat& newOne);

	void	makeSound() const;
};

#endif
