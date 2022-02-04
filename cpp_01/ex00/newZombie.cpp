//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	return new Zombie(name);
}