#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class AForm {
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
protected:
	class FormNotSignedException : public std::exception {
	public:
		const char *what() const throw() {
			return "Form not signed";
		}
	};
public:
	AForm(const string& name, int sign, int exec);

	void	beSigned(const Bureaucrat& instance);
	
	virtual void	execute(Bureaucrat const & executor) const = 0;
	const string&	getName() const;
	int				getSign() const;
	int				getExec() const;
	bool			getIndic() const;
	virtual ~AForm();
};

#endif
