#include "RPN.hpp"

int	check_condition(char &check, std::stack<int>& stc) {

	if (check == ' ')
		return 1;
	if (check == '+' && stc.size() > 1) {
		int a = stc.top();
		stc.pop();
		int b = stc.top();
		stc.pop();
		stc.push(a + b);
	}
	else if (check == '-' && stc.size() > 1) {
		int a = stc.top();
		stc.pop();
		int b = stc.top();
		stc.pop();
		stc.push(b - a);
	}
	else if (check == '*' && stc.size() > 1) {
		int a = stc.top();
		stc.pop();
		int b = stc.top();
		stc.pop();
		stc.push(a * b);
	}
	else if (check == '/' && stc.size() > 1) {
		int a = stc.top();
		stc.pop();
		int b = stc.top();
		stc.pop();
		if (a != 0)
			stc.push(b / a);
	}
	else if (isdigit(check)) {
		stc.push(check - 48);
	}
	else {
		std::cout << "0" << std::endl;
		return 0;
	}
	return 1;
}


void	RPN(std::string _av) {

	std::stack<int> stc;

	if ( _av.find(' ', 0) != std::string::npos) {
		for (size_t x = 0; x < _av.length(); x++) {
			if (_av.length() <= 2) {
				std::cout << "Error" << std::endl;
				return ;
			}
			if (isdigit(_av[x]) && _av[x + 1] != ' ')
				return ;
			if(check_condition(_av[x], stc) == 0)
				return ;
		}
	}
	else
		std::cout << "we dont have a spc!!" << std::endl;
	if (stc.size() == 1)
		std::cout << stc.top() << std::endl;
	else
		std::cout << "Error" << std::endl;
}
