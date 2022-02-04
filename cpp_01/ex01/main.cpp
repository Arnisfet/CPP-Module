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
	N = 6;
	z = zombieHorde(N, NAME);
	if (!z)
		return (EXIT_FAILURE);
	for (int i = 0; i < N; i++)
		z[i].announce();
	delete[] z;
	return (EXIT_SUCCESS);
}