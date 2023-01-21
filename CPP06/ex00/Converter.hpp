#ifndef CONVERTER_HPP
#define CONVERTER_HPP

#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::string;
using std::endl;

class Converter
{
private:
	string arg;
public:
	Converter();
	Converter(const string& arg);
	Converter(const Converter& cpy);
	Converter& operator=(const Converter& newone);

	int		checkForType() const;
	void	convertType(int type) const;	
	~Converter() {};
};

#endif
