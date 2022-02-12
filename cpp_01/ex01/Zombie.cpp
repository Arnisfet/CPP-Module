//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Constructor!\n";
}

void Zombie::announce()
{
	std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	(void)name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor!\n";
}