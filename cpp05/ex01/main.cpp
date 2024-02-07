#include "Form.hpp"

int main() {

	try
	{
		Bureaucrat bur2("Zaki", 20);
		Form bur1("mehdi", 120);
		bur2.signForm(bur1);
		std::cout << bur1 << std::endl;
		std::cout << bur2 << std::endl;

	}
	catch (std::exception & e)
	{
		std::cout << "Exception Catched: ";
		std::cout << e.what();
	}
}
