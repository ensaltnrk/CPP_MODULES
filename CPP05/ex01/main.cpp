#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try{
		Form form("Management Information", 20, 5);
		Bureaucrat bureaucrat("Enes");
		cout << form;
		bureaucrat.setGrade(10);
		bureaucrat.signForm(form);
		bureaucrat++;
		cout << bureaucrat;
		Bureaucrat bureaucrat2("Altin");
		bureaucrat2.setGrade(0);
	}
	catch(std::exception& err) {
		cout << err.what() << endl;
	}
}
