#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {

	std::cout << "Default constructor from Dog" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy) {

	std::cout << "copy constructor from Dog" << std::endl;
}

Dog::~Dog() {

	std::cout << "Default destructor from Dog" << std::endl;
}

Dog& Dog::operator=(const Dog& opr) {

	if (this != &opr)
		this->type = opr.type;
	return (*this);
}

void Dog::makeSound(void) const {

	std::cout << "Sound from Dog Hw!!" << std::endl;
}