#include "Bureaucrat.hpp"

int main()
{
	try{
		Bureaucrat bureaucrat("Bob");
		bureaucrat.setGrade(2);
		bureaucrat++;
		cout << bureaucrat;
		Bureaucrat bureaucrat2("bob");
		bureaucrat2.setGrade(160);
	}
	catch(std::exception& err) {
		cout << err.what() << endl;
	}
}
