#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

int main() {
	ClapTrap Junior("Junior");
	ScavTrap Catalina("Catalina");
	FragTrap Frog("Frog");

	Catalina.takeDamage(10);
	Catalina.takeDamage(10);
	for (int i = 0; i < 10; i++)
		Catalina.beRepaired(10);
	for (int i = 0; i < 10; i++)
		Junior.beRepaired(10);
	Frog.highFivesGuys();
    return 0;
}
