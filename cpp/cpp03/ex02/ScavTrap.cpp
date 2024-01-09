#include "ScavTrap.hpp"

void	ScavTrap::gudGate() {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){

	std::cout << name << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap() {

	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap() {

	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &opr) {

	if (this != &opr)
		*this = opr;
	return *this;
}
