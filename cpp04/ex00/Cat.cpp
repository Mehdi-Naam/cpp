#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat() : Animal("Cat") {

	std::cout << "Default constructor from Cat" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy) {

	std::cout << "copy constructor from Cat" << std::endl;
}

Cat::~Cat() {

	std::cout << "Default destructor from Cat" << std::endl;
}

Cat& Cat::operator=(const Cat& opr) {

	if (this != &opr)
		this->type = opr.type;
	return (*this);
}

void Cat::makeSound(void) const {

	std::cout << "Sound from cat miw!!" << std::endl;
}