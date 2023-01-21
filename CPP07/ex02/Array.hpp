#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>
using std::string;
using std::cout;
using std::endl;

template <typename T>
class Array
{
private:
	T				*arr;
	unsigned int	len;
public:
	Array() : arr(nullptr), len(0) {}
	
	Array(int n) : arr(new T[n]), len(n) {}
	
	Array(const Array& cpy) : arr(new T[cpy.len]), len(cpy.len)
	{
		*this = cpy;
	}
	
	Array&	operator=(const Array& newOne)
	{
		if (this != &newOne)
		{
			for (unsigned int i = 0; i < newOne.len; i++)
			{
				this->arr[i] = newOne.arr[i];
			}
		}	
		return *this;
	}

	T&	operator[](int idx)
	{
		if (idx >= (int)len || idx < 0)
			throw std::out_of_range("Index out of range");
		else
			return (arr[idx]);
	}

	unsigned int	size() const {
		return len;
	}
	~Array() {}
};

#endif
