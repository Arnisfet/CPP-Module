//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

int main()
{
	int N;
	std::string NAME;
	Zombie *z;

	NAME = "Zombie";
	N = 3;
	z = zombieHorde(N, NAME);
	if (!z)
		return (1);
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
	return (0);
}