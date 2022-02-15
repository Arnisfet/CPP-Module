//
// Created by arnisfet on 14.02.2022.
//

#ifndef EX02_FRAGTRAP_H
#define EX02_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap
{
public:
	FragTrap(std::string const &name);
	~FragTrap();
	void highFivesGuys(void);
	void attack (const std::string &target);
};


#endif //EX02_FRAGTRAP_H
