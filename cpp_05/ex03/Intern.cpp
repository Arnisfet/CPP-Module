//
// Created by arnisfet on 27.02.2022.
//

#include "Intern.h"

Intern::Intern() {

}

Intern::~Intern() {

}

Intern::Intern(const Intern &other) {
	*this = other;
}

Intern &Intern::operator=(const Intern &other) {
	(void) other;
	return (*this);
}

Form *Intern::makeForm(std::string form_name, std::string target) {
	Form *forms[3] = {
			new ShrubberyCreationForm(target),
			new RobotomyRequestForm(target),
			new PresidentialPardonForm(target)
	};
	std::string form_names_arr[3] = {
			"shrubbery creation",
			"robotomy request",
			"presidential pardon"
	};

	for (size_t i = 0; i < 3; i++) {
		if (form_names_arr[i] == form_name) {
			std::cout << "Intern has successfully created form [" << forms[i]->getName() << "]\n";
			{
				for (size_t j = 0; j < 3; j++) {
					if (j != i)
						delete forms[j];
				}
				return (forms[i]);
			}
		}
	}
	std::cout << "Intern can't create form [" << form_name << "] because: "
												 "Can't find form\n";
	return (NULL);
}