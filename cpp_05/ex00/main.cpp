#include "Bureaucrat.h"

int main()
{
	try
	{
		Bureaucrat bu1("first", 150);
		Bureaucrat bu2("second", 1);
		bu2 = bu1;
		std::cout << bu1 << bu2;
		bu2.decrementGrade();
		bu1.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
