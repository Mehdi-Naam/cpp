#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("DefFrag") {

	std::cout << "Default FragTrap constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name){

	std::cout << name << ": FragTrap constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 100;
	Attack_damage = 30;
}

FragTrap::~FragTrap() {

	std::cout << name << ": Destructor FragTrap called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &opr) {

	if (this != &opr) {

		this->name = opr.name;
		this->Hit_points = opr.Hit_points;
		this->Energy_points_points = opr.Energy_points_points;
		this->Attack_damage = opr.Attack_damage;
	}
	return *this;
}

void FragTrap::highFivesGuys(void) {

	std::cout << "i am soo fuching happy :) :)" << std::endl;
}

FragTrap::FragTrap(const FragTrap &cpy) {

	*this = cpy;
	std::cout << name << ": FragTrap copy constructor called" << std::endl;
}