//
// Created by arnisfet on 06.02.2022.
//

#include "Replacment.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "Uncorrect number of arguments, usage: filename, [s1], "
					 "[s2]" << std::endl;
	else
	{
		Replace repl(av[1], av[2], av[3]);
		repl.swap();
	}
}