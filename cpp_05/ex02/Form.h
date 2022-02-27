//
// Created by arnisfet on 26.02.2022.
//
#ifndef EX01_FORM_H
#define EX01_FORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.h"
class Bureaucrat;

class Form
{
private:
	bool        		sign;
	const std::string name;
	const int         grade_required_to_sign;
	const int         grade_required_to_execute;
	std::string 		target;
public:
	Form(bool si, std::string name, int grs, int gre, std::string target);
	virtual ~Form();
	Form(const Form &fo);
	Form &operator=(const Form &fo);

	class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw()
			{
				return ("Grade Too High Form!!\n");
			}
		};
	class GradeTooLowException : public std::exception
		{
		virtual const char* what() const throw()
		{
			return ("Grade Too Low Form!!\n");
		}
		};
	std::string getName() const;
	bool        getSigned() const;
	int         get_req_sign_grade() const;
	int         get_req_exec_grade() const;
	void        beSigned(const Bureaucrat &bu);
	std::string	getTarget() const;
	void        execute(Bureaucrat const & executor) const;
};
std::ostream &operator<<(std::ostream &os, Form &fo);

#endif //EX01_FORM_H
