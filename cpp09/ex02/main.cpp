#include "PmergeMe.hpp"

int main(int ac, char *av[]) {

	if (ac > 1) {
		std::vector<int> _vec;
		(void)av;
		// for (int i = 1; av[i]; i++) {
		
		// 	if (isdigit(av[i][0]))
		// 		_vec.push_back(std::atoi(av[i]));
			
		// 	else {
		// 		std::cout << "Error" << std::endl;
		// 		return 0;
		// 	}
		// }
		pmergeme(_vec);
	}
}
