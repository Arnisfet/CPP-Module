//
// Created by arnisfet on 07.02.2022.
//
#include "Karen.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		Karen k;
		k.complain(std::string(av[1]));
	}
	return 0;
}