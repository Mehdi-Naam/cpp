#include "PmergeMe.hpp"

int	ft_isdigit(std::string _av) {

	for (size_t i = 0; i < _av.length(); i++) {
		if (!isdigit(_av[i]))
			return 0;
	}
	return 1;
}

int main(int ac, char *av[]) {

	if (ac > 1) {
		
		std::vector<int> _vec;

		std::deque<int> _dq;
	
		int tmp;
		int flag = 1;
	
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
		if (_vec.size() % 2 != 0) {
			tmp = _vec[_vec.size() - 1];
			_vec.pop_back();
			flag = 0;
		}

		display(_vec , _dq, 0, 0);
		clock_t	start = std::clock();
		if (_vec.size() > 1)
			pmergeme(_vec);
		if (!flag)
			temp(tmp, _vec);
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
