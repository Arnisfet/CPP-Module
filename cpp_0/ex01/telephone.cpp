//
// Created by arnisfet on 28.01.2022.
//

#include "header.hpp"

Telephone::Telephone()
{
	std::cout << std::endl;
	std::cout << "██████╗ ██╗  ██╗ ██████╗ ███╗   ██╗███████╗██████╗  ██████╗  ██████╗ ██╗  ██╗" << std::endl;
	std::cout << "██╔══██╗██║  ██║██╔═══██╗████╗  ██║██╔════╝██╔══██╗██╔═══██╗██╔═══██╗██║ ██╔╝" << std::endl;
	std::cout << "██████╔╝███████║██║   ██║██╔██╗ ██║█████╗  ██████╔╝██║   ██║██║   ██║█████╔╝ " << std::endl;
	std::cout << "██╔═══╝ ██╔══██║██║   ██║██║╚██╗██║██╔══╝  ██╔══██╗██║   ██║██║   ██║██╔═██╗ " << std::endl;
	std::cout << "██║     ██║  ██║╚██████╔╝██║ ╚████║███████╗██████╔╝╚██████╔╝╚██████╔╝██║  ██╗" << std::endl;
	std::cout << "╚═╝     ╚═╝  ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════╝╚═════╝  ╚═════╝  ╚═════╝ ╚═╝  ╚═╝" << std::endl;
	this->amount = 0;
	std::cout << std::endl;
	std::cout << "Active commands: \"ADD\" \"SEARCH\" \"EXIT\"" << std::endl;
}

void Telephone::add_contact(void)
{
	if (this->amount > 7)
		this->contacts[this->amount - 8].set_information(this->amount + 1 - 8);
	else
		this->contacts[this->amount].set_information(this->amount + 1);
	this->amount++;
}

void Telephone::search_header(void)
{
	{
		std::cout << "|-------------------------------------------|" << std::endl;
		std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
		std::cout << "|-------------------------------------------|" << std::endl;
		for (int i = 0; i < this->amount; i++)
		{
			if (i > 7)
				continue ;
			this->contacts[i].display_header();
		}
		std::cout << "|-------------------------------------------|" << std::endl;
	}
}

void Telephone::search_contact(void)
{
	int index = 0;
	if (this->amount == 0)
		std::cout << "Telephone book ie empty!";
	else
	{
		search_header();
		std::cout << "Enter the index for searching contact" << std::endl;
		std::cin >> index;
		if (index <= 0 || index > this->amount || std::isdigit(index) != 0)
		{
			std::cin.clear();
			std::cout << "Invalid contact's index" << std::endl;
			std::cin.ignore();
		}
		else
			this->contacts[index - 1].display();
	}
}
