//
// Created by arnisfet on 10.02.2022.
//

#ifndef EX01_SCAVTRAP_H
#define EX01_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string const &name);
	~ScavTrap();

	// member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
};


#endif //EX01_SCAVTRAP_H
