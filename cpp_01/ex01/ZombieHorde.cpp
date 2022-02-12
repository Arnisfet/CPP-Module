//
// Created by arnisfet on 04.02.2022.
//

#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name)
{
	Zombie *Horde;

	Horde = NULL;
	if (N <= 0)
		return (NULL);
	Horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		std::string tmpName = name;
		Horde[i] = Zombie(tmpName);
	}
	return (Horde);
}