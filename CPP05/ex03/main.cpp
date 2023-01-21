#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try{
		Intern someRandomIntern;
		AForm* form = someRandomIntern.makeForm("PresidentialPardonForm", "Enes");
		Bureaucrat bureaucrat("Kerim");
		bureaucrat.setGrade(3);
		bureaucrat.signForm(*form);
		bureaucrat.executeForm(*form);
		bureaucrat++;
		cout << bureaucrat;
		Bureaucrat bureaucrat2("Sancak");
		bureaucrat2.setGrade(0);
	}
	catch(std::exception& err) {
		cout << err.what() << endl;
	}
}
