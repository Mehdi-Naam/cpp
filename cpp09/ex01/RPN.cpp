#include "RPN.hpp"

void	check_condition(char &check, std::stack<int>& stc) {

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
	else {
		std::cout << "Error" << std::endl;
		exit (1);
	}
}

int is_true_num(std::string &str) {

	size_t j = 0;
	if ((str[j] == '-' || str[j] == '+'))
		j++;
	for (size_t i = j; i < str.length(); i++) {
		if (!isdigit(str[i]))
			return 0;
	}
	if (j == str.length() || atoi(str.c_str()) >= 10)
		return 0;
	return 1;
}

size_t	spc(std::string &str) {
	size_t i = 0;
	for (i = 0; i < str.length(); i++) {
		if (str[i] != ' ' && str[i] != '\t')
			break;
	}
	return i;
}

int check_sing(const std::string &str) {

	if (str.length() == 1)
		if (str[0] == '-' || str[0] == '+' || str[0] == '*' || str[0] == '/')
			return 1;
	return 0;
}

void	RPN(std::string _av) {

	std::stack<int> stc;
	size_t start = spc(_av);
	while (start < _av.length()) {
	
		int pos = _av.find(' ', start);
		std::string str = _av.substr(start, pos - start);
		if (is_true_num(str))
			stc.push(std::atoi(str.c_str()));
		else if (check_sing(str))
			check_condition(str[0], stc);
		else {
			std::cout << "Error" << std::endl;
			exit(1);
		}
		std::string ptr_s = _av.c_str() + pos;
		start = pos + spc(ptr_s);
	}
	if (stc.size() == 1)
		std::cout << stc.top() << std::endl;
	else {
		std::cout << "Error" << std::endl;
		exit(1);
	}
}
