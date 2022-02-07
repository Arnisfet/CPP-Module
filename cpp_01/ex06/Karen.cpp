#include "Karen.hpp"

Karen::Karen() {}

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << "I love to get extra bacon for my "
								"7XL-double-cheese-triple-pickle-special"
								"-ketchup burger.\nI just love it!\n" <<
								std::endl;
}

void Karen::info( void )
{
	std::cout << "[ INFO ]" << "I cannot believe adding extra bacon cost more"
							   " money. You don’t put enough!\nIf you did I "
							   "would not have to ask for it!\n" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have "
											   "some extra bacon for free.\n"
											   "I’ve been coming here for"
											   "years and you just started"
											   "working here last month.\n"
											   << std::endl;
}

void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable, I want to"
											 "speak to the manager now.\n" << std::endl;
}

int Karen::getLevel(std::string level)
{
	int levels;
	std::string pool_l[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	levels = 4;
	for (int i = 0; i < levels; i++)
		if (level == pool_l[i])
			return (i);
	return (-1);
}

void Karen::complain(std::string level)
{
	int level1;

	level1 = getLevel(level);
	switch (level1)
	{
		case 0:
			debug();
			info();
			warning();
			error();
			break ;
		case 1:
			info();
			warning();
			error();
			break ;
		case 2:
			warning();
			error();
			break ;
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems"
						 " ]\n";
	}
}