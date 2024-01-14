#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria {

	public:
		Ice();
		Ice(const Ice& cpy);
		Ice& operator=(const Ice& opr);
		AMateria* clone() const;
		~Ice();
		void use(ICharacter& target);

};

#endif