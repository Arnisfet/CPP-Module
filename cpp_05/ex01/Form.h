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
			bool        sign;
			std::string name;
			int         grade_required_to_sign;
			int         grade_required_to_execute;
		public:
			Form(bool si, std::string name, int grs, int gre);
			virtual ~Form();
			Form(const Form &fo);
			Form &operator=(const Form &fo);
			Form(void);

			class GradeTooHighException : public std::exception
					{
				virtual const char* what() const throw();
					};
			class GradeTooLowException : public std::exception
					{
				virtual const char* what() const throw();
					};
			std::string getName() const;
			bool        getSigned() const;
			int         get_req_sign_grade() const;
			int         get_req_exec_grade() const;
			void        beSigned(const Bureaucrat &bu);
		};
std::ostream &operator<<(std::ostream &os, Form &fo);

#endif //EX01_FORM_H
