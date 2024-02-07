#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {

	try
	{
		Intern bur1;
		ShrubberyCreationForm bur("mehdi");
		Bureaucrat bur2("Zaki", 50);
		// bur.execute(bur2);
		// std::cout << bur2 << std::endl;
		AForm* my_form =  bur1.makeForm("ShrubberyCreation", "mehdo");


		// my_form->execute(bur2);
		bur2.executeForm(bur);
	}
	catch (std::exception & e)
	{
		std::cout << "Exception Catched: ";
		std::cout << e.what();
	}
}
