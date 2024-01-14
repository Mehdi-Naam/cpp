#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string arr[100];
	public:
		Brain();
		Brain(const Brain &cpy);
		Brain& operator=(const Brain &opr);
		~Brain();
};

#endif