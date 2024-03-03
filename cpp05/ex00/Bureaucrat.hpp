#ifndef __BUREAUCRAT__
#define __BUREAUCRAT__

#include <iostream>

class Bureaucrat
{
	private:

		std::string _name;
		int			_grade;

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
		std::string getName(void);
		int			getGrade(void);
		void		increment_g();
		void 		decrement_g();
		~Bureaucrat();
};

std::ostream &operator<<(std::ostream &opr, Bureaucrat &bur);

#endif