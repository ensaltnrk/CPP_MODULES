#include "Data.hpp"

Data::Data() : ptr(0)
{
}

Data::Data(const Data& cpy)
{
	*this = cpy;
}

Data& Data::operator=(const Data& newOne)
{
	this->ptr = newOne.ptr;
	return (*this);
}

uintptr_t	Data::serialize(Data* ptr)
{
	uintptr_t	casted = reinterpret_cast<uintptr_t>(ptr);
	return (casted);
}

Data*	Data::deserialize(uintptr_t raw)
{
	Data*	casted = reinterpret_cast<Data*>(raw);
	return (casted);
}

struct a
{
	int a;
	int c;
	char b;
	char d;
	float e;
	double f;
};

a*	vars = new a;

