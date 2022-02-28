#include "Checker.h"

void output(std::string line)
{

}

void print_for_fun(std::string line)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::stof(line) << "f" << std::endl;
	std::cout << "double: " << std::stod(line) << std::endl;
}

int main(int ac, char **av)
{
	Checker check;
	std::string line = av[1];

	if (ac != 2)
		std::cout << "Exit! Wrong number of arguments!\n";
	try
	{
		check.check_alphanum(line);
		if (check.is_nan(line))
			print_for_fun(line);
		else

	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}