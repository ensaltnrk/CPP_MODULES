#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

using std::string;
using std::cout;
using std::endl;


class Bureaucrat
{
private:
	const string	name;
	int				grade;
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
	void			signForm(Form& form);
	~Bureaucrat() {};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& ins);

#endif
