#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try{
		AForm* form = new ShrubberyCreationForm("Enes");
		Bureaucrat bureaucrat("Kerim");
		bureaucrat.setGrade(100);
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
