//
// Created by arnisfet on 26.02.2022.
//

#include "Form.h"

	Form::Form(bool si, std::string name, int grs, int gre, std::string trg) :
	sign(si),name(name), grade_required_to_sign(grs), grade_required_to_execute(gre)
	, target(trg)
{
	if (this->grade_required_to_sign < 1 || this->grade_required_to_execute < 1 )
		throw Form::GradeTooHighException();
	if (this->grade_required_to_sign > 150 || this->grade_required_to_execute > 150)
		throw Form::GradeTooLowException();
}

	Form::~Form() {
		std::cout << "Default destructor for Form!\n";
}

	Form &Form::operator=(const Form &fo)
{
	if (this == &fo)
		return (*this);
	this->sign = fo.getSigned();
	return (*this);
}

	Form::Form(const Form &fo) : sign(fo.sign), name(fo.name),
	grade_required_to_sign(fo.grade_required_to_sign),
	grade_required_to_execute(fo.grade_required_to_execute)
{
	if (this->grade_required_to_sign < 1 || this->grade_required_to_execute < 1 )
		(throw Form::GradeTooHighException());
	if (this->grade_required_to_sign > 150 || this->grade_required_to_execute > 150)
		(throw Form::GradeTooLowException());
}

		std::string Form::getName() const {
	return (this->name);
}
		bool        Form::getSigned() const {
	return (this->sign);
}
		int         Form::get_req_sign_grade() const {
	return (this->grade_required_to_sign);
}
		int         Form::get_req_exec_grade() const {
	return (this->grade_required_to_execute);
}
		void        Form::beSigned(const Bureaucrat &bu)
{
	if (bu.getGrade() <= this->get_req_sign_grade())
	{
		this->sign = true;
		std::cout << "<" << this->getName() << "> signed "<< bu.getName
		() << std::endl;
	}
	else
	{
		std::cout << "<" << this->getName() << "> cannot sign " << bu
		.getName() << " because ";
		throw Form::GradeTooLowException();
	}
}

std::string Form::getTarget() const
{
	return (target);
}

std::ostream &operator<<(std::ostream &os, Form &fo)
{
	if (fo.getSigned())
		os << "this " << fo.getName() << " signed ";
	else
		os << "this " << fo.getName() << " unsigned ";
	os << "required to sign " << fo.get_req_sign_grade() <<
	" required to execute " << fo.get_req_exec_grade() << std::endl;
	return (os);
}

void Form::execute(const Bureaucrat &executor) const
{
	if (!this->sign)
		throw std::string("Form isn't sign!");
	else if (executor.getGrade() > this->grade_required_to_execute)
	{
		std::cout << executor.getGrade() << std::endl;
		std::cout << this->grade_required_to_execute << std::endl;
		throw std::string("Executor has lower lvl then needed!");
	}

}