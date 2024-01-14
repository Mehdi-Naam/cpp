#include "Animal.hpp"

Animal::Animal() {
	
	std::cout << "Default constructor from Animal" << std::endl;
}

Animal::Animal(std::string animal) {

	type = animal;
	std::cout << type << " :constructor from Animal" << std::endl;
}

Animal::~Animal() {

	std::cout << "Default destructor from Animal" << std::endl;
}

Animal::Animal(const Animal& cpy) {

	type = cpy.type;
	std::cout << type << ": copy constructor from Animal" << std::endl;
}

Animal& Animal::operator=(const Animal& opr) {

	if (this != &opr)
		this->type = opr.type;
	return *this;
}

void Animal::makeSound(void) const {

	std::cout << "Sound from Animal" << std::endl;
}

std::string Animal::getType(void) const{

	return (type);
}
