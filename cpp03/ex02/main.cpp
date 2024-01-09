#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {

	ScavTrap St;
	FragTrap Ft;
	St.gudGate();
	Ft.attack("Mehdi");
	Ft.takeDamage(10);
	Ft.attack("zaki");
	Ft.highFivesGuys();
}
