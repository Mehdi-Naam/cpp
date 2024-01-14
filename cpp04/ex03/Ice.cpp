#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::~Ice() {}

Ice::Ice(const Ice& cpy) : AMateria(cpy) {
}

Ice& Ice::operator=(const Ice& opr) {

	AMateria::operator=(opr);
	return *this;
}

AMateria* Ice::clone() const {

	return new Ice(*this);
}

void Ice::use(ICharacter& target) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
