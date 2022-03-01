
#include "Checker.h"

void print_for_fun(std::string line)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << atof(line.c_str()) << "f" << std::endl;
	std::cout << "double: " << atof(line.c_str()) << std::endl;
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
		{
			check.outputChar(line);
			check.outputInt(line);
			check.outputFloat(line);
			check.outputDouble(line);
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}