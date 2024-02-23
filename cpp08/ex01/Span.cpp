#include "Span.hpp"

Span::Span() {}
Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span &cpy) : _N(cpy._N), _vec(cpy._vec) {}

Span	&Span::operator=(const Span &opr) {
	if (this != &opr) {	
		_N = opr._N;
		for (int i = 0; _vec.size() > i; i++)
			_vec[i] = opr._vec[i];
	}
	return *this;
}

const char *Span::massage::what() const throw() {
	const char *str = "we have a expcetion";
	return str;
}

int		Span::shortestSpan() {
	if (_vec.size() <= 1)
		throw massage();
	int sall = INT_MAX;
	std::sort(_vec.begin(), _vec.end());
	for (size_t i = 0; i < _vec.size() - 1; i++) {
		int ret = _vec[i + 1] - _vec[i];
		if (sall > ret)
			sall = ret;
	}
	return sall;
}

int 	Span::longestSpan() {
	if (_vec.size() <= 1)
		throw massage();
	int min = *std::min_element(_vec.begin(), _vec.end());
	int max = *std::max_element(_vec.begin(), _vec.end());

	return (max - min);
}

void	Span::addNumber(const int& num) {

	if (_vec.size() > _N)
		throw massage();
	_vec.push_back(num);
}

void	Span::addNumber(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last) {

	if (_vec.size() > _N)
		throw massage();
	_vec.insert(_vec.begin(), first, last);
}

Span::~Span() {}
