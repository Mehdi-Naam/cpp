#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const& type) {

	_type = type;
}

AMateria::AMateria(const AMateria& cpy) {

	_type = cpy._type;
}

AMateria& AMateria::operator=(const AMateria& cpy) {

	if (this != &cpy)
		_type = cpy._type;
	return *this;
}

std::string	const& AMateria::getType() const {

	return _type;
}

void AMateria::use(ICharacter& target) {

	(void)target;
}

