//
// Created by arnisfet on 27.02.2022.
//

# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

#ifndef EX03_INTERN_H
#define EX03_INTERN_H


class Intern
		{
		public:
			Intern();
			Intern(const Intern&);
			virtual ~Intern();
			Intern &operator=(const Intern& op);

			Form*        makeForm(std::string const & form_name, std::string const & target);

		};
#endif //EX03_INTERN_H
