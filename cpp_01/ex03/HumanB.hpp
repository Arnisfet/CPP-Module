//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX03_HUMANB_HPP
#define EX03_HUMANB_HPP

#include "Weapon.hpp"


class HumanB {
public:
	explicit HumanB(const std::string &pName);
	~HumanB();

	void attack();

	void setWeapon(Weapon &weapon);

	void setName(std::string const &name);

private:
	Weapon *_weapon;
	std::string _name;
};

#endif //EX03_HUMANB_HPP
