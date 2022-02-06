//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include "Weapon.hpp"


class HumanA {
public:

	HumanA(std::string const &name, Weapon &weapon);
	~HumanA();

	void attack();

private:

	Weapon &_weapon;
	std::string _name;
};


#endif //EX03_HUMANA_HPP
