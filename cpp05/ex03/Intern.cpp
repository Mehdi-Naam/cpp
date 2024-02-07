#include "Intern.hpp"

Intern::Intern() {

}

Intern::Intern(const Intern& cpy) {
	(void)cpy;
}

Intern& Intern::operator=(const Intern& opr) {
	(void)opr;
	return *this;
}

int ft_true(std::string level)
{
	if (!level.compare("ShrubberyCreation") || !level.compare("PresidentialPardon") || !level.compare("RobotomyRequest"))
		return 1;
	return 0;
}


AForm* Intern::makeForm(std::string name, std::string target) {

	// CONDITION TO BE SURE OF THE LEVEL
	if (!ft_true(name))
		return NULL;

	std::cout << "Intern creates " << target << std::endl;
	switch(name[0]) {
		case 'S':
			return new ShrubberyCreationForm(target);
		case 'R':
			return new PresidentialPardonForm(target);
		case 'P':
			return new RobotomyRequestForm(target);
	}
	return NULL;
}

Intern::~Intern() {

}

