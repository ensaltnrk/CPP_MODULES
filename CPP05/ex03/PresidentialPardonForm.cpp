#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const string& target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec())
{
	*this = cpy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& newOne)
{
	(void)newOne;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExec()){
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (!this->getIndic()){
		throw FormNotSignedException();
	}
	cout << this->target << " has been pardoned by Zaphod Beeblebrox" << endl;
	cout << executor.getName() << " executed " << this->getName() << endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
