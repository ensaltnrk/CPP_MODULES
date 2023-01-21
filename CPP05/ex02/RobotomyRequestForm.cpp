#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const string& target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec())
{
	*this = cpy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& newOne)
{
	(void)newOne;
	return (*this);
}

static int fail_count = 0;

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExec()){
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (!this->getIndic()){
		throw FormNotSignedException();
	}
	else if (fail_count++ % 2){
		cout << "HMM HMM HMMMMMMMMM..." << endl;
		cout << this->target << " was robotomized" << endl;
		cout << executor.getName() << " executed " << this->getName() << endl;
	}
	else
		cout << "Robotomy failed" << endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
