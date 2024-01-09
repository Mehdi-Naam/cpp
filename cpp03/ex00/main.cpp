#include "ClapTrap.hpp"

int main() {

	ClapTrap a("Mehdi");
	a.attack("zaki");
	a.takeDamage(9);
	a.beRepaired(11);
	a.takeDamage(12);
	a.attack("zaki");
}
