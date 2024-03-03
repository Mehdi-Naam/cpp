#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("allo"), _grade(124) {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) , _grade(grade) {


	if (_grade > 150)
		throw GradeTooLowException();
	if (_grade < 1)
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

	if (_grade < 1)
		throw GradeTooHighException();
	_grade -= 1;
}

void	Bureaucrat::decrement_g() {

	if (_grade > 150)
		throw GradeTooLowException();
	_grade += 1;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) : _name(cpy._name), _grade(cpy._grade) {
}

std::ostream &operator<<(std::ostream &opr, Bureaucrat& bur) {

	opr << bur.getName() << ", bureaucrat grade " << bur.getGrade();
	return opr;
}

void	Bureaucrat::signForm(AForm& frm) {

	try {
		frm.beSigned(*this);
		std::cout << _name << " signed " << frm.getName() << std::endl;
	}
	catch (std::exception &er) {
		std::cout << _name << " can't sign " << frm.getName() << " because ";
		std::cout << er.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form) {

	try {
		form.execute(*this);
		std::cout << _name << " execute " << form.getName() << std::endl;
	}
	catch (std::exception &er) {
		std::cout << _name << " can't execute " << form.getName() << " because ";
		std::cout << er.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat() {

}
