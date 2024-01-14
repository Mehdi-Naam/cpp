#include "Animal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {

	std::cout << "Default constructor from Dog" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& cpy) : Animal(cpy) {

	std::cout << "copy constructor from Dog" << std::endl;
	brain = new Brain(*cpy.brain);
}

Dog::~Dog() {

	std::cout << "Default destructor from Dog" << std::endl;
	delete brain;
}

Dog& Dog::operator=(const Dog& opr) {

	if (this != &opr)
	{
		this->type = opr.type;
		delete brain;
		brain = new Brain(*opr.brain);
	}
	return (*this);
}

void Dog::makeSound(void) const {

	std::cout << "Sound from Dog Hw!!" << std::endl;
}