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

int	Bureaucrat::getGrade() const {

	return _grade;
}

std::string Bureaucrat::getName() const {

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

	if (_grade < _grade_min)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrement_g() {

	if (_grade > _grade_max)
		throw GradeTooLowException();
	_grade += 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name), _grade(cpy._grade) {
}

std::ostream &operator<<(std::ostream &opr, Bureaucrat& bur) {

	opr << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return opr;
}

void	Bureaucrat::signForm(Form& frm) {

	try {
		frm.beSigned(*this);
		std::cout << _name << " signed " << frm.getName() << std::endl;
	}
	catch (std::exception &er) {
		std::cout << _name << " couldn't sign " << frm.getName() << " because ";
		std::cout << er.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {

}
