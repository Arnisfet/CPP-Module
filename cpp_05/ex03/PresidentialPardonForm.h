//
// Created by Mickey Rudge on 2/27/22.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_H
#define EX02_PRESIDENTIALPARDONFORM_H

#include "Form.h"
#include "Bureaucrat.h"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string type);
	PresidentialPardonForm(const PresidentialPardonForm &sh);
	~PresidentialPardonForm(void);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &sh);
	void        execute(Bureaucrat const & executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_H
