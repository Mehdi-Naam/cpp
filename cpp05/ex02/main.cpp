#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	try
	{
		ShrubberyCreationForm bur("mehdi");
		Bureaucrat bur2("Zaki", 150);
		std::cout << "here" << std::endl;
		bur.execute(bur2);
		std::cout << bur2 << std::endl;

	}
	catch (std::exception & e)
	{
		std::cout << "Exception Catched: ";
		std::cout << e.what();
	}
}
