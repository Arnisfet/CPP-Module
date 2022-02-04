//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon weapon;
	std::string name;
public:
	HumanA();
	attack();
};

#endif //EX03_HUMANA_HPP
