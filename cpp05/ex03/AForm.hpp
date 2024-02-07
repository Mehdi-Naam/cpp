#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>
class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_ind;
		const int			_grade_sign;
		const int			_grade_exec;
	public:
		AForm();
		AForm(std::string name, int grd_exec, int grd_sign);
		AForm(const AForm &cpy);
		AForm &operator=(const AForm &opr);
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
		virtual void	execute(Bureaucrat const & executor) const = 0 ;
		void	executorForm(const Bureaucrat& exc) const;
		~AForm();
};

std::ostream &operator<<(std::ostream &opr, AForm &frm);

#endif