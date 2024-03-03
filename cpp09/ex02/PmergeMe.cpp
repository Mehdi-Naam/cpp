#include "PmergeMe.hpp"
#include <unistd.h>

// void	pair_vector(std::vector<int> &_vec) {

// }

// void	unpair_vector(std::vector<int> &_vec) {

// }



void	Jacobsthal(int	&size, std::vector<int> &jac) {

	jac.push_back(0);
	jac.push_back(1);

	int	mj = 1;
	while (1) {
		size_t last = jac.size() - 1;
		size_t prev = last - 1;
		if (mj >= size)
			return ;
		mj = (jac[prev] * 2) + jac[last];
		jac.push_back(mj);
	}
}

void ana_mali(std::vector<int> &jac_s, std::vector<int> &salam) {
    
	if (jac_s.size() == 0)
        return;

    for (size_t i = 2; i < jac_s.size(); ++i) {
        for (int it = jac_s[i]; it > jac_s[i - 1]; --it)
            salam.push_back(it);
    }
}

void	margesort(std::vector<int> &_vec, std::vector<std::pair<int, int> > &_vec_pair) {

	static int c;
	std::cout << "here " << c << std::endl;
	c++;
	size_t len = _vec.size();
	if (len <= 2) {
		std::pair<int, int> pair_(_vec[0], _vec[1]);
		_vec_pair.push_back(pair_);
		return ;
	}
	size_t	mid = len / 2;
	std::vector<int> leftvec;
	std::vector<int> rightvec;

	if(mid % 2 != 0)
		mid -= 1;
	for (size_t i = 0; i < len; i++) {
	
		if (i < mid)
			leftvec.push_back(_vec[i]);
    	else
			rightvec.push_back(_vec[i]);
	}
	margesort(leftvec, _vec_pair);
	margesort(rightvec, _vec_pair);
}


void	pmergeme(std::vector<int> &_vec) {

	// for (std::vector<std::pair<int, int> >::const_iterator i = it; i != ite; ++i)
	// 	std::cout << i->first << " | " << i->second << std::endl;
	std::vector<std::pair<int, int> > _vec_pair;
	margesort(_vec, _vec_pair);

	int size_pair = _vec_pair.size();
	std::vector<int> jac_s;
	Jacobsthal(size_pair, jac_s);
	std::vector<int> salam;
	ana_mali(jac_s, salam);
	std::vector<int>::const_iterator it = salam.begin();
	std::vector<int>::const_iterator ite = salam.end();
	for (std::vector<int> ::const_iterator i = it; i != ite; i++)
		std::cout << *i << ' ';
}
