#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	int random = rand() % 3;
	if(random == 0)
		return new A;
	else if(random == 1)
		return new B;
	return new C;
}

void identify(Base* p)
{
	if((A*)dynamic_cast<A*>(p) != NULL)
		cout << "Class ID: A" << endl;
	else if((B*)dynamic_cast<B*>(p) != NULL)
		cout << "Class ID: B" << endl;
	else if((C*)dynamic_cast<C*>(p) != NULL)
		cout << "Class ID: C" << endl;
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p);
		cout << "Class ID Ref: A" << endl;
		return ;
	} catch (std::bad_cast) {

	}
	try {
		(void)dynamic_cast<B&>(p);
		cout << "Class ID Ref: B" << endl;
		return ;
	} catch (std::bad_cast) {

	}
	try {
		(void)dynamic_cast<C&>(p);
		cout << "Class ID Ref: C" << endl;
		return ;
	} catch (std::bad_cast) {

	}
}

int main()
{
	srand (time(NULL));
	Base *base = generate();

	identify(base);
	identify(*base);
}
