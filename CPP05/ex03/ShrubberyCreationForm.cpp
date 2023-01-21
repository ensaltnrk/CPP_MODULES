#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const string& target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : AForm(cpy.getName(), cpy.getSign(), cpy.getExec())
{
	*this = cpy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& newOne)
{
	(void)newOne;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExec()){
		throw (Bureaucrat::GradeTooLowException());
	}
	else if (!this->getIndic()){
		throw FormNotSignedException();
	}
	else{
		string format = "_shrubbery";
		std::ofstream outfile(this->target + format);
		outfile << "                    \\                   /                 " << endl;
		outfile << "                     \\                 /                  " << endl;
		outfile << "                      \\               /                   " << endl;
		outfile << "                       \\             /                    " << endl;
		outfile << "                       /             \\                    " << endl;
		outfile << "                      /               \\                   " << endl;
		outfile << "                     /                 \\                  " << endl;
		outfile << "                    /                   \\                 " << endl;
		outfile.close();
		cout << executor.getName() << " executed " << this->getName() << endl;
	}
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
