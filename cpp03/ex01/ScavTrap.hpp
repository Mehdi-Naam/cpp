#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap {

	public:
		void	guardGate();
		ScavTrap(const ScavTrap &cpy);
		ScavTrap(std::string _name);
		ScavTrap& operator=(const ScavTrap &opr);
		ScavTrap();
		~ScavTrap();
};

#endif