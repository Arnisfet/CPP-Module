//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

int main()
{
	Zombie z1(std::string("Rick"));
	z1.announce();

	Zombie *z2;
	z2 = newZombie("Carl");
	z2->announce();

	randomChamp("Nigan");

	delete z2;
}