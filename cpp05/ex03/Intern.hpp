#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{

	public:
		Intern();
		Intern(const Intern& cpy);
		Intern& operator=(const Intern& opr);
		AForm* makeForm(std::string name, std::string target);
		~Intern();
};


#endif