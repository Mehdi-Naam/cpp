#include "Cure.hpp"
#include "AMateria.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::~Cure() {}

Cure::Cure(const Cure& cpy) : AMateria(cpy) {}

Cure& Cure::operator=(const Cure& opr) {

	AMateria::operator=(opr);
	return *this;
}

AMateria* Cure::clone() const {

	return new Cure;
}

void Cure::use(ICharacter& target) {

	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
