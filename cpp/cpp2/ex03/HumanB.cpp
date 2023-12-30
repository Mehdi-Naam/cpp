#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon& wapn) {

	type = &wapn;
	std::cout << RED << "constract of HumanB " << GREEN << "[" << name << "]" << WHITE << std::endl;
}

HumanB::HumanB(std::string HunB) {

	name = HunB;
}

void	HumanB::attack() {

	std::cout << YELLOW << "attaacks with their " << type->getType() << WHITE << std::endl;
}


