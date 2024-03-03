#include "PmergeMe.hpp"
#include <unistd.h>


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

void gen_jacobs(std::vector<int> &jac_s, std::vector<int> &idx) {
    
	if (jac_s.size() == 0)
        return;

    for (size_t i = 2; i < jac_s.size(); ++i) {
        for (int it = jac_s[i]; it > jac_s[i - 1]; --it)
            idx.push_back(it);
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

void	pand_main(std::vector<int> &pand, std::vector<int> &main, std::vector<std::pair<int, int> > &_vec_pair) {

	std::vector<std::pair<int, int> >::const_iterator it = _vec_pair.begin();
	std::vector<std::pair<int, int> >::const_iterator ite = _vec_pair.end();
	for (std::vector<std::pair<int, int> >::const_iterator i = it; i != ite; ++i) {

		main.push_back(i->first);
		pand.push_back(i->second);
	}
}

void	insert_vector(std::vector<int> &main) {

	for (size_t i = 1; i < main.size(); i++) {
		int tmp = main[i];
		int j = i - 1;
		while (j >= 0 && main[j] > tmp) {
			main[j + 1] = main[j];
			j--;
		}
		main[j + 1] = tmp;
	}
}

int		parsing(std::vector<int> &_vec) {

	for (size_t i = 0; i < _vec.size(); i++) {
		for (size_t j = i + 1; j < _vec.size(); j++)
			if (_vec[i] == _vec[j]) {
				std::cout << "Error: duplicate numbre" << std::endl;
				return 0;
			}
	}
	return 1;
}

void	ft_swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void	sort_pais(std::vector<std::pair<int, int> > &vec_pair) {

	for (size_t i = 0; i < vec_pair.size(); i++) {
		if (vec_pair[i].first > vec_pair[i].second)
			ft_swap(vec_pair[i].first ,vec_pair[i].second);
	}
}

void	marge_all(std::vector<int> &pand, std::vector<int> &main, std::vector<int> &_vec, std::vector<int> &idx) {

	_vec.clear();
	_vec.push_back(pand[0]);
	for (size_t i = 0; i < main.size(); i++) {
		_vec.push_back(main[i]);
	}
	for (size_t i = 0; i < idx.size(); i++) {
		size_t its = idx[i] - 1;
		while (its >= pand.size())
			 its = idx[++i] - 1;
		std::vector<int>::iterator it = std::lower_bound(_vec.begin(), _vec.end(), pand[its]);
		_vec.insert(it, pand[its]);
	}
}

void	display(std::vector<int> &_vec, std::deque<int> &_dq, double clck_dq, double clck) {

	(void)_dq;
	std::vector<int> ::const_iterator itss = _vec.begin();
	std::vector<int> ::const_iterator itess = _vec.end();
	std::cout << "After:	" << std::flush;
	for (std::vector<int>::const_iterator i = itss; i != itess; ++i)
		std::cout << *i << " " << std::flush;
	std::cout << std::endl;
	std::cout << "Time to process a range of 5 elements with std::vector : " << std::fixed << clck << std::endl;
	std::cout << "Time to process a range of 5 elements with std::deque : " << std::fixed << clck_dq << std::endl;
	
}

void	pmergeme(std::vector<int> &_vec) {

	if (!parsing(_vec))
		return ;
	std::vector<std::pair<int, int> > _vec_pair;
	margesort(_vec, _vec_pair);

	sort_pais(_vec_pair);
	std::vector<int> pand;
	std::vector<int> main;
	pand_main(main, pand, _vec_pair);
	insert_vector(main);
	int size_pair = _vec_pair.size();
	std::vector<int> jac_s;
	Jacobsthal(size_pair, jac_s);
	std::vector<int> idx;
	gen_jacobs(jac_s, idx);
	marge_all(pand, main, _vec, idx);
}

/*
	std::deque
*/

void	Jacobsthal(int	&size, std::deque<int> &jac) {

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

void gen_jacobs(std::deque<int> &jac_s, std::deque<int> &idx) {
    
	if (jac_s.size() == 0)
        return;

    for (size_t i = 2; i < jac_s.size(); ++i) {
        for (int it = jac_s[i]; it > jac_s[i - 1]; --it)
            idx.push_back(it);
    }
}

void	margesort(std::deque<int> &_dq, std::deque<std::pair<int, int> > &_dq_pair) {

	size_t len = _dq.size();
	if (len <= 2) {
		std::pair<int, int> pair_(_dq[0], _dq[1]);
		_dq_pair.push_back(pair_);
		return ;
	}
	size_t	mid = len / 2;
	std::deque<int> leftdq;
	std::deque<int> rightdq;

	if(mid % 2 != 0)
		mid -= 1;
	for (size_t i = 0; i < len; i++) {
	
		if (i < mid)
			leftdq.push_back(_dq[i]);
    	else
			rightdq.push_back(_dq[i]);
	}
	margesort(leftdq, _dq_pair);
	margesort(rightdq, _dq_pair);
}

void	pand_main(std::deque<int> &pand, std::deque<int> &main, std::deque<std::pair<int, int> > &_dq_pair) {

	std::deque<std::pair<int, int> >::const_iterator it = _dq_pair.begin();
	std::deque<std::pair<int, int> >::const_iterator ite = _dq_pair.end();
	for (std::deque<std::pair<int, int> >::const_iterator i = it; i != ite; ++i) {

		main.push_back(i->first);
		pand.push_back(i->second);
	}
}

void	insert_dqtor(std::deque<int> &main) {

	for (size_t i = 1; i < main.size(); i++) {
		int tmp = main[i];
		int j = i - 1;
		while (j >= 0 && main[j] > tmp) {
			main[j + 1] = main[j];
			j--;
		}
		main[j + 1] = tmp;
	}
}

int		parsing(std::deque<int> &_dq) {

	for (size_t i = 0; i < _dq.size(); i++) {
		for (size_t j = i + 1; j < _dq.size(); j++)
			if (_dq[i] == _dq[j]) {
				std::cout << "Error: duplicate numbre" << std::endl;
				return 0;
			}
	}
	return 1;
}

void	sort_pais(std::deque<std::pair<int, int> > &dq_pair) {

	for (size_t i = 0; i < dq_pair.size(); i++) {
		if (dq_pair[i].first > dq_pair[i].second)
			ft_swap(dq_pair[i].first ,dq_pair[i].second);
	}
}

void	marge_all(std::deque<int> &pand, std::deque<int> &main, std::deque<int> &_dq, std::deque<int> &idx) {

	_dq.clear();
	_dq.push_back(pand[0]);
	for (size_t i = 0; i < main.size(); i++) {
		_dq.push_back(main[i]);
	}
	for (size_t i = 0; i < idx.size(); i++) {
		size_t its = idx[i] - 1;
		while (its >= pand.size())
			 its = idx[++i] - 1;
		std::deque<int>::iterator it = std::lower_bound(_dq.begin(), _dq.end(), pand[its]);
		_dq.insert(it, pand[its]);
	}
}

double	time_su(clock_t	&start, clock_t	&end) {
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

void	temp(int &tmp, std::vector<int> &_vec) {
	
	std::vector<int>::iterator it = std::lower_bound(_vec.begin(), _vec.end(), tmp);
	_vec.insert(it, tmp);
}

void	temp(int &tmp, std::deque<int> &_vec) {
	
	std::deque<int>::iterator it = std::lower_bound(_vec.begin(), _vec.end(), tmp);
	_vec.insert(it, tmp);
}

void	pmergeme_dq(std::deque<int> &_dq) {

	if (!parsing(_dq))
		return ;
	std::deque<std::pair<int, int> > _dq_pair;
	margesort(_dq, _dq_pair);
	sort_pais(_dq_pair);
	std::deque<int> pand;
	std::deque<int> main;
	pand_main(main, pand, _dq_pair);
	insert_dqtor(main);
	int size_pair = _dq_pair.size();
	std::deque<int> jac_s;
	Jacobsthal(size_pair, jac_s);
	std::deque<int> idx;
	gen_jacobs(jac_s, idx);
	marge_all(pand, main, _dq, idx);
}
