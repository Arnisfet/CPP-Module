//
// Created by arnisfet on 10.02.2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string &name) : ClapTrap(name)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_HitPoints =  100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	_HitPoints =  other._HitPoints;
	_EnergyPoints = other._EnergyPoints;
	_AttackDamage = other._AttackDamage;
}