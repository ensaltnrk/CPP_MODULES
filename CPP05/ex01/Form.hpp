#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form {
private:
	const string	name;
	const int		gradeSign;
	const int		gradeExec;
	bool			indicator;
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
	Form();
	Form(const string& name, int sign, int exec);
	Form(const Form& cpy);
	Form&	operator=(const Form& newOne);

	void	beSigned(const Bureaucrat& instance);
	
	const string&	getName() const;
	int				getSign() const;
	int				getExec() const;
	bool			getIndic() const;
	~Form();
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif
