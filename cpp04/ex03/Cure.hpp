#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria {

	public:
		Cure();
		Cure(const Cure& cpy);
		Cure& operator=(const Cure& opr);
		AMateria* clone() const;
		~Cure();
		void use(ICharacter& target);
};

#endif