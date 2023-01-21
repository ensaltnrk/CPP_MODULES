#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <fstream>

class AForm;

using std::string;
using std::cout;
using std::endl;


class Bureaucrat
{
private:
	const string	name;
	int				grade;
public:
	Bureaucrat();
	Bureaucrat(const string name);
	Bureaucrat(const Bureaucrat& cpy);
	Bureaucrat&	operator=(const Bureaucrat& newOne);
	Bureaucrat&	operator++();
	Bureaucrat& operator++(int);
	Bureaucrat& operator--();
	Bureaucrat& operator--(int);

	const string&	getName() const;
	int				getGrade() const;
	void			setGrade(int grade);
	void			signForm(AForm& form);
	void			executeForm(AForm const & form);
	class GradeTooHighException: public std::exception {
		public:
			const char* what() const throw() {
				return "Grade too high";
			}
	};

	class GradeTooLowException: public std::exception {
		public:
			const char* what() const throw() {
				return "Grade too low";
			}
	};
	~Bureaucrat() {};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& ins);

#endif
