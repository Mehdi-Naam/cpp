#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_ind;
		const int			_grade_sign;
		const int			_grade_exec;
	public:
		Form();
		Form(std::string name, int grade);
		Form(const Form &cpy);
		Form &operator=(const Form &opr);
		std::string getName() const ;
		int getGraSign() const ;
		int getGraExec() const ;
		bool getInd() const ;
		class GradeTooHighException : public std::exception {
			public :
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public :
				const char *what() const throw();
		};
		void	beSigned(Bureaucrat& bur);
		~Form();
};

std::ostream &operator<<(std::ostream &opr, Form &frm);

#endif