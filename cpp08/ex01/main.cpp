#include "Span.hpp"

int main()
{
	try {

		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(2);
		sp.addNumber(17);
		sp.addNumber(11);
		sp.addNumber(16);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} 
	catch(std::exception& e) {
		std::cout << e.what();
	}
	return 0;
}
