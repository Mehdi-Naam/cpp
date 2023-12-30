#ifndef HUMANA_HPP
#define HUMANA_HPP

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"
# define YELLOW "\033[1;33m"

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private :
		Weapon		&type;
		std::string	name;
	public :
		HumanA(std::string HunA, Weapon &wapn);
		void	attack(void);
};

#endif