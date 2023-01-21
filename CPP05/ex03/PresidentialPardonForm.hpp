#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	string target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const string& target);
	PresidentialPardonForm(const PresidentialPardonForm& cpy);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& newOne);

	void	execute(Bureaucrat const & executor) const;
	~PresidentialPardonForm();
};

#endif
