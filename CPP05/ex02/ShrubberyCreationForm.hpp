#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	string target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& cpy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& newOne);

	void	execute(Bureaucrat const & executor) const;
	~ShrubberyCreationForm();
};

#endif
