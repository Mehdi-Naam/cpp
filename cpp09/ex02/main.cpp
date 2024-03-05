#include "PmergeMe.hpp"

int main(int ac, char *av[]) {

	if (ac > 1) {
		
		std::vector<int> _vec;

		std::deque<int> _dq;
	
		int tmp;
		int tmp_d;
		int flag = 1;
		int flag_d = 1;
	
		for (int i = 1; i < ac ; i++) {
		
			if (ft_isdigit(av[i])) {
				_vec.push_back(std::atoi(av[i]));
				_dq.push_back(std::atoi(av[i]));
			}
			else {
				std::cout << "Error: we have a non digit" << std::endl;
				return 0;
			}
		}
		if (!parsing(_dq) || !parsing(_vec))
			exit (1);
		display(_vec , _dq, 0, 0);
		if (_vec.size() % 2 != 0) {
			tmp = _vec[_vec.size() - 1];
			_vec.pop_back();
			flag = 0;
		}
		if (_dq.size() % 2 != 0) {
			tmp_d = _dq[_dq.size() - 1];
			_dq.pop_back();
			flag_d = 0;
		}
		clock_t	start = std::clock();
		if (_vec.size() > 1)
			pmergeme(_vec);
		if (!flag)
			temp(tmp, _vec);
		
		clock_t	end = std::clock();
	
		clock_t	start_dq = std::clock();
		if (_vec.size() > 1)
			pmergeme_dq(_dq);
		if (!flag_d) {
			temp(tmp_d, _dq);
		}
		clock_t	end_dq = std::clock();
		double clck = time_su(start, end);
		double clck_dq = time_su(start_dq, end_dq);
		display(_vec , _dq, clck, clck_dq);
	}
}
