//
// Created by arnisfet on 21.02.2022.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(const int &name, int grade)
{
	_name = name;
	_grade = grade;
//	std::cout << "Default Bureaucrat constructor\n";
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
//	std::cout << "Default Bureaucrat constructor\n";
	if (*this != other)
	{
		_name = other._name;
		_grade = other._grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat()
{

}