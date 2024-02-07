#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("aziz", 25, 5) {

	_target = "Presid";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("aziz", 25, 5), _target(target) {

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& cpy) : _target(cpy._target) {

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& opr) {

	if (this != &opr)
		_target = opr._target;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {

	executorForm(executor);

	std::cout << _target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}