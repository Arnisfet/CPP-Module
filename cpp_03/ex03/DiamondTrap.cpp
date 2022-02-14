//
// Created by arnisfet on 14.02.2022.
//

#include "DiamondTrap.h"

DiamondTrap::~DiamondTrap()
{

}

DiamondTrap::(std::string const &name)
{
	ClapTrap(name + "_clap_name");
	m_HitPoints = 100;
	m_EnergyPoints = 50;
	m_AttackDamage = 30;
	std::cout << "DiamondTrap constructor called." << std::endl;
}