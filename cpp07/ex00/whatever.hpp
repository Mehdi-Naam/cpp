#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T& a, T& b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T		min(T a, T b) {
	if (a < b)
		return a;
	else if (a == b)
		return b;
	return b;
}

template<typename T>
T		max(T a, T b) {
	if (a > b)
		return a;
	else if (a == b)
		return b;
	return b;
}

#endif