#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;


class Bureaucrat
{
	private:

		std::string _name;
		int			_grade;
		int			_grade_max;
		int			_grade_min;
	public:

		class GradeTooHighException : public std::exception {
			public :
				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw();
		};
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat& operator=(const Bureaucrat& opr);
		std::string getName(void) const ;
		int			getGrade(void) const ;
		void		increment_g();
		void 		decrement_g();
		void		signForm(AForm& frm);
		void		executeForm(AForm const& form);
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &opr, Bureaucrat &bur);

#endif
