#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	string target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const string& target);
	RobotomyRequestForm(const RobotomyRequestForm& cpy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& newOne);

	void	execute(Bureaucrat const & executor) const;
	~RobotomyRequestForm();
};

#endif
