#include "Form.hpp"

Form::Form() : name("Form"), gradeSign(75), gradeExec(75), indicator(false)
{
}

Form::Form(const string& name, int sign, int exec) : name(name), gradeSign(sign), gradeExec(exec), indicator(false)
{
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	if (exec < 1 || sign < 1)
		throw GradeTooHighException();
}

Form::Form(const Form& cpy) : name(cpy.name), gradeSign(cpy.gradeSign), gradeExec(cpy.gradeExec), indicator(cpy.indicator)
{
	*this = cpy; 
}

Form&	Form::operator=(const Form& newOne)
{
	(void)newOne;
	return (*this);
}

void	Form::beSigned(const Bureaucrat& instance)
{
	if (instance.getGrade() <= this->gradeSign){
		cout << instance.getName() << " signed " << this->name << endl;
		this->indicator = true;
	}
	else{
		cout << instance.getName() << " couldn't sign " << this->name << " because ";
		throw GradeTooLowException();
	}
}

const string&	Form::getName() const
{
	return (this->name);
}

int	Form::getSign() const
{
	return (this->gradeSign);
}

int	Form::getExec() const
{
	return (this->gradeExec);
}

bool Form::getIndic() const
{
	return (indicator);
}

Form::~Form()
{
}

std::ostream&	operator<<(std::ostream& out, const Form& form)
{
	out << "Form: " << form.getName() << endl;
	out << "GradeSign: " << form.getSign() << endl;
	out << "GradeExec: " << form.getExec() << endl;
	out << "Status: " << form.getIndic() << endl;
	return (out);
}
