#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("allo"), _grade(124) {

	_grade_max = 150;
	_grade_min = 1;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade) {

	_grade_max = 150;
	_grade_min = 1;
	if (_grade > _grade_max)
		throw GradeTooLowException();
	if (_grade < _grade_min)
		throw GradeTooHighException();
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& opr) {

	if (this != &opr) {
		_name = opr._name;
		_grade = opr._grade;
	}
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name), _grade(cpy._grade) {
}

int	Bureaucrat::getGrade() {

	return _grade;
}

std::string Bureaucrat::getName() {

	return _name;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {

	const char *str = "to high thin grade";
	return  str;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {

	const char *str = "to low thin grade";
	return  str;
}

void	Bureaucrat::increment_g() {

	if (_grade <= _grade_min)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrement_g() {

	if (_grade >= _grade_max)
		throw GradeTooLowException();
	_grade += 1;
}

std::ostream &operator<<(std::ostream &opr, Bureaucrat& bur) {

	opr << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return opr;
}

Bureaucrat::~Bureaucrat() {

}
