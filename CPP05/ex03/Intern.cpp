#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& cpy)
{
	*this = cpy;
}

Intern& Intern::operator=(const Intern& newOne)
{
	(void)newOne;
	return (*this);
}

AForm	*makePresident(const std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*makeRobot(const std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*makeShrubbery(const std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(const std::string& req, const std::string& target)
{
	AForm *(*all_forms[])(const std::string target) = {&makePresident, &makeRobot, &makeShrubbery};
	std::string forms[] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};

	for (int i = 0; i < 3; i++)
	{
		if (req == forms[i])
		{
			std::cout << "Intern creates " << req << std::endl;
			return (all_forms[i](target));
		}
	}
	throw NoSuchRequestAvailable();
	return (NULL);
}

Intern::~Intern()
{
}
