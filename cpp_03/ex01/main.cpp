#include "ClapTrap.h"
#include "ScavTrap.h"

int main() {
	std::string name = "Morris";
	std::string name2 = "Catalina";
	ClapTrap Morris(name);
	ScavTrap Catalina(name2);
	Morris.attack("ZOmbie");
	Morris.takeDamage(9);
	Morris.beRepaired(9);
	Morris.beRepaired(9);
    return 0;
}
