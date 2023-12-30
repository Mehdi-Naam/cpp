#ifndef HUMANB_HPP
#define HUMANB_HPP

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"
# define YELLOW "\033[1;33m"

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private :
		Weapon *type;
		std::string	name;
	public :
		HumanB(std::string HunB);
		void	setWeapon(Weapon& wapn);
		void	attack(void);
};

#endif
