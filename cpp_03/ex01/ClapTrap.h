//
// Created by VKoliukh on 09.02.2022.
//

#ifndef EX00_CLAPTRAP_H
#define EX00_CLAPTRAP_H

#include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string &name);
	~ClapTrap();

	// member functions
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
private:
	std::string _name;
	int _HitPoints;
	int _EnergyPoints;
	int _AttackDamage;
};


#endif //EX00_CLAPTRAP_H
