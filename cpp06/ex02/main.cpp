#include "Base.hpp"
#include "utile.hpp"

void generator( void ) {

	Base *b = generate();
	identify(b);
	identify(*b);
	delete b;
}

int main(){
	generator();
}
