#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") {

	std::cout << "Default constructor from Cat" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& cpy) : Animal(cpy) {

	std::cout << "copy constructor from Cat" << std::endl;
	brain = new Brain(*cpy.brain);
}

Cat::~Cat() {

	std::cout << "Default destructor from Cat" << std::endl;
	delete brain;
}

Cat& Cat::operator=(const Cat& opr) {

	if (this != &opr) {
		this->type = opr.type;
		delete brain;
		brain = new Brain(*opr.brain);
	}
	return (*this);
}

void Cat::makeSound(void) const {

	std::cout << "Sound from cat miw!!" << std::endl;
}