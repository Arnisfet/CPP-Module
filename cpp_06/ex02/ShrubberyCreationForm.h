//
// Created by arnisfet on 27.02.2022.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_H
#define EX02_SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include "Bureaucrat.h"

class Form;
class ShrubberyCreationForm : public Form
		{
		public:
			ShrubberyCreationForm(std::string type);
			ShrubberyCreationForm(const ShrubberyCreationForm &sh);
			~ShrubberyCreationForm(void);
			ShrubberyCreationForm &operator=(const ShrubberyCreationForm &sh);
			void        execute(Bureaucrat const & executor) const;
		};

#endif //EX02_SHRUBBERYCREATIONFORM_H
