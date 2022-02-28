//
// Created by arnisfet on 21.02.2022.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	_grade = grade;
	checkGrade();
	std::cout << "Default Bureaucrat constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Default Bureaucrat constructor\n";
	if (this != &other)
		*this = other;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	_grade = src._grade;
	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	return *this;
}

const std::string &Bureaucrat::getName(void) const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::incrementGrade()
{
	this->_grade--;
	checkGrade();
}

void Bureaucrat::decrementGrade()
{
	this->_grade++;
	checkGrade();
}

void Bureaucrat::checkGrade()
{
	if (_grade < Bureaucrat::highestGrade)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > Bureaucrat::lowestGrade)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade
	()<< "\n";
	return ostr;
}

void Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
		std::cout << "<" << this->getName() << "> signs <"<< form.getName() << ">" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
		}
		catch(std::exception &e)
		{
			std::cout<<e.what()<<std::endl;
		}
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " execute " << form.getName() << std::endl;
	}
	catch (std::string & e)
	{
		std::cout << this->_name << " cants execute " << form.getName();
		std::cout << " because " << e << std::endl;
	}
}
