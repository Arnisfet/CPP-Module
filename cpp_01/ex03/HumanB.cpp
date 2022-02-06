//
// Created by arnisfet on 04.02.2022.
//

#include "HumanB.hpp"

HumanB::~HumanB() {
	std::cout << "HumanA's destructor has been called!" << std::endl;
}

void HumanB::attack() {
	std::cout << _name << " attacks with his " <<  _weapon->getType() << std::endl;
}


HumanB::HumanB(const std::string& pName) : _name(pName) { }

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}

void HumanB::setName(const std::string &name) {
	_name = name;
}