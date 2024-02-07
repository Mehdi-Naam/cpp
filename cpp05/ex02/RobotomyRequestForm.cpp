#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("aziz", 72, 45) {

	_target = "Robot";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("aziz", 72, 45), _target(target) {

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : _target(cpy._target) {

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& opr) {

	if (this != &opr)
		_target = opr._target;
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {

	executorForm(executor);
	srand( time(NULL) );

	int check = rand() % 2;

	if (!check)
		std::cout << _target << "has been robotomized successfully 50% of the time. " << std::endl;
	std::cout << _target << "has been fald robotomized. " << std::endl;
}
