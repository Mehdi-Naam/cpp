#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("aziz", 145, 137) {

	_target = "Shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("aziz", 145, 137), _target(target) {

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& cpy) : _target(cpy._target) {

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& opr) {

	if (this != &opr)
		_target = opr._target;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const {

	executorForm(executor);

	std::ofstream outfile( _target + "_shrubbery");

	outfile << "                    # #### ####					" << std::endl;
    outfile << "                 ### \\/#|### |/####			" << std::endl;
    outfile << "                ##\\/#/ \\||/##/_/##/_#			" << std::endl;
    outfile << "              ###  \\/###|/ \\/ # ###			" << std::endl;
    outfile << "            ##_\\_#\\_\\## | #/###_/_####		" << std::endl;
    outfile << "           ## #### # \\ #| /  #### ##/##		" << std::endl;
    outfile << "            __#_--###`  |{,###---###-~			" << std::endl;
    outfile << "                      \\ -}{					" << std::endl;
    outfile << "                       }}{						" << std::endl;
    outfile << "                       }}{						" << std::endl;
    outfile << "                       {{}						" << std::endl;
    outfile << "                 , -=-~{ .-^- _					" << std::endl;
    outfile << "                       `}						" << std::endl;
    outfile << "                        {						" << std::endl;

	outfile.close();
}
