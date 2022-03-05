//
// Created by Mickey Rudge on 2/27/22.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_H
#define EX02_ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include "Bureaucrat.h"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string type);
	RobotomyRequestForm(const RobotomyRequestForm &sh);
	~RobotomyRequestForm(void);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &sh);
	void        execute(Bureaucrat const & executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_H
