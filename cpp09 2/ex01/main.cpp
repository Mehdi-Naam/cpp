#include "RPN.hpp"

int main(int ac, char *av[]) {

	if (ac != 1) {
		RPN(av[1]);
	}
	else
		std::cout << "bed Input" << std::endl;
	return 0;
}

/*

	"5 " --> error or 0
*/
