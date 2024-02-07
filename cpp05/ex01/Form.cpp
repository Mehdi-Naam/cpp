#include "Form.hpp"

Form::Form() : _name("allo"), _grade_sign(1), _grade_exec(1) {

	_ind = false;
}

const char* Form::GradeTooHighException::what() const throw() {

	const char *str = "to high thin grade";
	return  str;
}

const char* Form::GradeTooLowException::what() const throw() {

	const char *str = "to low thin grade";
	return  str;
}

void	Form::beSigned(Bureaucrat& bur) {

	if (bur.getGrade() > _grade_sign)
		throw GradeTooLowException();
	_ind = true;
}

Form::Form(std::string name, int grade) : _name(name), _grade_sign(grade), _grade_exec(1) {

	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_ind = false;
}

Form::Form(const Form& cpy) : _name(cpy._name), _grade_sign(cpy._grade_sign), _grade_exec(cpy._grade_exec) {

	_ind = cpy._ind;
}

Form& Form::operator=(const Form& opr) {

	if (this != &opr)
		_ind = opr._ind;
	return *this;
}

std::string Form::getName() const {

	return _name;
}

int Form::getGraSign() const {

	return _grade_sign;
}

int Form::getGraExec() const {

	return _grade_exec;
}

bool Form::getInd() const {

	return _ind;
}

std::ostream &operator<<(std::ostream &opr, Form &frm) {

	opr << "Form name: " << frm.getName() << std::endl;
	opr << "grad exec: " << frm.getGraExec() << std::endl;
	opr << "grad sign: " << frm.getGraSign() << std::endl;
	opr << "indicating: " << frm.getInd() << std::endl;
	return opr;
}

Form::~Form() {

}