#include "PmergeMe.hpp"

int main(int ac, char *av[]) {

	if (ac > 1) {
	
		std::cout << "Before:	" << std::flush;
		for (int i = 1; i < ac; i++)
			std::cout << av[i] << " " << std::flush;
		std::cout << std::endl;
	
		std::vector<int> _vec;
		std::deque<int> _dq;
	
		int tmp;
		int flag = 1;
		if ((ac - 1) != 0) {
			tmp = std::atoi(av[ac - 1]);
			flag = 0;
		}
	
		for (int i = 1; i < (ac - 1); i++) {
		
			if (isdigit(av[i][0])) {
				_vec.push_back(std::atoi(av[i]));
				_dq.push_back(std::atoi(av[i]));
			}
			
			else {
				std::cout << "Error" << std::endl;
				return 0;
			}
		}
	
		clock_t	start = std::clock();
		pmergeme(_vec);
		if (!flag) {
			temp(tmp, _vec);
		}
		clock_t	end = std::clock();
	
		clock_t	start_dq = std::clock();
		pmergeme_dq(_dq);
		if (!flag) {
			temp(tmp, _dq);
		}
		clock_t	end_dq = std::clock();
		double clck = time_su(start, end);
		double clck_dq = time_su(start_dq, end_dq);
		display(_vec , _dq, clck, clck_dq);
	}
}
