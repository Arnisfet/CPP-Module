//
// Created by arnisfet on 14.02.2022.
//

#ifndef EX03_DIMONDTRAP_H
#define EX03_DIMONDTRAP_H

#include "ScavTrap.h"
#include "FragTrap.h"

class DiamondTrap : public ScavTrap : public FragTrap
{
public:
	DimondTrap(std::string const &name);
	virtual ~DiamondTrap();
private:
	std::string _name;
};

#endif //EX03_DIMONDTRAP_H
