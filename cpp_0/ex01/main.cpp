//
// Created by arnisfet on 27.01.2022.
//

#include "header.hpp"

int main(void)
{
	int run;
	std::string first;
	Telephone teleph;

	run = 1;
	while (run)
	{
		std::cout << "> ";
		std::getline(std::cin, first);
		if (first == "ADD")
			teleph.add_contact();
		else if (first == "SEARCH")
			teleph.search_contact();
		else if (first == "EXIT")
		{
			run = false;
			std::cout << "Bye." << std::endl;
		}
	}
}