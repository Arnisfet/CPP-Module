//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon weapon;
	std::string name;
public:
	HumanB();
	attack();
};

#endif //EX03_HUMANB_HPP
