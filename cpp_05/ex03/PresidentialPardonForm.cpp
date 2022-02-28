//
// Created by Mickey Rudge on 2/27/22.
//

#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
		Form(false, "PresidentialPardonForm", 25, 5, target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &sh) : Form(sh)
{

}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &sh)
{
	if (this == &sh)
		return (*this);
	Form::operator=(sh);
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	Form::execute(executor);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox"
									  ".\n";
}