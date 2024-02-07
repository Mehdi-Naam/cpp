#include "AForm.hpp"
#include "Bureaucrat.hpp"


class ShrubberyCreationForm : public AForm {

	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &cpy);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &opr);
		void	 execute(Bureaucrat const & executor) const;
};