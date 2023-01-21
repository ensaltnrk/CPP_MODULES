#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Brain
{
private:
	string	ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& cpy);
	Brain&	operator=(const Brain& newOne);
};

#endif