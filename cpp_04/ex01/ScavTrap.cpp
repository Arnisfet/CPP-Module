//
// Created by arnisfet on 10.02.2022.
//

#include "ScavTrap.h"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string const &name)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->_name = name;
	this->_HitPoints =  100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing "
	<<	_HitPoints << " points of damage!\n";
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints == 0)
		return ;
	_HitPoints -= amount;
	_EnergyPoints--;
	std::cout << _name << "> takes damage for "<< amount << " hit points"
	<< std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints <= 0 || _EnergyPoints == 0)
		return ;
	_HitPoints += amount;
	_EnergyPoints--;
	std::cout << _name << "> takes hill for "<< amount << " points"
	<< std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
