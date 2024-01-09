#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	name;
	int	Hit_points;
	int	Energy_points;
	int	Attack_damage;

public:
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap &cpy);
	ClapTrap& operator=(const ClapTrap &opr);
	~ClapTrap();
	ClapTrap();
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
