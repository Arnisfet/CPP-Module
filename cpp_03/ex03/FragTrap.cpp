//
// Created by arnisfet on 14.02.2022.
//

#include "FragTrap.h"


FragTrap::FragTrap(const std::string &name)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->_name = name;
	this->_HitPoints =  100;
	this->_EnergyPoints = 100;
	this->_AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	std::cout << "FragTrap " << _name << " attacks " << target << " causing ";
	std::cout << _HitPoints << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "Give high FIVE request!" << std::endl;

	std::cout << "\033[1;32m";

	std::cout << "   _.-._" << std::endl;
	std::cout << "  | | | |_ " << std::endl;
	std::cout << "  | | | | | " << std::endl;
	std::cout << "  | | | | | " << std::endl;
	std::cout << "_ |  '-._ | " << std::endl;
	std::cout << "\\`\\`-.'-._; " << std::endl;
	std::cout << " \\    '   | " << std::endl;
	std::cout << "  \\  .`  / " << std::endl;
	std::cout << "   |    | " << std::endl;

	std::cout << "\033[0m";
}