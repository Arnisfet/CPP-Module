//
// Created by arnisfet on 21.02.2022.
//

#ifndef EX00_BUREAUCRAT_H
#define EX00_BUREAUCRAT_H


class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &other);
	virtual ~Bureaucrat();

class GradeTooHighException : public std::exception
		{
public:
			virtual const char *what() const char throw()
			{
				return ("Your grade is too high\n");
			}
		};
class GradeTooHighException : public std::exception
		{
public:
			virtual const char *what() const char throw()
			{
				return ("Your grade is too low\n");
			}
		};
};


#endif //EX00_BUREAUCRAT_H
