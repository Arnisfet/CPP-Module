//
// Created by arnisfet on 21.02.2022.
//

#ifndef EX00_BUREAUCRAT_H
#define EX00_BUREAUCRAT_H
#include <iostream>
#include <string>
#include "Form.h"
#include <fstream>
#include <sstream>
#include <cstdlib>

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;
	static const int lowestGrade = 150;
	static const int highestGrade = 1;
public:
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	virtual ~Bureaucrat();

	const std::string &getName(void) const;
	int getGrade(void) const;
	Bureaucrat &operator=(const Bureaucrat &src);
	void incrementGrade();
	void decrementGrade();
	void checkGrade();
	void signForm(Form &src);
	void executeForm(Form const & form);

	class GradeTooHighException : public std::exception
			{
	public:
				virtual const char *what() const throw() {return ("Your grade is too high\n");}
			};
	class GradeTooLowException : public std::exception
			{
	public:
				virtual const char *what() const throw() {return ("Your grade is too low\n");}
			};
};

std::ostream &operator<<(std::ostream &ostr, const Bureaucrat &instance);

#endif //EX00_BUREAUCRAT_H
