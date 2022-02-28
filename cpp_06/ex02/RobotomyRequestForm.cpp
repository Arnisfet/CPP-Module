//
// Created by Mickey Rudge on 2/27/22.
//

#include "RobotomyRequestForm.h"


RobotomyRequestForm::RobotomyRequestForm(std::string target) :
		Form(false, "RobotomyRequestForm", 72, 45, target)
{
	std::cout << "Default constructor for RobotomyRequestForm!\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &sh) : Form(sh)
{
	std::cout << "Default copy constructor for RobotomyRequestForm!\n";
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Default destructor for RobotomyRequestForm!\n";
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &sh)
{
	std::cout << "Default assigment operator for RobotomyRequestForm!\n";
	if (this == &sh)
		return (*this);
	Form::operator=(sh);
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << ".....Make some drilling noise.....!";
	if ((1 + (rand() % 3)) == 2)
		std::cout << this->getTarget() << " was robotomized!" << std::endl;
	else
		std::cout << "The robotization messed up..." << std::endl;
}