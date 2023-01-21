#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat")
{
}

Bureaucrat::Bureaucrat(const string name) : name(name)
{
	grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy)
{
	*this = cpy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& newOne)
{
	if (this != &newOne)
	{
		this->grade = newOne.grade;
	}
	return (*this);
}

Bureaucrat& Bureaucrat::operator++()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	else
		--this->grade;
	return (*this);
}

Bureaucrat& Bureaucrat::operator++(int)
{
	Bureaucrat&	temp = *this;
	++(*this);
	return (temp);
}

Bureaucrat& Bureaucrat::operator--()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	else
		++this->grade;
	return (*this);
}

Bureaucrat& Bureaucrat::operator--(int)
{
	Bureaucrat&	temp = *this;
	--(*this);
	return (temp);
}

const string& Bureaucrat::getName() const
{
	return (this->name);
}

int	Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		this->grade = grade;
}

void	Bureaucrat::signForm(Form& form)
{
	form.beSigned(*this);
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& ins)
{
	out << ins.getName() << ", bureaucrat grade " << ins.getGrade() << "." << endl;
	return (out);
}
