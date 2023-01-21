#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain constructor called" << endl;
}

Brain::Brain(const Brain& cpy)
{
	cout << "Brain copy constructor called" << endl;
	*this = cpy;
}

Brain& Brain::operator=(const Brain& newOne)
{
	if (this != &newOne)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas[i] = newOne.ideas[i];
		}
	}
	return (*this);
}

Brain::~Brain()
{
	cout << "Brain destructor called" << endl;
}
