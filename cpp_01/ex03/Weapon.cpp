//
// Created by arnisfet on 04.02.2022.
//

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon's constructed has called!" << std::endl;
}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(std::string tmpType)
{
	set = tmpType;
}