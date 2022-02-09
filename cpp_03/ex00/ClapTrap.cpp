//
// Created by VKoliukh on 09.02.2022.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	std::cout << "Standart constructor\n";
}

ClapTrap::ClapTrap(std::string &name)
{
	std::cout << "Name constructor called\n";
	_name = name;
	_HitPoints = 10;
	_EnergyPoints = 10;
	_AttackDamage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Standart destructor\n";
}

void ClapTrap::attack(const std::string &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing "
	<<	_HitPoints << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints == 0)
		return ;
	_HitPoints -= amount;
	_EnergyPoints--;
	std::cout << _name << "> takes damage for "<< amount << " hit points"
	<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints == 0)
		return ;
	_HitPoints += amount;
	_EnergyPoints--;
	std::cout << _name << "> takes hill for "<< amount << " points"
	<< std::endl;
}