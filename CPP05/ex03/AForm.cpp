#include "AForm.hpp"


AForm::AForm(const string& name, int sign, int exec) : name(name), gradeSign(sign), gradeExec(exec), indicator(false)
{
	if (sign > 150 || exec > 150)
		throw GradeTooLowException();
	if (exec < 1 || sign < 1)
		throw GradeTooHighException();
}

const string&	AForm::getName() const
{
	return (this->name);
}

int	AForm::getSign() const
{
	return (this->gradeSign);
}

int	AForm::getExec() const
{
	return (this->gradeExec);
}

bool AForm::getIndic() const
{
	return (indicator);
}

void	AForm::beSigned(const Bureaucrat& instance)
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

AForm::~AForm()
{
}
