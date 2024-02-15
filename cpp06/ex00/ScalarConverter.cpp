#include "ScalarConverter.hpp"

int isflot(const std::string & conv) {

	for (int i = 0; conv[i]; i++) {
		if (conv[i] == 'f')
		{
			if (conv.length() - 1 != static_cast<size_t>(i))
				return 0;
			return 1;
		}
	}
	return 0;
}

int	ischaracter(const std::string & conv) {

	char character = std::atoi(conv.c_str());

	if (conv.length() == 1 && isalpha(static_cast<int>(conv[0]))) {

		std::cout << "char	: \'" << conv[0] << "'" << std::endl;
		std::cout << "int	: " << static_cast<int>(conv[0]) << std::endl;
		std::cout << "float	: " << static_cast<int>(conv[0]) << ".0f" << std::endl;
		std::cout << "Double	: " << static_cast<int>(conv[0]) << ".0f" << std::endl;
		return 1;
	}
	else if (isprint(character))
		std::cout << "char	: '" << character << "'" << std::endl;
	else
		std::cout << "char	: is inposble to print character!!" << std::endl;
	return 0;
}

int	isDouble(const std::string & conv) {

	char *ptr_d;
	double hold_dbl = std::strtod(conv.c_str(), &ptr_d);


	if (!(*ptr_d) || isflot(conv)) {

		if (hold_dbl < -2147483648 || hold_dbl > 2147483647)
			std::cout << "int	: num overflow!!" << std::endl;
		else {

			std::cout << "int	: " << static_cast<int>(hold_dbl) << std::endl;
		}

		float flot = static_cast<float>(hold_dbl);
		if (fmod(flot, 2) == 0 || fmod(flot, 2) == 1)
			std::cout << "float	: " << flot << ".0f" << std::endl;
		else
			std::cout << "float	: " << flot << "f" << std::endl;
	
		if (fmod(hold_dbl, 2) == 0 || fmod(hold_dbl, 2) == 1)
			std::cout << "Double	: " << hold_dbl << ".0" << std::endl;
		else
			std::cout << "Double	: " << hold_dbl << std::endl;
		
		return (1);
	}
	return (0);
}

void	ScalarConverter::convert(const std::string &conv) {

	if (ischaracter(conv))
		return ;

	else if (!conv.compare("+inff") || !conv.compare("-inff") || !conv.compare("+inf")) {

		std::cout << "int	: is inposble to print character!!" << std::endl;
		std::cout << "float	: " << conv[0] << "inff" << std::endl;
		std::cout << "Double	: " << conv[0] << "inf" << std::endl;
	}

	else if (isDouble(conv))
		return ;

	else {
		
		std::cout << "int	: is inposble to print character!!" << std::endl;
		std::cout << "float	: is inposble to print character!!" << std::endl;
		std::cout << "Double	: is inposble to print character!!" << std::endl;
	}
}
