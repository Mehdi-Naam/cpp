#include "utile.hpp"

Base * generate(void) {

	srand ( time(NULL) );
	int cs = 1 + rand() % 3;
	switch (cs)
	{
		case 1 :
			return new A;
		case 2 :
			return new B;
		case 3 :
			return new C;
	}
	return NULL;
}

void identify(Base* p) {

	if (dynamic_cast<A*>(p))
		std::cout << "Pointe to Class A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Pointe to Class B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Pointe to Class C" << std::endl;
	else
		std::cout << "don't Pointe to in Class" << std::endl;
}

void identify(Base& p) {

	try {
	 
		(void)dynamic_cast<A&>(p);
		std::cout << "Pointe to Class A" << std::endl;
	} catch(...) {}
	try {
	 
		(void)dynamic_cast<B&>(p);
		std::cout << "Pointe to Class B" << std::endl;
	} catch(...) {}
	try {
	 
		(void)dynamic_cast<C&>(p);
		std::cout << "Pointe to Class C" << std::endl;
	} catch(...) {}
}
