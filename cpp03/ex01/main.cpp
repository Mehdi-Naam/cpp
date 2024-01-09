#include "ScavTrap.hpp"

int main() {

	ScavTrap a ("aziz");
	a.takeDamage(910);
	{
		ScavTrap alexa ("sinshi");

		alexa = a;
		std::cout << std::endl;
		alexa.takeDamage(55);
		std::cout << std::endl;
	}
	// ClapTrap s("sinshi");
	// a.attack("zaki");
	// s.attack("mehdi");
	// a.guardGate();

	// a.takeDamage(10);
	// a.attack("zaki");
}
