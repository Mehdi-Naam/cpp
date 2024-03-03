#include "Bureaucrat.hpp"
#include "Bureaucrat.hpp"

int main() {

	try
	{
		Bureaucrat bur;
		std::cout << bur << std::endl;

		Bureaucrat bur1("mehdi", 0);
		bur1.decrement_g();
		std::cout << bur1 << std::endl;

		Bureaucrat bur2("Zaki", 20);
		bur2.increment_g();
		std::cout << bur2 << std::endl;

	}
	catch (std::exception & e)
	{
		std::cout << e.what();
	}
}
