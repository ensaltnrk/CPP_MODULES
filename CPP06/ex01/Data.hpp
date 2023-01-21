#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
using std::string;
using std::cout;
using std::endl;

class Data
{
private:
	uintptr_t	ptr;
public:
	Data();
	Data(const Data& cpy);
	Data& operator=(const Data& newOne);

	uintptr_t	serialize(Data* ptr);
	Data*		deserialize(uintptr_t raw);
	~Data() {};
};

#endif
