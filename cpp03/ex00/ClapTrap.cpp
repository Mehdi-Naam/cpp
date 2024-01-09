#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string _name) : Hit_points(10), Energy_points(10), Attack_damage(0) {

	name = _name;
	std::cout << name << ": ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap() {
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {

	std::cout << "Default ClapTrap distracutor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &opr) {

	if (this != &opr) {

		this->name = opr.name;
		this->Hit_points = opr.Hit_points;
		this->Energy_points = opr.Energy_points;
		this->Attack_damage = opr.Attack_damage;
	}
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

	if ((this->Energy_points <= 0 || (int)amount < 0 ) && Hit_points > 0) {

		amount = 0;
		this->Energy_points = 0;
		std::cout << "Be Repaired salam " << amount << std::endl;
	}
	else if (Hit_points > 0) {

		this->Energy_points -= 1;
		this->Hit_points += amount;
		std::cout << "Be Repaired " << amount << std::endl;
	}
	else
		std::cout << "is already deid -- can't rePaired" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {

	name = cpy.name;
	Hit_points = cpy.Hit_points;
	Energy_points = cpy.Energy_points;
	Attack_damage = cpy.Attack_damage;
	std::cout << name << ": ClapTrap copy constructor called" << std::endl;
}
