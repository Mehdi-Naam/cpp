#include "AForm.hpp"

AForm::AForm() : _name("allo"), _grade_sign(145), _grade_exec(137) {

	_ind = false;
}

const char* AForm::GradeTooHighException::what() const throw() {

	const char *str = "to high thin grade\n";
	return  str;
}

const char* AForm::GradeTooLowException::what() const throw() {

	const char *str = "to low thin grade\n";
	return  str;
}

void	AForm::beSigned(Bureaucrat& bur) {

	if (bur.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_ind = true;
}

AForm::AForm(std::string name, int grd_exec, int grd_sign) : _name(name), _grade_sign(grd_sign), _grade_exec(grd_exec) {

	if (grd_exec < 1)
		throw GradeTooHighException();
	if (grd_exec > 150)
		throw GradeTooLowException();
	if (grd_sign < 1)
		throw GradeTooHighException();
	if (grd_sign > 150)
		throw GradeTooLowException();
	_ind = false;
}

void	AForm::executorForm(const Bureaucrat& exc) const {
	
	if (!(getInd() == true || _grade_exec > exc.getGrade()))
		throw GradeTooLowException();
}

AForm::AForm(const AForm& cpy) : _name(cpy._name), _grade_sign(cpy._grade_sign), _grade_exec(cpy._grade_exec) {

	_ind = cpy._ind;
}

AForm& AForm::operator=(const AForm& opr) {

	if (this != &opr)
		_ind = opr._ind;
	return *this;
}

std::string AForm::getName() const {

	return _name;
}

int AForm::getGraSign() const {

	return _grade_sign;
}

int AForm::getGraExec() const {

	return _grade_exec;
}

bool AForm::getInd() const {

	return _ind;
}

std::ostream &operator<<(std::ostream &opr, AForm &frm) {

	opr << "AForm name: " << frm.getName() << std::endl;
	opr << "grad exec: " << frm.getGraExec() << std::endl;
	opr << "grad sign: " << frm.getGraSign() << std::endl;
	opr << "indicating: " << frm.getInd() << std::endl;
	return opr;
}

AForm::~AForm() {

}