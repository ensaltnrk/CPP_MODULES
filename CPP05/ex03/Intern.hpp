#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern& cpy);
	Intern& operator=(const Intern& newOne);

	AForm*	makeForm(const string& req, const string& target);

	class NoSuchRequestAvailable : public std::exception{
		public:
			const char* what() const throw() {
				return "No such request available";
			}
	};
	~Intern();
};

#endif
