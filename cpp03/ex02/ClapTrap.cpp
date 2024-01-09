#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : Hit_points(100), Energy_points(100), Attack_damage(30) {

	name = _name;
	std::cout << name << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap() {

	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &opr) {

	if (this != &opr)
		*this = opr;
	return *this;
}

void	ClapTrap::attack(const std::string& target) {

	if (Hit_points <= 0)
	{
		Hit_points = 0;
		std::cout << "he is deid" << std::endl;
		return ;
	}
	if (this->Energy_points <= 0)
		this->Energy_points = 0;
	this->Energy_points -= 1;
	std::cout << "ClapTrap " << name << " attack " << target << " causing " << Attack_damage <<  " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {

	if ((int)amount < 0)
		return ;
	if (this->Hit_points <= 0)
	{
		amount = 0;
		this->Hit_points = 0;
		std::cout << "he is deid" << std::endl;
		return ;
	}
	else{

		this->Hit_points -= amount;
		std::cout << "Take Damage " << amount << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {

	if (this->Energy_points <= 0 || (int)amount < 0) {

		amount = 0;
		this->Energy_points = 0;
		std::cout << "Be Repaired salam " << amount << std::endl;
	}
	else {

		this->Energy_points -= 1;
		this->Hit_points += amount;
		std::cout << "Be Repaired " << amount << std::endl;
	}
}
