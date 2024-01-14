#include "Brain.hpp"
#include "Animal.hpp"

Brain::Brain() {
	
	std::cout << "Default constructor from Brain" << std::endl;
}

Brain::~Brain() {

	std::cout << "Default destructor from Brain" << std::endl;
}

Brain::Brain(const Brain& cpy) {

	for (int i = 0; i < 100; i++)
		this->arr[i] = cpy.arr[i];	
	std::cout << ": copy constructor from Brain" << std::endl;
}

Brain& Brain::operator=(const Brain& opr) {

	if (this != &opr)
		for (int i = 0; i < 100; i++)
			this->arr[i] = opr.arr[i];
	return *this;
}
