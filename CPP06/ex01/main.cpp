#include "Data.hpp"

int main()
{
	Data*	ptr = new Data;

	if (dynamic_cast<Data *>(ptr->deserialize(ptr->serialize(ptr))))
		cout << "Casted successfully" << endl;
	else
		cout << "Couldn't cast successfully" << endl;
	return (0);
}
