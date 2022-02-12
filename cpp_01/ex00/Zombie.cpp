//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie's constructor" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie's destructor" << std::endl;
}

void Zombie::announce()
{
	std::cout << _name << " :BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	_name = name;
}