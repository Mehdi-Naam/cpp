#include "ScavTrap.hpp"

void	ScavTrap::guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name){

	std::cout << name << ": ScavTrap constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::ScavTrap(): ClapTrap("defScav") {

	std::cout << "Default ScavTrap constructor called" << std::endl;
	Hit_points = 100;
	Energy_points = 50;
	Attack_damage = 20;
}

ScavTrap::~ScavTrap() {

	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &opr) {

	if (this != &opr) {
	
		this->name = opr.name;
		this->Hit_points = opr.Hit_points;
		this->Energy_points_points = opr.Energy_points_points;
		this->Attack_damage = opr.Attack_damage;
	}	
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &cpy) {

	*this = cpy;
	std::cout << name << ": ScavTrap copy constructor called" << std::endl;
}