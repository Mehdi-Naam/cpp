#ifndef Dog_HPP
#define Dog_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {

	public:
		Dog();
		Dog(const Dog& Dog);
		Dog& operator=(const Dog &opr);
		~Dog();
		void makeSound(void) const;
};

#endif
