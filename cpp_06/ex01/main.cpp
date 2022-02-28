#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	try
	{
		Form fo1(false, "first", 10, 30);
		std::cout << fo1 <<std::endl;
	}
	catch(std::exception const &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		Form fo2(false, "second", 0, 30);
	}
	catch(std::exception const &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		Form fo3(false, "third", 10, 200);
	}
	catch(std::exception const &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	Bureaucrat bu1("bu1", 11);
	Bureaucrat bu2("bu2", 9);
	Form fo4(false, "fo4", 10, 30);
	try
	{
		fo4.beSigned(bu2);
	}
	catch(std::exception const &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	try
	{
		fo4.beSigned(bu1);
	}
	catch(std::exception const &e)
	{
		std::cout<<e.what()<<std::endl;
	}
	return (0);
}