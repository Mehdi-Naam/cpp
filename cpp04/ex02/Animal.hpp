#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(std::string animal);
		Animal(const Animal &cpy);
		Animal& operator=(const Animal &opr);
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
		std::string getType(void) const;
};

#endif