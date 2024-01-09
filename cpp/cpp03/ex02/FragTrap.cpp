#include "FragTrap.hpp"

FragTrap::FragTrap() {

	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){

	std::cout << name << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap() {

	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &opr) {

	if (this != &opr)
		*this = opr;
	return *this;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "i am soo fuching happ :) :)" << std::endl;
}
