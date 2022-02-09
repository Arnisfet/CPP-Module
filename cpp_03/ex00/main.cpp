#include "ClapTrap.h"

int main() {
	std::string name = "Morris";
	ClapTrap Morris(name);
	Morris.attack("ZOmbie");
	Morris.takeDamage(9);
	Morris.beRepaired(9);
	Morris.beRepaired(9);
    return 0;
}
