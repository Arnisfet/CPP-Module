//
// Created by arnisfet on 04.02.2022.
//

#ifndef EX00_ZOMBIE_HPP
#define EX00_ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();
	void announce(void );
	explicit Zombie(std::string name);
};

Zombie *zombieHorde( int N, std::string name);

#endif //EX00_ZOMBIE_HPP
